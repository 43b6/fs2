// Room: /open/main/room/m17.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·������ı���.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bear" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r25",
  "south" : __DIR__"m25",
  "west" : __DIR__"m16",
]));

  setup();
}
