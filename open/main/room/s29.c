// Room: /open/main/room/s29.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L25",
  "south" : __DIR__"s36",
	"north" : "/open/main/room/[3]",
  "east" : __DIR__"s30",
]));
  set("outdoors", "/open/main");

  setup();
}
