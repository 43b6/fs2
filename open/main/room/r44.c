// Room: /open/main/room/r44.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ��С·");
  set ("long", @LONG
����һ��СС��ʯ��С��������ϸ��Ѱ���㻹��֪������
����·ͨ��������������˭Ҳ��������������.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L25",
  "west" : __DIR__"r43",
  "north" : __DIR__"f19",
	"east":"/open/main/room/[3]",
]));
  set("outdoors", "/open/main");

  setup();
}
