inherit EQUIP;
#include <ansi.h>

void create()
{
        set_name(HIY"������ "NOR,({"dragon gold armband","armband"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ഫ�˻�������������Ƭ�������� ,ӵ�кܺõķ����� .");
        set("unit","��");
        set("value",2750);
        set("material","steel");
        set("armor_type","armbands");
        set("wear_msg","$N����$n�����϶�ʱ��һƬ�������֣�\n");
        set("unequip_msg","$N����$n֮��$N����������ʧ��\n");
        set("armor_prop/armor", 9);
        set("armor_prop/force", 10);
        set("armor_prop/parry", 10);
        }
        setup();
}
