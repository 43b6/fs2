#include <armor.h>
#include <ansi.h>
inherit HEAD;
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37ma[0m" , ({"wind helme","helme"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long","����һ������������ʹ�÷���ʯ�������ս����\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"���ս��"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"���ս��"NOR"�Ĺ�â������֮��ȥ��\n");
   set("armor_prop/stabber",3);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
      set("armor_prop/armor",7);
        set("unit", "��");
        set("value", 30000);
        set("material", "steel");
        }
        setup();
}
int query_autoload()
{
 return 1;
}
