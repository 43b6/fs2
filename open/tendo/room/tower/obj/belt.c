#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name(HIB"����ս������"NOR, ({"fiend belt","belt"}) );
     set_weight(100);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
           set("long", "ڤ������ר�õķ����þߡ�\n");
            set("unit", "��");
            set("armor_type", "waist");
            set("material", "leather");
            set("value", 10000);
            set("armor_prop/unarmed",5);
                set("armor_prop/armor",4);
          }
 setup();
}

