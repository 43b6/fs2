// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("��", ({ "chu sword","sword" }) );
        set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","����һ����ϰ�õ�ϸ��,���ƺ�û��ɱ����.\n");
                set("value", 3);
                set("material","wood");
	}
        init_sword(1);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");

// The setup() is required.

	setup();
}
