//����ħ�� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37my[1;37m��[0;37ma[0m" , ({"wind belt","belt"}));
         set_weight(300);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",7);
                set("armor_prop/stabber",3);
   set("long","����һ������������ʹ�÷���ʯ�������������\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"�������"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"�������"NOR"�Ĺ�â������֮��ȥ��\n");
                setup();
        }
}

int query_autoload()
{
 return 1;
}
