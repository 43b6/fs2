#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m",({"wind legging","legging"}));
   set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long","����һ������������ʹ�÷���ʯ������Ļ�ϥ��\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"���սϥ"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$nȡ�£�"HIW"���սϥ"NOR"�Ĺ�â������֮��ȥ��\n");
        set("unit","��");
        set("value",70000);
        set("material","cloth");
        set("armor_type","leggings");
        set("armor_prop/armor",6);
        set("armor_prop/stabber",2);
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
