//̫����ʺ��eq
inherit EQUIP;
#include <ansi.h>
void create()
{
          set_name(HIR"��ĸ"HIM"����"NOR, ({ "girl belt" ,"belt" }) );
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                 set("long","��ĸ����͸�̫�󼰻ʺ��������\n");
                set("unit", "��");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",7);
                set("armor_prop/dodge",3);
                set("armor_prop/move",3);
                setup();

        }
}

