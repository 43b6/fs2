inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(HIW"ˮ����"NOR, ({ "crystal dumpling","dumpling" }) );
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "
һ��������ʮ�ֲ��ϵľ��°��ӣ�ʮ�ֵİ��󣬲���ȴ����ʮ������ζ��
��а�����������ز�֮һ��\n");
                set("unit", "��");
                set("value", 10000);
                set("ʳ��", ([
                        "ʣ" : 10,
                        "��Ӧ": 100,
                ]) );
        }
        setup();
}
