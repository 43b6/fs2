inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37m��[0m",({"purple hands","hands"}));
         set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",90000);
        set("material","cloth");
        set("armor_type", "hands");
   set("long","����һ������������ɼ�����������������ɵ��ɻ���\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("wear_msg", "$N��$n���ϣ�$N���ϵ�$nɢ����������$N��Χ��\n");
   set("armor_prop/armor",9);
   set("armor_prop/dodge",3);
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
