#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","京城驿站");
    set("long",@LONG
这里是京城的驿站, 因为京城是一个国家的心脏, 所以你可以看到
有很多人正在向老板商讨前往其他驿站的事宜。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r69",
]));

    setup();
}
