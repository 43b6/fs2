// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��ɽ����");
	set("long", @LONG
���ʵ��������˷ֲ���ʱ���뷽����Ҫ������
���ߣ�ֻ������ɽ�ڵķ������������ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"westdown" : __DIR__"r2",
	"eastup" : __DIR__"r4",
]));
	set("outdoors", "1");

	setup();
}
