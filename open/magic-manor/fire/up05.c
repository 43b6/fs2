inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"fire21",__DIR__"fire22",__DIR__"fire23",__DIR__"fire24",});

void create()
{
        set("short","¥��");
        set("long", "һ������򵥵�ֱ��ʽ¥�ݣ��������������ϴ���ѱ���ƾ�
����������ͨ��������¥��\n");
        set("exits", ([
	"up"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}

