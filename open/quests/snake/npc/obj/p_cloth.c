#include <armor.h>
#include <ansi.h>
inherit CLOTH;

void create()
{
        set_name(HIG"������"NOR, ({ "poison robe","robe" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "fur");
                set("armor_prop/armor", 20);
		set("long","һ���ɶ���Һ�����ݵ�ëƤ���������ܽ����۸��ѡ�\n");
        }
        setup();
}
