// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("����֮��",({ "windsword","sword" }) );
        set_weight(15000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","����Ǵ󽫾� �����İ��ı���,������������ȥ��������.\n");
                set("value", 1000);
		set("material", "steel");
	}
        init_sword(40);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg","ֻ��һ������Ϯ��,��$N���о۳�һ������.\n");
        set("unwield_msg","$N����һ��,���罣�����������.\n");

// The setup() is required.

	setup();
}
