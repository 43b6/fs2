// Room: /open/main/room/p3.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һƬ�������������,��֧«έ��֦����,ȴ�ڸǲ�ס
�������������,��㸡ƼƯ�ڵ������ˮ��,��޲��øҿ�
�뿪.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/main/room/s11",
  "south" : "/open/main/room/p9",
  "west" : "/open/main/room/p2",
  "east" : "/open/main/room/p4",
]));

  set("outdoors", "/open/main");

  setup();
}
