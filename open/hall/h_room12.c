// Room: /open/hall/h_room12.c

inherit ROOM;

void create()
{
        set("short", "捕快的厢房");
        set("long", @LONG
这里是一个大通铺，看样子能够装的下四、五十人。你见到许多捕
快在里头晃来晃去，一副吊儿啷当的样子，令人有股想‘电’他们的欲
望!!
LONG );

        set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"way3",
]));

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/soldier" : 3,
]) );
        setup();
}
