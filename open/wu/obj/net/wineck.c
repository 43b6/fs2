#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m",({"wind neck","neck"}));
   set_weight(5000);
   if ( clonep() )
       set_default_object(__FILE__);
   else {
   set("long","����һ������������ʹ�÷���ʯ�������������\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"���ս��"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"���ս��"NOR"�Ĺ�â������֮��ȥ��\n");
   set("armor_prop/armor",7);
   set("armor_prop/stabber",3);
   set("unit", "��");
   set("armor_type", "neck");
   set("value", 30000);
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
