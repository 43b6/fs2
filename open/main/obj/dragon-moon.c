#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
    set_name(HIC"�������µ�"NOR,({"Green Dragon Blade","blade"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","����Ǵ�˵����ʥ�������õı���, ��˵������֮����Ϣ���� .\n");
set("value",50000);
                set("material", "gold");
                  set("armor_prop/blade",10);
                set("wield_msg", "����$n,$N���û������������.\n");
                set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
        }
        init_blade(120);

        setup();
}

