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
	"south" : __DIR__"v1",
	"west" : __DIR__"v8",
	"east" : __DIR__"v3",
	"north": __DIR__"shop",
]));

	  set("objects", ([ /* sizeof() == 2 */
	__DIR__"npc/sell" : 1,
]));

	set("outdoors", "1");

	setup();
}
