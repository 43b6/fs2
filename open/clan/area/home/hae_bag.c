// hae_bag.c Ǭ���� by babe

#include <ansi.h>

inherit ITEM;

//#define	GET	"/cmds/std/get"

void create()
{
	set_name( HIW"�dǬ�����d"NOR, ({ "universal bag", "hae_bag", "bag" }) );
	set( "long", @LONG
	һ����С����Ĵ���, �ƺ�����һ��(throw)�ͻ���ߵ����ӡ�

LONG);
        set_weight(1);
	set_max_encumbrance( 100000 );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "unit", "��" );
		set( "value", 100000 );
	}
	setup();
}

void init()
{
	if( !present( this_object(), this_player() ) ) {
//		add_action( "do_get", "get" );
		return;
	}
	add_action( "do_throw", "throw" );
}

/*
int do_get( string str )
{
	int	i;
	object	target, *inv;
	object	me	= this_player();
	object	bag	= this_object();

	target = present( "hae_bag", me );
	if( target && target!=bag ) {
		inv = all_inventory(bag);
               	for( i=0; i<sizeof(inv); i++ )
			inv[i]->move(target);
	}
	GET->main( me, str );
	destruct(bag);
	return 1;
}
*/

int do_throw( string str )
{
	object	me	= this_player();
	object	bag	= this_object();
	object	target;

    if(wizardp(me) && wiz_level(me) <7)
		return 0;

	if( me->query("force")<10 ) {
		write( "��о�ȫ���������, ��Ȼ��һ������Ҳʹ������...\n" );
		return 1;
	}

	me->add( "force", -random(10)-1 );
	message_vision( YEL"$N"HIY"ȡ��$n"HIY", ������շ���һ��...\n"NOR, me, bag );
	message_vision( HIY"ֻ��$n"HIY"�Լ�����ٶ�, �ָ���Զ�ط��˳�ȥ, ɲ�Ǽ���û�����ƶˡ�\n"NOR, me, bag );

	if( !str )
		str = me->query("id");
     target=find_player(str);
     if( !target || target->query("ghost")==1)
		target = me;
     if(wiz_level(target)==7)
        target=me;
       if(target->query("id")=="cgy" || target->query("env/����","YES"))
	    target = me;
	message_vision( HIC"\nͻȻ��... һ�����ҵ��ƿ�֮��, ��Զ�����س�"CYN"$N"HIC"����...\n"NOR, target );
	message_vision( HIC"��... һ��$n"HIC"��"CYN"$N"HIC"ײ���ڵ�...\n"NOR, target, bag );
	bag->move( environment(target) );
	if( target->query("gin") > 10 )
		target->add( "gin", -random(10)-1 );
	if( target->query("kee") > 10 )
		target->add( "kee", -random(10)-1 );
	if( target->query("sen") > 10 )
		target->add( "sen", -random(10)-1 );
	COMBAT_D->report_status( target, 0 );

	return 1;
}
