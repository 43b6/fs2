// Room: /open/main/room/F5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ���޼ʵ����֣���������ֻ����ָ, �ɼ���ڵĳ̶ȡ��ϱ���һ��С·
��ɽ����ȥ,�ƺ�ͨ����ɽ.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : "open/gsword/room/su-main",
  "north" : __DIR__"F2",
  "west" : __DIR__"F4",
  "east" : __DIR__"F6",
]));

	setup();
}
