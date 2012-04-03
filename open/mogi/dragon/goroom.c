// Room: /u/p/poloer/dragon/goroom
inherit ROOM;

#include <ansi.h>
void create ()
{
  set ("short", "���ұ���");
	set( "build", 56 );
  set ("long", @LONG
һ�佨���ڹ������ܵĵط������ܶ�û�ж�����ֻ��һ�����õ���λ
������Լ����"��..."�ƺ�����Ĥ��(pray)������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/status.c" : 1,
]));

  setup();
}
void init()

{
    add_action("do_pray","pray");
    add_action("search_here", "search");
    add_action("do_enter","enter");
    add_action("do_see","see");
}

int do_pray(string str){
   object me,obj;
   object key;
   string bluekey;
   me = this_player();
if(!str || str !="liu"){
                return notify_fail("����˭Ĥ�ݣ�\n");
                           return 1;
                                 }
else{
message_vision(HIW"������˵:��!��!�����ڱ����ˡ�лл�ˡ�\n"NOR,this_player());
message_vision(HIW"������˵:Ϊ�˱������������������ɡ�\n"NOR,this_player());
message_vision(HIW"������˵:�Ϸ�����һ�̰ɡ�\n"NOR,this_player());
  if( !me->query("mogi-pray-liu") ) {
   me->set("mogi-pray-liu",1);
        new(__DIR__"obj/sunblade")->move(this_player());
        new(__DIR__"obj/dragonar")->move(this_player());
        new(__DIR__"obj/hounghe")->move(this_player());
}
this_player()->move(__DIR__"enterroo");
        if (!key) key = present("bluekey", me);
        if (!key) key = present("bluekey", environment(me));
        if (!key) key = find_object( resolve_path(me->query("cwd"), bluekey) );
             if(key)
                  destruct(key);
     return 1;
}

           }

int search_here(string arg)

{
   if (this_player()->query_temp("find_tesin7")>=1)
tell_room(this_object(),"���Ұ��ҵ�,����ǽ�����֣�����̽��(see). \n");
  else if(this_player()->query_temp("find_tesin8")>=1)
    {
    tell_room(this_object(),"��������...���Ȼ���ֵ�һ���ܵ�..�������������Ľ�ȥ(enter).\n");
    }
return 1;
}

int do_see(string str)
{
  if(!this_player()->query_temp("find_tesin7")) tell_room(this_object(),"�����˰��죬���ǿ��������κ�����֮����\n");
  else 
  {
   tell_room(this_object(),"ǽ��д��..'��ʦ�����ĵ���һ��'.\n");
   if (this_player()->query_temp("find_tesin7")==1)
   {
   this_player()->set_temp("find_tesin8",1);
   this_player()->delete_temp("find_tesin7");
   }
   else if (this_player()->query_temp("find_tesin7")==2)
   {
   this_player()->set_temp("find_tesin8",2);
this_player()->delete_temp("find_tesin7");
   }
   else if (this_player()->query_temp("find_tesin7")==3)
   {
   this_player()->set_temp("find_tesin8",3);
this_player()->delete_temp("find_tesin7");
   }
  }
}
int do_enter(string str)
{
if (!this_player()->query_temp("find_tesin8"))
   tell_room(this_player(),"����ȥ��???\n");
else
{ 
   tell_room(this_player(),"��˳���ܵ�..����δ֪�ĵط�...\n");
   tell_room(this_player(),"�㽥���ؿ�����ǰ�й��߳���...\n");
   this_player()->move("/open/gsword/room2/road1.c");
  this_player()->unconcious();
}
}

