#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
                set_name(HIY"����ͷ��"NOR, ({"ghost helmet", "helmet"}));
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "ǧ���������������ӵ�У�����ͷ���������ֻ�е�һ����ƮƮ�ġ�\n");
                set("unit", "��");
                set("value", 1000000);
                set("material", "steel");
                set("armor_prop/armor", 10);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 10);
                set("thunder", 100);
                set("wear_msg", HIW"���ϸ��֮�У�$n"HIW"����$Nͷ��ɢ����һ��ůů��������\n"NOR);
                set("unequip_msg", HIW"$N�����ж��$n"HIW"����������ů��Ҳ˲����ɢ���١�\n"NOR);
        }
        setup();
}
