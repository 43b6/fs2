// Room: /open/main/room/p5.c

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
  "north" : "/open/main/room/s13",
  "south" : "/open/main/room/p11",
  "west" : "/open/main/room/p4",
  "east" : "/open/main/room/p6",
]));

  set("outdoors", "/open/main");

  setup();
}
