// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "���з�");
	set("long", @LONG
�ذ�����һ���Ĳ�ϯ�������൱�ؿ���û��
�������������ˣ��Ǹ�ڤ��ĺõط�������Կ�����
�ٵ��������������ڤ�������

LONG
	);
	set("objects",([
	"/open/tendo/npc/boy.c" : 2,
	]));
	set("exits", ([ /* sizeof() == 2 */
	"east" : __DIR__"t06",
	"west" : __DIR__"t15",
	"south" : __DIR__"t14",
]));

	set("light_up",1);
	setup();
}
