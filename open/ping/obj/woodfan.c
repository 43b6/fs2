// made by ccat
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("̴��ľ��",({"wood fan","fan"}) );
        set_weight(5000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long",".\n");
        set("unit","��");
        set("value", 500);
        set("material","wood");
	}
        init_stabber(30);
        set("wield_msg", "$N�ӻ����ͳ�һ������.\n");
        set("unwield_msg", "$N�����е����ӷ��뻳��.\n");
        setup();
}
