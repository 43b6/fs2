//AM 09:52 2001/9/16 bye neverend

inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "小草原");
        set ("long", @LONG
离开风云镇一直往东方前进，只觉得人烟愈来愈少，路也愈来愈
难走了，眼前的景象尽是一望无际的草原，还不时可以听到一些动物
的叫声，似乎是来到了蛮荒的地方。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town43",
        "west"	: __DIR__"town39",
	]));

        setup();
}
