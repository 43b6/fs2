// Room: /open/main/room/m8.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·���������������
��.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"m9",
  "west" : __DIR__"r18",
  "north" : __DIR__"m2",
  "south" : __DIR__"r21",
]));
set("no_clean_up", 1);

  setup();
}
