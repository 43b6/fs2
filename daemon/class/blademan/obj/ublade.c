// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIY"����"NOR,({"ublade","blade"}));
set_weight(10000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "��");
set("value",20000);
set("long", @LONG

���ǰ�ʧ����������������������âһֱ���䣬ʹ����۾��޷��ſ���
LONG
);
set("weapon_prop/dodge",5);
set("weapon_prop/parry",5);
set("weapon_prop/move",5);
set("material", "steel");
set("wield_msg","$Nװ��$n��˲ʱ������â���䡣\n");
set("unwield_msg","$NС������ģ������������պá�\n");
}
init_blade(90);
set("ski_type1","blade");
set("ski_type2","dragon-blade");
set("ski_level1", 90);
set("ski_level2", 90);
setup();
}
