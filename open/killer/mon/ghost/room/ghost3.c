//written by acelan...../u/a/acelan/ghost/room/ghost3.c

inherit ROOM;

void create()
{
        set("short", "��Ĺ");
        set("long", @LONG
......����һ����Ĺ, ........................hmm.........
..............һ������С�ķ�Ĺ........................��Ϊ
���߲���, �������ܶ����������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost6.c",
       "west"  : __DIR__"ghost2.c",
       "east"  : __DIR__"ghost4.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
