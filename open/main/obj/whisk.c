// sword.c : an example weapon

#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("����",({"whisk"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�����ŵ�ʿ�̱�ķ�����\n");
		set("material","wood");
	set("wield_msg","$N�ӱ���γ�$n�������С�\n");
		set("unwield_msg","$N�����е�$n�һر���\n");
	}
	init_whip(25);
	set("no_drop",1);
	setup();
}
int query_autoload()
{
	return 1;
}

int wield()
{
	if(this_player()->query("class") != "taoist")
	return notify_fail("�㲻�ǵ�ʿ\n");
	else 
	return ::wield();
}
