// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("�鶯��",({"aura fan","fan"}) );
        set_weight(8000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","��ʱ�����������, �鶯֮�ȱ��Ǹ��Ŵ�ؾ���֮��, ��������է�֡�\n");
        set("unit","��");
        set("value", 9000);
        set("material","blacksteel");
	}
        init_stabber(70);
        setup();
}
