// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
�����һ����紿�ӵ�С��ׯ��������·�����ȫ�壬��Ȼ
�����Ǹ�ƫƧ��С�ط����������������˻��治�١��ϱ��м���
��Ŀ�ջ��

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"v12",
	"east" : __DIR__"v8",
	"north" : __DIR__"v10",
]));

	  set("objects", ([ /* sizeof() == 2 */
	__DIR__"npc/visitor" : 2,
]));

	set("outdoors", "1");

	setup();
}
