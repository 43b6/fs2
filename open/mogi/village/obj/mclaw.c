#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name( "ħ��צ" ,({"daemon claw","claw"}));
set_weight(6000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
              set("wield_msg", "����$n,����������$Nȫ��.\n");
  set("unwield_msg", "$N������$n��Ѫ�����øɾ��� ,С�ĵ����뻤���С�\n");

set("value",10000);
                set("material", "steel");
        }
init_unarmed(40);
        setup();
}
