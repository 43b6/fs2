#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("Ѫ����",({"blood fruit","fruit"}) );
	set("base_weight",50);
		set("unit","��");	
		set("base_unit","��");
		set("value",0);
		set_amount(1);
		set("long","һ����Ѫ���Ĺ���,�ഫѪ���������������Ч�á�\n");
 	setup();
}
void init()
{
	if( this_player()==environment() )
	add_action("do_take","take");
}
int do_take(string arg)
{
	if( !arg || arg != "fruit") return notify_fail("��Ҫ����ôѽ?\n");
	message_vision(
"$N��Ѫ����һ������,ֻ���û�����˵�����ĳ���.\n",this_player() );

	this_player()->receive_heal("gin",10);
	this_player()->receive_heal("kee",10);
	this_player()->receive_heal("sen",10);
	this_player()->apply_condition("snake_poison", 0);
	add_amount(-1);
	return 1;
}
 
