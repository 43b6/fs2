#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"虚空世界－九空圣侠界"NOR);
        set("long", @LONG
你眼前渐渐出现一个身影，手中的丽玉蝶兰似乎感应道什么似的，发出炫丽的光芒照耀
四周身边亦出现许多过往的影像，定睛一看似乎是百多年前仙魔大战的景象！！
LONG);
set("exits", ([ /* sizeof() == 3 */
  "south":"/open/common/room/inn.c",
 "north":"/open/gsword/room1/blood/room1/r1.c",
]));
        set("no_transmit", 1);
        set("no_drop",1);
  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/second/room/scholar/npc/scholar" :1,
]));
        set("no_auc",1);
        setup();
}

int valid_leave(object me, string dir)
{
if(dir=="north" && present("scholar",environment(me)))
   if(!me->query_temp("allow_pass",1))
   return notify_fail("你以为你能活得过去吗??"+RANK_D->query_respect(me)+"想太多了吧!\n");
return ::valid_leave(me,dir);
}
