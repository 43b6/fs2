// dagger.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("ľ��",({"wood blade","blade"}) );
        set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","һ��ľ�Ƶĵ���.\n");
                set("value", 100);
                set("material","wood");
	}
        init_blade(5);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg","$N�ӱ�����һ��ľ��.\n");
        set("unwield_msg","$N��ľ�����뱳��ĵ�����.\n");

// The setup() is required.

	setup();
}
