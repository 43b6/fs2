#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
          set("long",@LONG

�������������а������е��������ڴ˴��㿴�������صĿݹǣ�
���ܺ��޹��ߣ����ֲ�����ָ��ԶԶ����ȥ��ֻ����һ�����⣬������
���̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ�������������
������ɱ������������������������ۣ�������Ϳ����뿪��������
��
LONG);
        set("exits", ([
	"north":__DIR__"room3",
	"south":__DIR__"room3b",
	"west":__DIR__"room3c",
	"east":__DIR__"room3b",
        ]) );
	set("objects",([
]));
        set("no_transmit",1);
          setup();
}
void init()
{
	add_action("do_search","search");
}
int do_search(string str)
{
	if(str!="eye") return 0;
	message_vision(
	"[1;37m$N�����������ң�ͻȻ��������ʯ��ʹ���۴��˿�����[0m\n",this_player());
	set("exits",([
	"north":__DIR__"room3",
	"south":__DIR__"room3b",
	"east":__DIR__"room3b",
	"west":__DIR__"room3c",
	"out":__DIR__"tower4-1",
	]));
	return 1;
}


