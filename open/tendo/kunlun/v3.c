// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
�����һ����紿�ӵ�С��ׯ��������·�����ȫ�壬��Ȼ
�����Ǹ�ƫƧ��С�ط����������������˻��治�١�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" : __DIR__"v6",
	"east" : __DIR__"v4",
	"west" : __DIR__"v2",
]));

	  set("objects", ([ /* sizeof() == 2 */
	__DIR__"npc/woman" : 1,
]));

	set("outdoors", "1");

	setup();
}
