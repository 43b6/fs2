#include <armor.h>
#include <ansi.h>
inherit CLOTH;

void create()
{
        seteuid(getuid());
        set_name(HIR"Ϧϼ��ɴ"NOR , ({ "sun_red_cloth","cloth" }) );
        set("long","һ�������ĺ�ɫ���ѣ������ƺ�������Ϧϼ֮���͡�\n");
        set_weight(2500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 80000);
                set("material", "cloth");
                set("type", 1); 
                set("armor_prop/armor",25);
                set("armor_prop/force",10);
                set("armor_prop/attack",5);
                set("armor_prop/magic",3);
                set("armor_prop/spells",3);
                set("wear_msg", HIR"$N������$n"HIR"һ��Ļ������ڲ����У����Ա���Ϧ���Ĳ��͡�\n"NOR);
                set("unequip_msg", HIR"$N�����ж��$n"HIR"��Ϧ���Ĳ���Ҳ�漴��ʧ��\n"NOR);
              }
        setup();
}
