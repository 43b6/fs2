// Room: /u/d/dhk/questsfan/room3
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""CYN"�ܵ�"NOR"");
  set ("long", @LONG
�����������ܺ�Ȼ����Щ���â��ԭ����һЩ�����
�鱦��������������̰�����ˡ���Խ��Խ���ƣ��Ѿ�����
��õ����ǲ������ڡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room4",
  "east" : __DIR__"room2",
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
    set("exits/north",__DIR__"room4");
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
