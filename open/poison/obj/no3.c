
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("��������", ({"guo-sau noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","
һ��ܲ�Ѱ�����棬�����е������ʡ����࣬ζ���൱������\n");
		set("unit","��");
		set("value", 50);
		set("food_remaining",5);
		set("food_supply",70);
	}
	setup();
}

