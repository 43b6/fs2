// Room: /open/main/room/p1.c

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
  "west" : "/open/main/room/r3",
  "south" : "/open/main/room/p7",
  "east" : "/open/main/room/p2",
  "northwest" : "/open/main/room/r2",
]));

  set("outdoors", "/open/main");

  setup();
}
