// Room: /open/main/room/p10.c

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
  "/open/main/npc/toad" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/main/room/p9",
  "south" : "/open/main/room/p16",
  "north" : "/open/main/room/p4",
  "east" : "/open/main/room/p11",
]));

  setup();
}
