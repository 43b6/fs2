#include <armor.h>
#include <ansi.h>
inherit LEGGINGS;
object user;
void create()
{
        set_name( HIM "����ս����ϥ" NOR ,({"fiend legging","legging"}));
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


