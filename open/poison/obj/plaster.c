
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("��ҩ",({"plaster"}) );
	set("long","
��Ѱ���ĵ���ҩ������Խ��������˿���(dress)��\n");
	set("value",150);
	set("base_weight",50);
	set("base_unit","��");
	set("unit","��");
	set_amount(1);
	setup();
}
void init()
{
	add_action("do_dress","dress");
}
int do_dress(string str)
{
	object me=this_player();
	int num=15+random(5);
	if(!str ||str!="plaster") 
	return notify_fail("�������ôѽ!\n");
	message_vision("$N����ҩ�����˿��ϣ����ƽ�����ת��\n",me);
	this_player()->receive_curing("kee",num);
	add_amount(-1);

	return 1;
}
