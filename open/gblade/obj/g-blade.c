// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("С��",({"gold blade","blade"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("no_drop",1);
		set("unit", "��");
		set("long","һ�ѽ��������С����\n");
	/*	set("value",1000);	*/
		set("material", "gold");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(10);
	setup();
}
/*
int query_autoload()
{
   if(this_player()->query("family/family_name")=="����")
   return 1;
   return 0;
}
*/
