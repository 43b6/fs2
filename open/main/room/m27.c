// Room: /open/main/room/m27.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·��������Ϸ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bee" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r38",
  "north" : __DIR__"m18",
  "east" : __DIR__"m28",
]));

  setup();
}
