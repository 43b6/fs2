#include <weapon.h>

inherit DAGGER;

void create()
{
        set_name("Сذ��",({"little dagger","dagger"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","��ֻ��һ�Ѳ����۵�Сذ�ס�\n");
                set("value",150);
                set("material", "iron");
	}
        init_dagger(10);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n���뻳�С�\n");

// The setup() is required.

	setup();
}
