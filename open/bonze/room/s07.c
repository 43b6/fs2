// Room: /open/soulin/room/s07.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	һ�����������ȣ�ֱֱͨ���������Ĵ��۱��


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"big",
  "south" : __DIR__"s05",
]));
	set("light_up", "1");

	setup();
}
