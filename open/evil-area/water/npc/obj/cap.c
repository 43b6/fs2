#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
        set_name(HIR"��"HIM"��"HIB"ͷ"HIW"��"NOR, ({"phoenix cap", "cap"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else
	{
		set("long",HIW"��˵�У��ɲ����񣭷�˵�ͷ�������ɵģ�����������������������ǿ������\n"NOR);
		set("wear_msg", HIW"$N��$n"HIW"���ϣ�ͻȻ�·����ķ�ˣ�����������ƺ�����������ࡣ\n"NOR);
		set("unequip_msg", HIY"$N��$n"HIY"���£�$N���һ�ɷ��֮����֮����..\n"NOR);
		set("armor_prop/armor",5);
		set("armor_prop/force",5);
		set("unit", "��");
		set("value", 100000);
		set("material", "steel");
        }
        setup();
}
