#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIB"����ս����"NOR,({"fiend cloth","cloth"}) );
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 10000);
        set("armor_type","cloth");
        set("wear_msg",HIC"$N������$n֮��,ȫ��ɢ�����ۻ�Ķ���!!\n"NOR);
        set("remove_msg",HIC"$N��$n����֮��,�ۻ�Ķ�����������ɢ��!!\n"NOR);
        set("armor_prop/armor", 15);
        set("armor_prop/dodge", 5);
        set("armor_prop/unarmed", 10);
        set("armor_prop/force", 2);
        set("long","
ڤ������ר�õ�ս�����������޽�.ľ.ˮ.��.������֮��Ƥ������֯���ɡ�
��ǹ����,ˮ���֡�\n");
        }
         setup();
}


