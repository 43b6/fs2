#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
	set_name(HIY "����������" NOR,({"crazy dragon","crazy","dragon"}));  
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","����һ�Ѵ�˵�����������������������޴ӵ�֪!!\n");
                set("value",10000);
                set("material", "steel");
        set("wield_msg", "$N����$n�������Ķ�����$N����ɢ��������\n");
        set("unwield_msg", "$N�㽫���ϵ�$nж�����������Ķ�����֮���š� \n");
        }
        init_unarmed(45);
set("weapon_prop/unarmed", 10);
set("weapon_prop/force",10);
        setup();
}
