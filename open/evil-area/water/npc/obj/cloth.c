#include <armor.h>
#include <ansi.h>

inherit CLOTH;

void create()
{
        set_name(HIC"��"HIM"��"HIW"��"HIG"��"NOR, ({ "seven color feather","feather"}) );
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
	{
                set("unit", "��");
		set("value",1000000);
                set("material", "cloth");
                set("armor_prop/armor", 1);
		set("long","
ҥ������������������������Ʒ����Ƴɵģ������������������
һ��������ʣ���ϧ����̫���ڹ��أ��ܶ����Ʒ�׷׳��������
����������ϵ��ˡ�\n");
        }
        setup();
}
