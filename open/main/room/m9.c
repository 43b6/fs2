// Room: /open/main/room/m9.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·��������Ϸ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"m8",
  "north" : __DIR__"m3",
  "south" : __DIR__"r22",
  "east" : __DIR__"M10",
]));

  setup();
}
