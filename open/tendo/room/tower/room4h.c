#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
          set("long",@LONG
����������а������е��������ˣ��ڴ˴��㿴����һ���Ź��
��������ɭɭ�ģ����ֲ�����ָ��ԶԶ����ȥ��ֻ�����������ڣ���
�������̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ��������
��ħ�����ⱼ���������������������ۣ�������Ϳ����뿪������
�ˡ�
LONG);
        set("exits", ([
	"north":__DIR__"room4",
	"south":__DIR__"room4d",
	"west":__DIR__"room4c",
	"east":__DIR__"room4d",
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
	"north":__DIR__"room4",
	"south":__DIR__"room4b",
	"east":__DIR__"room4b",
	"west":__DIR__"room4c",
	"out":__DIR__"tower5-1",
	]));
	return 1;
}


