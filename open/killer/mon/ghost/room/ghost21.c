//written by acelan...../u/a/acelan/ghost/room/ghost21.c

inherit ROOM;

void create()
{
        set("short", "墓园");
        set("long", @LONG
这里的墓碑东倒西歪, 想必在这里已经有相当的岁月了, 以至连
个能来整理杂草的亲人都没有。虽说是杂草丛生, 可是四周却盛开着
一些不知名的小花, 青白红相间, 蔚为奇观。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost28.c",
       "south" : __DIR__"ghost14.c",
       "west"  : __DIR__"ghost20.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
