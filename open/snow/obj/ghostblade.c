// blade.c
#include <weapon.h>
inherit BLADE;

void create()
{
set_name("[1;34m��Ӱ�з絶[0m",({"ghost blade","blade"}));
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
     set ("unit","��");
          set("value", 10000);
		set("material", "iron");
set("long","����һ�������������Ӱ�з絶����\n");
          set("wield_msg", "$Nװ��$n��\n");
		set("unequip_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
          set("armor_prop/blade",10);
          init_blade(80);
	setup();
}
