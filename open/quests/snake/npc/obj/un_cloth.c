#include <armor.h>
#include <ansi.h>
inherit CLOTH;

void create()
{
        set_name(MAG+"��"+YEL+"��"+GRN+"����"NOR, ({ "unreal robe","robe" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "fur");
                set("armor_prop/armor", 30);
		set("armor_prop/parry",10);
		set("armor_prop/force",3);
		set("long","��������е�������ۣ��������������һ���ԡ�\n");
        }
        setup();
}
