//����ħ�� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37ma[0m" , ({"purpl belt","belt"}));
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
                set("armor_prop/dodge",3);
   set("long","����һ������������ɼ�����������������ɵ��ɴ���\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("wear_msg", "$N��$n���ϣ�$N���ϵ�$nɢ����������$N��Χ��\n");
                setup();
        }
}

int query_autoload()
{
 return 1;
}
