// Room: /u/d/dhk/questsfan/room4
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""CYN"�ܵ�"NOR"");
  set ("long", @LONG
��������ţ�ͻȻ�������ܵ���ô�߶��߲��꣬����
�ľ��������Ϥ����ʱ��ͷ��һ��������Ȼ�������ѵ���
·������Խ��Խ��������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room3",
  "north" : __DIR__"room3",
]));
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir)
{
  if(dir=="north")
    who->add_temp("go_north",1);
  if(dir=="north" && query("exits/north")==__DIR__"room5.c")
  {
    set("exits/north",__DIR__"room3");
    who->delete_temp("go_north");
  }
  return :: valid_leave(who,dir);
}
void init()
{
  object me=this_player();

  if(me->query_temp("go_north")>=9)
  {
    set("exits/north",__DIR__"room5.c");
  }
}

