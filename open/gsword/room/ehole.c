#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "��Ѩ");
        set("long", @LONG
�������Ѩ���ڲ������ұߵ�һ����һ���Ըߵ���ʯƽ̨�����滹����һЩ
����֮��Ķ������м���һ��ʯ��(table)�����еİ��迴�������������˾�סһ��
���������ֻ���֮�£���ʹ������������ס�����Ҳ�����ӵ����ָ��ˡ�
LONG
        );

set("item_desc",([
"table": " һ�ż�����ʯ��"
]));
        set("exits", ([
"west":__DIR__"hole"
        ]) );
setup();

}
void init()
{
 add_action("do_search","search");
   add_action("do_practice","practice");
 }
 
 
 int do_search(string str)
 {
   object user;
   user=this_player();
   if( !user->query_temp("have_win",1))
     {
      write("������ʲô??\n");
      return 1;
     }    
    if(str=="table")
    {
     write(" ������ϸһ������������һ��С��д����ң�Ӳ�����˹....\n");
     user->set_temp("have_search_table",1);
     }
   else if(str=="bed")
   {
      if(!user->query_temp("have_search_table",1))     
       write("������ʲô??\n");
      else
      {
      write("�㷢�ִ�����Ų������� : 
     
             �ɽ�����ʽ����....
     
      �ɽ�����ʽʽʽ���ʲ�ͬ ,���������ʶ����ʺ�ĳ��
 
      ��һ��... 
      �ڶ���...
      ������...
                     
      
      ��ע:������ң�Ӿ�����Ϊǿ������ʽ,���γ���ħ�ų�����ë����ΣˡH��
      �ʽ������Ż�ȥ�����ڴ�,Ը������С����֮(practice)..\n");
      user->set_temp("can_study",1);
      }   
   }
  else
   write("������ʲô??\n");
    
  return 1;   
  }      
 int do_practice(string str)
 {
  object user;
  user=this_player();
  if(user->query("get_sha_sp",1)){
  message_vision("���Ѿ�ѧ����\n",user);
  user->set("title","�ɽ���һ������");
    return 1;
                                 }
  else
  {
    if(!user->query_temp("can_study",1))
      return 0;
    else
     {
     message_vision("����һ����� ,������ѧ�����������ɽ����� ,�õ��˺����е���ʽ\n",user);        
     user->set("get_sha_sp",1);
  user->set("title","�ɽ���һ������");
      return 1;
     }
  
  }  
 }  
