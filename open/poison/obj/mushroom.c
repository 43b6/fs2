
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("��֥",({"ro mushroom","mushroom"}) );
	set("base_weight", 50);
	set("unit","��");
	set("base_unit","��");
	set("value",1000);
	set_amount(1);
	set("long","
��֥���Զ���ʬ��Ϊ���ݶ�������һ��ަ�࣬�ڹ��й�����ʯ֥��ľ֥��
��֥����֥������֥���ǲ�ҩ�е��ؼ�Ʒ���������\n");
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
	int num=10+random(5);
	if ( !str || str != "mushroom") {return 0;}
	message_vision("$N������֥�����ûָ��˲���Ԫ����\n",me);
	this_player()->receive_heal("sen",num);
	add_amount(-1);
	return 1;
}

