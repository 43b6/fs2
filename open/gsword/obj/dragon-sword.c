// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
        set_name(HIR"������" NOR,({"sun_fire_sword","sword"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
       	set("long",
"�齣����, ���鵶ҹǧ��, �������������ơ�������������.����ͨ��ɺ�, ����
�����������������, �����ޱ�.\n");
		set("value",10000);
		set("material", "steel");
 	set("wield_msg", "$N�γ�"HIR"������"NOR", ɲ�Ǽ�����ҫ, ���ɱ��ӡ�\n");
	set("unwield_msg", "$N�������ھ��ջ�,$n��ʧ���� ��\n");
        set("weapon_prop/sword",10);
	}
        
	init_sword(90);
	setup();
}
