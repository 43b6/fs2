// for lovemay by ACKY
// �����ṩ bug

#include <ansi.h>
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name( HIM"��"HIR"��"HIY"��"HIC"Ӱ"NOR , ({"sex cloth", "cloth" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "unit", "��" );
		set( "value", 0 );
		set( "material", "cloth" );
		set( "long",
			"����һ����õר�����·�����˵��ɫ��ÿһ���ˣ�ʹ�����ߵ���\n" );
		set( "wear_msg",
			"$NͻȻ��\�����˵���̬������һ��$n��ȫ��ɢ�������˵���ζ��ʹ������˶�����Ƿǡ�\n" );
		set( "unequip_msg",
			"$N˲���$n����������һʱ֮��$N����ɫ���٣����ܵ���Ҳ�ָ�����̬��\n" );
		set( "armor_prop/armor", 1 );
	}
	setup();
}

int query_autoload()
{
	return 1;
}
