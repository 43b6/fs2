// Room: /u/o/onion/room/armory.c

inherit ROOM;

void create()
{
	set("short", "������䳡");
	set("long", @LONG
��������������������������ڴ�������,ȭ�Ź���,��������,���ظ�ʽ�Ĺ���
�㶼���Լ���,ÿ���˶����������������,�뵽�Լ���ô��͵��,������һ˿����.

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"armory",
]));
	set("objects", (["/u/o/onion/npc/bully" : 3 ]));

	setup();
}
