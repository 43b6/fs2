#include <weapon.h>
#include <ansi.h>
inherit SWORD;
void create()
{
seteuid(getuid());
set_name("[1;31mħ��[1;37m����[0m",({"Sad sword","sword"}));
set_weight(10000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("value",20000);
set("material", "steel");
  set("no_get", 1);
                set("wield_msg", "����$n,$N���Ϲ����Ц��Ц\n");
set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");  
set("weapon_prop/sword",10);                                                                              }
init_sword(99);
setup();

}
