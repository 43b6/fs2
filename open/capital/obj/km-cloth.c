//king cloth
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
         set_name(HIY"����"NOR,({"girl cloth","cloth"}) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
 �ɽ�˿֯�ɵĻ���Ů��ר���ۣ���������һֻ�ʷ
\n");
        set("unit", "��");
        set("value",200000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
        set("armor_prop/armor",22);
        set("armor_prop/unarmed",7);
        set("armor_prop/parry",7);
        }
        setup();
}
