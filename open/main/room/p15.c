// Room: /open/main/room/p15.c

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
  "north" : "/open/main/room/p9",
  "west" : "/open/main/room/p14",
  "south" : "/open/main/room/f13",
  "east" : "/open/main/room/p16",
]));

  set("objects", ([
  "/open/ping/questsfan/npc/leader" : 1,
]));
  set("outdoors", "/open/main");

  setup();
}
