// Room: /u/d/dhk/questsfan/room4
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""CYN"密道"NOR"");
  set ("long", @LONG
你继续走着，突然发现这密道怎么走都走不完，四周
的景像好似熟悉。这时心头的一股凉意油然而生，难道迷
路了吗？你越走越急！！！

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

