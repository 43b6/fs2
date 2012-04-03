// Room: /open/main/room/f10.c

inherit ROOM;

void create ()
{
  set ("short", "林中小径");
  set ("long", @LONG
这里是一片广大的原始森林，西边林中有一条不知名的
小径，地上则尽是一些凌乱的落叶，路边长满了杂草。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"room0",
  "west" : __DIR__"road3",
  "east" : "/open/main/room/f10",
]));
  set("outdoors", "/open/main");

  setup();
}
