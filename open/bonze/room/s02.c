// Room: /open/soulin/room/s02.c

inherit ROOM;

void create()
{
	set("short", "������ǰ�㳡");
	set("long", @LONG
	��ǰһƬ���Ŀյأ�Ϊƽ��ʱ���ڵ���������
	�д����յĵط���

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s01",
  "north" : __DIR__"s05",
  "out" : __DIR__"D01",
  "east" : __DIR__"s03",
]));
	set("outdoors", "/open/soulin");

	setup();
}
