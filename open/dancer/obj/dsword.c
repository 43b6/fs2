// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
        set_name(HIR"�森������" NOR,({"Sad sword"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
       	set("long",
"�齣����, ���鵶ҹǧ��, �������������ơ�������������.����ͨ��ɺ�, ����
�����������������, �����ޱ�.\n");
		set("value",10000);
		set("no_steal",1);
		set("no_get",1);
		set("no_put",1);
		set("material", "crimsonsteel");
		set("rigidity",200);
 	set("wield_msg", "$N�γ�"HIR"������"NOR", ɲ�Ǽ�����ҫ, ���ɱ��ӡ�\n");
	set("unwield_msg", "$N�������ھ��ջ�,$n��ʧ���� ��\n");
        set("weapon_prop/sword",10);
	}
        
	init_sword(90);
	setup();
}
