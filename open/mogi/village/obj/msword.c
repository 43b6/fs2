#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name("������",({"daemon sword","sword"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",30000);
                set("material", "steel");
                set("wield_msg", "����$n,$N���Ļ������������.\n");
                set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
        }
        init_sword(40);
        setup();
}
                                                                        
