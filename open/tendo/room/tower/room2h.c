#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
          set("long",@LONG

���Ѿ��������а�������������У�ֻ�����ܶ�����ʯ���Լ�һ
Щ�����ڴ˵��˵ĺ��ǣ��ڴ������޷��������򡣸��õĶ��������
���޷����ܡ��ټ��ϵ����϶������࣬�������ߣ������߸߰˵ͣ���
��������һ�ţ����˾���һ��ɭ�ֲ��������������������ۣ�����
��Ϳ����뿪�������ˡ�\n");
LONG);
        set("exits", ([
	"north":__DIR__"room2",
	"south":__DIR__"room2b",
	"west":__DIR__"room2c",
	"east":__DIR__"room2b",
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
	"north":__DIR__"room2",
	"south":__DIR__"room2b",
	"east":__DIR__"room2b",
	"west":__DIR__"room2c",
	"out":__DIR__"tower2-1",
	]));
	return 1;
}


