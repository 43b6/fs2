// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIC"ѩӰ"NOR,({"iceblade","blade"}));
set_weight(19000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "��");
set("value",70000);
set("weapon_prop/dodge",10);
set("weapon_prop/parry",10);
set("weapon_prop/move", 5);
set("material", "steel");
set("long", @LONG

ѩӰ����һ��ϡ������������������͸���������˸о�������������
��˵����ֻ��һ�ѽ�����֮���⣬����ѽ�����֪������һ�ѣ�
LONG
);
set("wield_msg","$N�������͸�ǵ�$n�������У�$N����˲�������һ��˪��$N�о���$n��ƥ������ע��$N�����ڡ�\n");
set("unwield_msg","$N��$n��ر���Ĳ������С�\n");
	}
init_blade(100);
set("ski_type1","blade");
set("ski_type2","dragon-blade");
set("ski_level1", 100);
set("ski_level2", 110);
	setup();
}
