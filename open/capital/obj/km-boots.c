//���� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
          set_name(HIG"����ѥ"NOR, ({ "girl boots" ,"boots" }) );
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                  set("long","��ĸ�͸�̫�󼰻ʺ�ı�ѥ��������е�������֯���ɡ�\n");
                set("unit", "˫");
                set("value", 80000);
                set("material","leather");
                set("material", "boots");
                set("armor_type", "boots");
                set("armor_prop/armor",6);
                set("armor_prop/dodge",6);
                set("armor_prop/move",6);
                setup();

        }
}
