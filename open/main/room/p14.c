// Room: /open/main/room/p14.c

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
  "north" : "/open/main/room/p8",
  "west" : "/open/main/room/p13",
  "south" : "/open/main/room/f12",
  "east" : "/open/main/room/p15",
]));

  set("outdoors", "/open/main");

  setup();
}
