//���� cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIC"����"HIY"����"NOR,({"king cloak","cloak"}) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�������ӵ�ר�����磬�ɲ�֪���ļ���˿���Ƴɡ�
\n");
        set("unit", "��");
        set("value",50000);
        set("armor_type","cape");
        set("material","leather");
        set("armor_prop/armor",7);
        set("armor_prop/unarmed",3);
        set("armor_prop/parry",3);
         }
        setup();
}
