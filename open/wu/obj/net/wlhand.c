inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m",({"wind hands","hands"}));
         set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",90000);
        set("material","cloth");
        set("armor_type", "hands");
   set("long","����һ������������ʹ�÷���ʯ������Ļ��֡�\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"���ս��"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"���ս��"NOR"�Ĺ�â������֮��ȥ��\n");
   set("armor_prop/armor",9);
   set("armor_prop/stabber",3);
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
