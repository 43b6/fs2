// made by ccat
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("��������",({"steal fan","fan"}) );
        set_weight(25000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long",".\n");
        set("unit","��");
        set("value", 500);
	set("material","iron");
	}
        init_stabber(20);
        set("wield_msg", "$N�ӻ����ͳ�һ������.\n");
        set("unwield_msg", "$N�����е����ȷ��뻳��.\n");
        setup();
}
