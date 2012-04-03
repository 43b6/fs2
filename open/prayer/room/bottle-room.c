#include <room.h>

inherit ROOM;

void create()
{
        set("short", "ʥ������");
	set( "build", 150 );
        set("long", @LONG

	�����ʥ����ڲ�������, �������Ӧ����ֱ����ʯ����
	�ھ����!!�м���һ����̨, �������һ����(bottle)
	, ���ڷ������ö�Ŀ�Ĺ⻪!!

LONG);

set("item_desc",([
"bottle": "  [36mһ���������ɵ�ʨͷ�� [0m "
]));
        set("exits", ([
            "east":__DIR__"2elder1"
        ]) );
setup();
}

void init()
{
 add_action("do_search","search");
 add_action("do_pull","pull");
}
 
int do_search(string str)
{
   object user;
   user=this_player();
   if( !user->query("quests/white-crystal",1))
   {
       write("������������û��ʲô��ֵĵط�!!\n");
       return 1;
   }    

   if(str=="bottle")
   {
       write(" [36m������ϸ����һ��, ����ʨ��(ear)�Ĳ����ƺ��е�Ź�[0m....\n");
       user->set_temp("have_search_bottle",1);
   }
   else if(str=="ear")
   {
       if(!user->query_temp("have_search_bottle",1))     
       write("Ŷ!!ԭ��������ܳ�, ��������!!\n");
       else
       {
           write("ʨ������һ��֮��, ���ڵĹ⻪����, ���������ؿ������ڵ����� : 
     
           ������������, ����һ�����ǿյ�, ������ֱ���...
     
      [30m��ˮ��[0m(black-crystal)--�����ķ��������ķ�֮�ھ�
      [34m��ˮ��[0m(blue-crystal)---�����ķ����߲��ķ�֮�ھ�
      [33m��ˮ��[0m(yellow-crystal)-�����ķ��ڰ˲��ķ�֮�ھ�
      [31m��ˮ��[0m(red-crystal)----�����ķ��ھŲ��ķ�֮�ھ�
      [32m��ˮ��[0m(green-crystal)--�����ķ���ʮ���ķ�֮�ھ�

      ԭ��������ǻ���ˮ���ķ��ô�!!����Գ����Ű�������(pull)..\n");
      user->set_temp("can_pull",1);
       }   
   }
   else
       write("������ʲô??\n");
    
  return 1;   
}      

int do_pull(string str)
{
 object user=this_player();
 object cry;

 if( (str=="black-crystal") && user->query("quests/white-crystal",1) )
 {
   if( user->query_skill("superforce",1) < 50 )
   {
   write("\n[35mͻȻ˫�ָе�һ�����...............��!!!!��ˮ���������ҵ�ǿ��....[0m\n\n");
   return 0;
   }
   else
   {
   write("�������Ѿ����л����ķ�, [30m��ˮ��[0m�����˾�һ��, Ӧ������!!\n",user);        
   cry=new("/open/prayer/obj/crystal2" );
   cry->move(user);
   return 1;
   }
}

 if(str=="blue-crystal") 
 {
   if( user->query_skill("superforce",1) < 85)
   {
   write("\n[35mͻȻ˫�ָе�һ�����...............��!!!!��ˮ���������ҵ�ǿ��....[0m\n������Ļ����ķ��ȼ�������.\n");
   return 0;
   }
   else
   {
   write("�������Ѿ����ɵ������ķ�, [34m��ˮ��[0m�����˾�һ��, Ӧ������!!\n",user);        
   cry=new("/open/prayer/obj/crystal3" );
   cry->move(user);
   return 1;
   }
}     

 if(str=="yellow-crystal")
 {
   if( user->query_skill("superforce",1) < 120)
   {
   write("\n[35mͻȻ˫�ָе�һ�����...............��!!!!��ˮ���������ҵ�ǿ��....[0m\n������Ļ����ķ��ȼ�������.\n");
   return 0;
   }
   else
   {
   write("�������Ѿ����ɵ��߲��ķ�, [33m��ˮ��[0m�����˾�һ��, Ӧ������!!\n",user);        
   cry=new("/open/prayer/obj/crystal4" );
   cry->move(user);
   return 1;   
   }
}

 if(str=="red-crystal")
 {
   if( user->query_skill("superforce",1) < 160)
   {
   write("\n[35mͻȻ˫�ָе�һ�����...............��!!!!��ˮ���������ҵ�ǿ��....[0m\n������Ļ����ķ��ȼ�������.\n");
   return 0;
   }
   else
   {
   write("�������Ѿ����ɵڰ˲��ķ�, [31m��ˮ��[0m�����˾�һ��, Ӧ������!!\n",user);        
   cry=new("/open/prayer/obj/crystal5" );
   cry->move(user);
   return 1;
   }
}

 if(str=="green-crystal")
 {
   if( user->query_skill("superforce",1) <200)
   {
   write("\n[35mͻȻ˫�ָе�һ�����...............��!!!!��ˮ���������ҵ�ǿ��....[0m\n������Ļ����ķ��ȼ�������.\n");
   return 0;
   }
   else
   {
   write("�������Ѿ����ɵھŲ��ķ�, [32m��ˮ��[0m�����˾�һ��, Ӧ������!!\n",user);        
   cry=new("/open/prayer/obj/crystal6" );
   cry->move(user);
   return 1;
   }
 }
}  
