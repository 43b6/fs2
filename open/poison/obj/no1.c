
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("ţ����", ({"beef noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ����Ũ�����ִ���ţ���档\n");
		set("unit","��");
		set("value",70);
		set("food_remaining", 5);
		set("food_supply", 100);
		set("eat_message","
$N����һ����������һ���棬������һ�����ţ����ڿ��о׽�������һ�����ܡ�\n");
		}
	setup();
}

