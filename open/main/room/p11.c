// Room: /open/main/room/p11.c

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
  "west" : "/open/main/room/p10",
  "south" : "/open/main/room/p17",
  "north" : "/open/main/room/p5",
  "east" : "/open/main/room/p12",
]));

  set("outdoors", "/open/main");

  setup();
}
