// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIB"ħ��"NOR,({"mblade","blade"}));
set_weight(5000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "��");
set("no_drop", 1);
set("no_sell", 1);
set("no_give", 1);
set("no_auc", 1);
set("value",700);
set("long", @LONG

����Ī�޳���ǰ�������õĵ����䵶��̺����ۣ���֪Ī�޳����µĹ���
LONG
);
set("material", "steel");
set("wield_msg","$Nװ��$n�����ĺ�˳�֡�\n");
set("unwield_msg","$N��$nж�£������պá�\n");
}
init_blade(15);
setup();
}
int query_autoload()
{
if(!this_player()) return 0;
if((this_player()->query("family/family_name")=="ħ����")||this_player()->query("family/family_name")=="ħ��Ī��")
if(this_player())
   return 1;
}
