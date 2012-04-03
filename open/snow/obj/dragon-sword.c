// dragon_sword.c

#include <weapon.h>
#include <ansi.h>

inherit SWORD;
inherit SSERVER;

void create()
{
	set_name(HIY "������" NOR,({"dragon sword","sword"}));
	set("������",120);
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",10000);
		set("material","steel");
		set("long",@LONG
����Ƕ������������ഫ�ı���֮һ���ഫ��ѽ�
��������������֮�ܣ�������һ�������ħ�������ǣ�
ʹ�õķ���ֻ�ж������ҵ���֪����
LONG);
		set("wield_msg",@LONG
ֻ��$N�����$n֮�󺮹����䣬һ���ŵĽ����Ѱ�Χ��$n��Χ��
LONG);
	}
	init_sword(50);
	setup();
}
void init()
{
	add_action("do_cast","power");
}
int do_cast(string arg)
{
	object ob = offensive_target(this_player());
	if( !ob ) return 0;
	if( arg != "sword" ) return 0;
	if( query("������") <= 0 ) {
		tell_object(this_player(),"��Ĵ������Ѿ�ʧȥ���������޷���ʹ�á�\n");
		return 1;
	}
	message_vision(
	HIR "$Nһ����ȣ����д���������һ��������ֻ��һ�����������\n" NOR,
	this_player());
	message_vision(
	HIR "ֻ��������$n��ߴ�����$nѪ��������\n" NOR,this_player(),ob);
	ob->receive_wound("kee",query("������"));
	COMBAT_D->report_status(ob);
	add("������",-random(20));
	this_player()->start_busy(3);
	return 1;
}
