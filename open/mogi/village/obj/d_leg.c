#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("������", ({ "dragon leg","leg" }) );
        set_weight(80);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "������Ŀ�����, ���ϵ�ζ���ܲ���.\n");
                set("unit", "��");
                set("value", 100);
                set("ʳ��", ([
                        "ʣ" : 5,       
                        "��Ӧ": 70,
                ]) );
        }
        setup();
}
