#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37my[0m",({"purple legging","legging"}));
   set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long","����һ������������ɼ�����������������ɵ��ɽ�\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("wear_msg", "$N��$n���ϣ�$N���ϵ�$nɢ����������$N��Χ��\n");
        set("unit","��");
        set("value",70000);
        set("material","cloth");
        set("armor_type","leggings");
        set("armor_prop/armor",6);
        set("armor_prop/dodge",2);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
