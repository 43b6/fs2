// K_cloth.c
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIY "����" NOR,({"king cloth","cloth"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�������������ŵģ��������ž��µľ�����ͼ�ڡ�\n");
        set("unit","��");
        set("value",25000);
        set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor",18);
        set("armor_prop/dodge", 10);
        set("armor_prop/force",10);
        set("armor_prop/attack",30);
        }
        setup();
}
