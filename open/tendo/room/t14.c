// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "���з�");
	set("long", @LONG
��ϯ�ϰڷ�������������ţ�һλ���������
������ǰ�����������������ׯ��˼�롣���ٵ����
���Ӻ�Զ��ǰ�����ɵ��ˣ����������������Դ�����
�����ƺ���ȫûע�⵽��ĳ��֡�

LONG
	);
	set("objects",([
	"/open/tendo/npc/chin" : 1,
	"/open/tendo/npc/truin" : 1,
	"/open/tendo/npc/gechin" : 1,
	]));
	set("exits", ([ /* sizeof() == 2 */
	"north" : __DIR__"t12",
]));
	set("light_up",1);
	setup();
}
