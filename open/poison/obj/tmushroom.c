
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("ǧ����֥",({"thousand mushroom","mushroom"}) );

	set("base_weight", 50);
	set("unit","��");
	set("base_unit","��");
	set("value",10000);
	set_amount(1);
	set("long","
����ɽ������ǧ�����֥����ǧ���˺dһ��������ǧ����������ڲ�Ʒ����
ͬ�������ؼ�Ʒ����˵��֥���������������ܻ������Σ���˼�룬���߶���
��������˵���޷�֤ʵ��\n");
	setup();
}
void init()
{
	if ( this_player()==environment() )
	add_action("do_eat","eat");
}
int do_eat(string str)
{	
	object me=this_player();
	int num=100+random(10);
	if ( !str || str != "mushroom") {return 0;}
	message_vision("$N����ǧ����֥������ȫ���Ԫ���ƺ����ָ��ˡ�\n",me);
	this_player()->receive_heal("sen",num);
	add_amount(-1);
	return 1;
}

