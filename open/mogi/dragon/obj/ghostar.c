//����ħ�� armor
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIR"��˧����"NOR,({"ghost armor","armor"}) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
       һ����ͨ�����֣����������е���������
\n");
        set("unit", "��");
        set("value",200000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
        set("armor_prop/armor",15);
        }
        setup();
}
