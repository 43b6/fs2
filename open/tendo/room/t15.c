// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "���з�");
	set("long", @LONG
�����ĵذ��̸��ź��Ĳ�ϯ������ڷ�������
���ţ����ܿյ����ģ�û���κ�������м������
��������������С�

LONG
	);
	set("objects",([
	"/open/tendo/npc/boy2" : 2,
	]));
	set("exits", ([ /* sizeof() == 2 */
	"east" : __DIR__"t12",
]));
	set("light_up",1);
	setup();
}
