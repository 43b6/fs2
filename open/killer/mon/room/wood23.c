//written by acelan...../u/a/acelan/room/wood23.c

inherit ROOM;

void create()
{
        set("short", "神秘的地道");
        set("long", @LONG
走在昏暗的地道之中, 使你不时的想要回头查看是否有奇怪的影
子, 一股莫名的危机感是你提高了警戒心, 你仔细的检查两旁的墙壁
不过并没有任何的发现。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood24.c",
       "south" : "/open/killer/mon/room/wood16.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
