#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
                set_name(HIY"��������"NOR, ({ "ghost cloak" ,"cloak" }) );
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "ǧ���������������ӵ�У�������������ϣ�����ɢ��������������\n");
                set("unit", "��");
                set("value", 300000);
                set("material", "steal");
                set("armor_type", "cape");
                set("armor_prop/armor", 10);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 10);
                set("wear_msg", HIW"$N"HIW"�����������$n"HIW"�����޵������������Ŀ�ʼɢ����\n"NOR);
                set("unequip_msg", HIW"���������$n"HIW"��$N��������һ��һ�ε���ɢ��\n"NOR);

                }
                setup();
}

