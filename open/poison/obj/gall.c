#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("�ߵ�", ({"snake gall", "gall"}) );
	set("base_weight",50);
		set("unit","��");	
		set("base_unit","��");
		set("value",0);
		set_amount(1);
		set("long","���߸���ȡ�����ߵ����нⶾ�Ĺ�Ч��\n");
 	setup();
}
void init()
{
	if( this_player()==environment() )
	add_action("do_take","take");
}
int do_take(string arg)
{
	if( !arg || arg != "gall") return notify_fail("��Ҫ����ôѽ?\n");
	message_vision(
"$Nһ�������ߵ���\n",this_player() );

	this_player()->apply_condition("snake_poison", 0);
	add_amount(-1);
	return 1;
}
 
