#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name(HIR "�弫��÷��" NOR,({"five sword","sword"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","һ�������Ľ� ,����������÷���Ļ��� .\n");
                set("value",6000);
                set("material", "steel");
                set("ski_type","sword");
        set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
        }
        init_sword(80);
        setup();
}

