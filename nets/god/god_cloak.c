//����ħ�� cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
    set_name(""HIC"��HIW"��HIC"��HIW"��HIC"��HIW"��HIC"��HIW"��NOR"",({"god cloak","cloak"}));
	set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
set("no_drop",1);
   set("no_give",1);
   set("no_put",1);
   set("no_get",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�̺������ף����ʹ��ս����ʱ���ƶ����е�Ѹ�١�
\n");
        set("unit", "��");
        set("armor_type","cape");
        set("material","leather");
	set("armor_prop/armor",7);
	set("armor_prop/dodge",7);
        set("armor_prop/move",7);
set("wear_msg", HIW"$N����$n"HIW"��$N���ܵ������������ŷ�Χ����\n"NOR);
set("remove_msg",HIW"$N��$n"HIW"ж�����������ܵ�΢��ת�۾�ֹ��������\n"NOR);

         }
        setup();
}
