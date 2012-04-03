// Room: /u/f/fire/room/room1-14.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"长沙道"NOR);
  set ("long", @LONG
你正走在一条直直长长的长沙道上，长沙道两旁长满不知名的野
花杂草，清爽的微风正徐徐的吹来，温柔的亲吻你的脸颊，实令你心
旷神怡，久久无法忘怀。
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-21",
"south" : __DIR__"room1-13",
]));
set("outdoors","/open");

  setup();
}
