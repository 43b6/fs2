inherit ROOM;
#include <ansi.h>


void create()
{
        set("short","¥��");
        set("long", "һ������򵥵�ֱ��ʽ¥�ݣ��������������ϴ���ѱ���ƾ�
����������ͨ��������¥��\n");
        set("exits", ([
	"up"	: __DIR__"infire",
        ]));
	set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
	setup();

}

