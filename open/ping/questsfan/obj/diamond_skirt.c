//�羧��ȹ---2000.4.6 by dhk
#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name( ""MAG"�羧��ȹ"NOR"" , ({ "diamond skirt" ,"skirt" }) );
        set_weight(1200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ����������Ϻ�ɫ�Ĺ�â��������ı��\n");
                set("unit", "��");
                set("no_sell",1);
                set("no_auc",1);
                set("no_drop",1);
set("value", 4000);
                set("material", "diamond");
                set("armor_type", "pants");
            set("armor_prop/armor",8);
set("wear_msg", HIR"$N����$n"HIR"��ȹ��\������Ʈ����$N���������˵ķ�ɡ�\n"NOR);
        }
        setup();
}

