#include <armor.h>
#include <ansi.h>

inherit CLOTH;

void create()
{
       set_name( HIG"��Ƥ���"NOR, ({"mask"}) );

        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("value",10);
                set("material","leather");
                set("armor_prop/armor", 1);
                set("armor_prop/id", ({"masker"}) );
                set("armor_prop/name", ({"��������"}) );
                set("armor_prop/short", ({"��������(Masker)"}) );
                set("armor_prop/long", ({
                    "һ��üͷ����������,���ε������д���һ˿������������ͷ�ڷ�
                    ��һ��ͻأ�İ׷���ס�˰�ߵ����ӣ�����������Ī����������
                    �о�...\n"
                }) );
        }
        setup();
}
