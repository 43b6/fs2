#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
          set("long",@LONG
����������а�����İ������ˣ��ڴ˴��㿴�������ص�������
���������ҹ�����ֲ�����ָ��ԶԶ��ȥ��һ������ӭ�����������
�����̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ���������
Ӱ�����ⱼ����������ǰ���������ۣ�������Ϳ����뿪��������
��
LONG);
        set("exits", ([
	"north":__DIR__"room6",
	"south":__DIR__"room6b",
	"west":__DIR__"room6c",
	"east":__DIR__"room6b",
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
	"north":__DIR__"room6",
	"south":__DIR__"room6b",
	"east":__DIR__"room6b",
	"west":__DIR__"room6c",
	"out":__DIR__"tower7-1",
	]));
	return 1;
}


