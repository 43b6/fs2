#include <armor.h>
#include <ansi.h>
inherit WRISTS;
object user;
void create()
{
        set_name( HIM "����ս������" NOR ,({"fiend wrists","wrists"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
  set("long", "ڤ������ר�õķ����þߡ�\n");
                set("unit", "��");
                set("value",10000);
                set("material","gem");
                set("armor_prop/armor",5);
        }
        setup();
}

