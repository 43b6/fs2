
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("������",({"yang-chun noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ����ͨ�������棬���˵���ĵ�ζ�ϣ�ζ��һ�����á�\n");
		set("unit","��");
		set("value",30);
		set("food_remaining", 5);
		set("food_supply", 40);
		}
	setup();
}

