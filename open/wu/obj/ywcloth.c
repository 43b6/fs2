#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
   set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[0m" ,({"gold cloth","cloth"}));
   set_weight(30000);
   if( clonep() )
        set_default_object(__FILE__);
   else {
   set("unit","��");
   set("value",150000);
   set("material", "cloth");
   set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵı��¡�\n"NOR);
   set("wear_msg", "$N��$n���ϣ�"HIY"������"NOR"��������ע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIY"������"NOR"��������֮��ȥ��\n");
   set("armor_prop/armor",30);
   set("armor_prop/force",3);
   set("armor_prop/unarme",3);
   set("armor_prop/dodge",-5);
}
        setup();
}
