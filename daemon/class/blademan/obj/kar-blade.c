#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIW"������"NOR,({"kar-blade","blade"}));
set_weight(10000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "��");
set("value",20000);
set("long", @LONG

���ǰ������������������͡�ħ������Ϊһ�ԡ�
LONG
);
set("weapon_prop/dodge",2);
set("weapon_prop/parry",2);
set("weapon_prop/move",2);
set("material", "steel");
}
init_blade(70);
set("ski_type1","blade");
set("ski_type2","dragon-blade");
set("ski_level1", 70);
set("ski_level2", 70);
setup();
}
