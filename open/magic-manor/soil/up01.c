inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"soil05",__DIR__"soil06",__DIR__"soil07",__DIR__"soil08",});

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

