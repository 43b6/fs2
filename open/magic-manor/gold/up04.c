inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"gold17",__DIR__"gold18",__DIR__"gold19",__DIR__"gold20",});

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

