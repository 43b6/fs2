#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
                set_name(HIY"���û�ϥ"NOR, ({ "ghost legging" ,"legging" }) );
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "ǧ���������������ӵ�У�ӵ�о��ѵķ������Ļ�ϥ��\n");
                set("unit", "˫");
                set("value", 300000);
                set("material", "steal");
                set("armor_type", "leggings");
                set("armor_prop/armor", 10);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 10);
                set("wear_msg", HIW"$N˫������װ���˻�ϥ��$n"HIW"�����ʵĴ���"HIW"$N�Ľ��ϡ�\n"NOR);
                set("unequip_msg", HIW"$N������$n"HIW"$N"HIW"�ķ������Եñ����ˡ�\n"NOR);

                }
                setup();
}
  

