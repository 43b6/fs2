#include <weapon.h>
#include <ansi.h>
inherit SWORD;
void create()
{
seteuid(getuid());
set_name(""HIR"��"HIB"��"HIW"����"NOR"",({"sun_moon_sword","sword"}));
set_weight(7000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("long",
"�ɳ�������������Ľ����ѿ��������������ɵĽ�.....��߽�������ɫ
�������Ϊ����ɫ,��ȫ���ֳ��������������-���Ტ��-��\n");
set("value",0);
set("material", "crimsonsteel");
set("wield_msg", HIW"$N��$n"HIW"�������صĽ�ϻ�г��,��ʱ���²��������,����������ע��$n\n");
set("unwield_msg", HIW"$N������$n"HIW"���һ��...$n��"HIW"��������һ��,�Զ��ع齣ϻ�ڡ�\n");  
}
   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);
init_sword(110);
setup();
}
int query_autoload()
{
   return 1;
}


