// Room: /open/main/room/p17.c

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
  "north" : "/open/main/room/p11",
  "west" : "/open/main/room/p16",
  "south" : "/open/main/room/f15",
  "east" : "/open/main/room/p18",
]));

  set("outdoors", "/open/main");

  setup();
}
