#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIB"����ս����"NOR, ({ "fiend hat", "hat" }) );
        set_weight(4000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "ڤ������ר�õ�ͷ�������þߡ�\n");
                set("unit", "��");
                set("value",10000);
                set("material", "fur");
            set("wear_msg",HIC"$Nһ������$n��ڤ��֮��ӿ�֣�ɱ��ٿ���������ࡣ\n"NOR);
                set("armor_type", "head");
                set("armor_prop/armor", 10);

        }
        setup();
}


