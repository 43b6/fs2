#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37mn[0m",({"purple cloth","cloth"}));
   if( clonep() )
        set_default_object(__FILE__);
   else {
         set("armor_prop/dodge",10);
   set("no_sell",1);
   set("no_auc",1);
   set("no_drop",1);
   set("unit","��");
   set("value",150000);
   set("material", "cloth");
   set("long","����һ������������ɼ�����������������ɵ����¡�\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("wear_msg", "$N��$n���ϣ�$N���ϵ�$nɢ����������$N��Χ��\n");
   set("armor_prop/armor",22);
}
        setup();
}
int query_autoload()
{
 return 1;
}
