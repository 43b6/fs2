// Room: /open/main/room/p13.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һƬ�������������,��֧«έ��֦����,ȴ�ڸǲ�ס
�������������,��㸡ƼƯ�ڵ������ˮ��,��޲��øҿ�
�뿪.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/junkman.c" : 3,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f11",
  "west" : __DIR__"r7",
  "north" : __DIR__"p7",
  "east" : __DIR__"p14",
]));

  setup();
}
