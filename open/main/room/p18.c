// Room: /open/main/room/p18.c

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
  "north" : "/open/main/room/p12",
  "west" : "/open/main/room/p17",
  "south" : "/open/main/room/f16",
]));

  set("outdoors", "/open/main");

  setup();
}
