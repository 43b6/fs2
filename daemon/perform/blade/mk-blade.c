// �鵶 by swy, ���� by babe
#include <ansi.h>
inherit F_FUNCTION;

int perform( object me )
{
	int	damage;
	object	ob;

	damage	= me->query_skill("blade");

	if( me->query("class") != "blademan" )
		return notify_fail( "����ֻ�޵���ʹ�á�\n");
	if( !me->query("mk-blade") )
		return notify_fail( "�޴�����ʹ���ع���\n" );
	if( me->query("combat_exp") < 5000000 )
		return notify_fail( "�����������㡣\n" );
	if( me->query("max_force") < 4000 )
		return notify_fail( "�������㡣\n" );
	if( me->query("force") < 3500 )
		return notify_fail( "�������㡣\n" );
	if( me->query("bellicosity") < 25 )
		return notify_fail( "ɱ�����㡣\n" );
	if( me->query("potential") - me->query("learned_points") < 60 )
		return notify_fail( "Ǳ�ܲ��㡣\n" );
	if( me->query_temp("del")==1 && !wizardp(me) )
		return notify_fail( "��������, ����Ϣһ�����\n" );
	if( damage > 350 )
		damage = 350;
        ob = new("/daemon/class/blademan/obj/mkblade.c");
        ob->set_name( HIM"��а"HIC"���"NOR, ({ "mk-blade" }) );
	ob->set( "weapon_prop/damage", damage );
	ob->move(me);
	message_vision( HIY"$N���һ��:��"BLINK""HIG"а���Ƶ���"NOR""HIY"��\n"BLU"ֻ����������, ����������ӵر�ܳ���\n", me );
	message_vision( MAG"$N��������, ������ڵ�ɱ��, �˾�������һ��, ����������$N�����Ͼۼ���\n", me );
	message_vision( HIW"��ʱһ������������ɵĵ�����$N���ϡ�\n"NOR, me );
	me->add( "force", -3000 );
        me->add( "potential", -50 );
	me->add( "bellicosity", -20 );
	me->set_temp( "del", 1 );
	call_out( "del", me->query("functions/mk-blade/level")+20, me );
	return 1;
}

int del( object me )
{
	if( !me )
		return 0;
	me->delete_temp("del");
	if( me->query("functions/mk-blade/level") < 100 )
		function_improved( "mk-blade", random(1000) );
	return 1;
}
