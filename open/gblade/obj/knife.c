#include <weapon.h>
inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("�в˵�" ,({"chopping knife","knife"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","һ�Ѻ���ͨ���в˵���������ͷմ�������ա�
\n");
        set("value",100);
        set("material", "stell");
        set("wield_msg", "$N��Ѳ˵��������ϻ����˼��£����������ǲ������\n");
        set("unwield_msg", "$N�Ѳ˵����뻳�С�\n");
        }
	init_blade(8);
        setup();
}
