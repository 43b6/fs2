//written by acelan...../u/a/acelan/room/wood16.c

inherit ROOM;

void create()
{
        set("short", "地道的入口");
        set("long", @LONG
一走进地道, 一股寒风使你打了个寒颤, 两旁的火把照的你的影
子摇晃不定, 看来这里并不是毫无人迹, 说不定会有未知的危险, 你
需要小心的前进。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood23.c",
       "up" : "/open/killer/mon/room/wood12.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
