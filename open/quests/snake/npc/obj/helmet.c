#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
        set_name(HIG"����ͷ��"NOR, ({"snake helmet", "helmet"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("value", 100000);
        set("material", "steel");
        set("long","
�ⶥͷ����ͷ�б�ʾ��һֻ�ߣ���Ȼ��������ʲô���壬����
ȴ��һ�������ͷ����\n");
        set("armor_prop/armor", 10);
	set("armor_prop/force",3);
        }
        setup();
}
