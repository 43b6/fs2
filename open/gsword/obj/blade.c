// dagger.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("������",({"large blade","blade"}) );
        set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","һ��մ��Ѫ�۵Ĵ�.\n");
                set("value",1000);
		set("material", "steel");
	}
        init_blade(30);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg","$N�ӱ�����һ�ѿ��µĴ�.\n");
        set("unwield_msg","$N�������뱳��ĵ�����.\n");

// The setup() is required.

	setup();
}
