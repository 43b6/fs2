#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","平南城驿站");
    set("long",@LONG
这里是平南城的驿站, 因为附近有段王府, 泷山派两大门派在此,
所以此地武林人士众多
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/ping/room/road5",
]));

    setup();
}
