inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɳ̲");
  set ("long", @LONG
��صİ�ɳ, ����һ�ÿ�����һ�����֮��, ��û����������. ������ÿ�
������ʯ�ĸо�ʮ�ֹ���, ���Ǿ�����ϸ��Ѱ�Ҳ�û���ҵ�ʲô��ֵĵط�. ��
�س��˶����Ǻ�֮��, �������������ȥ���ǰװ�����ɳ̲, ���������ܼ���һ
�����ʵ��ұ�.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is13.c",
  "west" : __DIR__"is7.c",
  "south" : __DIR__"is5",
]));

  setup();
}
void init()
{
add_action("do_search", "search");
add_action("do_look", "look");
add_action("do_get", "get");
add_action("do_put", "put");
}
int do_search()
{
object me=this_player();
if (me->query_temp("can_search")==1)
{
tell_object(me,HIC"���Ȼ������ʯ�����Կ��Կ������˳������ֵ�ɳ������һ���ƽ�Ĵ���ʯ(stone).\n"NOR);
tell_object(me,HIY"ԭ������ʱ���������˳���ʱ�� .\n"NOR);
new("/u/u/unfinished/room/obj/stone.c")->move(environment(me));
me->delete_temp("can_search");
me->set_temp("can_back",1);
return 1;
}
else
{
return 0;
}
}
int do_look(string arg)
{
object me,ob;
me=this_player();
   if( !arg )
       return 0;
   if(arg!="box")
       return 0;
   if(me->query_temp("openbox")!=1)
       return 0;
else
{
tell_object(me,"testtest");
return 1;
}
}
int do_get(string arg)
{
object me,ob;
me=this_player();
   if( !arg )
       return 0;
   if(arg!="all from box")
       return 0;
   if(me->query_temp("care")==1)
{
tell_object(me,"you are care 2 !!");
me->set_temp("care",2);
return 1;
}
else
{
tell_object(me,"don't get anything !!");
me->set_temp("care",1);
return 1;
}
}
