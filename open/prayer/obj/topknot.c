#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("���",({"topknot"}) );
        set_weight(700);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","gem");
        set("unit","��");
        set("value", 100);
        set("armor_type","head");
        set("armor_prop/armor", 1);
        set("long","
        ������һ��������Ƴɵ���燣�����Ů���������õ�װ��Ʒ��\n");
        }
         setup();
}





