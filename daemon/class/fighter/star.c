// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIW"����������"NOR,({"Sun shatter destoryer","destoryer"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
         set("long","��˵��һ��������ʯ��ĥ���ɵ������ּ�, ��������������\n");

                set("value",10000);
                set("material", "steel");
                set("ski_level",40);
                set("ski_type","unarmed");
         set("wield_msg", "$N����$n֮��, ˫�ַ���ҫ�۽��. \n");
        set("unwield_msg", "$N��$n��ȥ��, ��â��֮����. \n");
        }
          init_unarmed(45);
        setup();
}
