#include <ansi.h>
#include <armor.h>
inherit NECK;

void create()
{
        set_name(HIG"��������"NOR , ({"snake gem","gem","snake-key-2"}));
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 100000);
            set("material","steel");

            set("armor_prop/force",5);
            set("armor_prop/armor",10);
            set("long","��կ��կ����ϲ���������������������⣬�����ľ߷���������\n");
	}
            setup();
}
