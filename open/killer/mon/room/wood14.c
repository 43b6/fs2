//written by acelan...../u/a/acelan/room/wood14.c

inherit ROOM;

void create()
{
        set("short", "后山的森林");
        set("long", @LONG
你来到了森林的边缘, 一棵大树挡住了你的去路, 树的上面传来
阵阵的脚步声, 似乎另有通道, 你用尽了各种方法却仍然无法上去,
你想, 也许应该找另外的入口。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood9.c",
        "north" : "/open/killer/memory/hr1.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
