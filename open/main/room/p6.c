// Room: /open/main/room/p6.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һƬ�������������,��֧«έ��֦����,ȴ�ڸǲ�ס
�������������,��㸡ƼƯ�ڵ������ˮ��,��޲��øҿ�
�뿪.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/main/room/s14",
  "west" : "/open/main/room/p5",
  "south" : "/open/main/room/p12",
]));

  set("outdoors", "/open/main");

  setup();
}
