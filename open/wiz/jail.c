#include <ansi.h>

inherit ROOM;

int leave( object me );

void create()
{
	set( "short", HIB"����Ľ���"NOR );
	set( "long", "
    ����������Ľ���, �����ڴ˵ص���, ���������޶����Ĵ󻵵�, ����
����͢���������, ͨ�������δ�������ڵĻ�, �ǲ����ͷŵġ�\n
	"HIR"[check] ���Բ�ѯ�Ƿ��ܻص���ԭ��\n\n"NOR
	);

	set( "no_kill",  1 );
	set( "no_fight", 1 );
	set( "no_lyssa", 1 );
	set( "light_up", 1 );

	setup();
}

void init()
{
	int i;
	object *inv;

	add_action( "block_cmd", "" );
	if(!inv=all_inventory(environment(this_player())))
		return;
	for( i=0; i<sizeof(inv); i++ ) {
		if(userp(inv[i])) continue;
		message_vision( HIM"�����ص�ð������Ũ�̡���\n"NOR, inv[i] );
		destruct(inv[i]);
	}
}

int block_cmd( string arg )
{
	if( (string)query_verb() == "check" )
		return leave(this_player());
    if(wizardp(this_player())) return 0;
	if( (string)query_verb() == "look"	||
	    (string)query_verb() == "ans"	||
	    (string)query_verb() == "say"	||
	    (string)query_verb() == "chat"	||
	    (string)query_verb() == "tell"	||
	    (string)query_verb() == "quit"	||
	    (string)query_verb() == "home"	||
	    (string)query_verb() == "msg_filter"||
	    (string)query_verb() == "summon" )
		return 0;
	write( "���㲻Ҫ����Ҷ�, ���Ҷ�...\n" );
	return 1;
}

int leave( object me )
{
        int outtime;
        string msg="";

	if( me->query("mud_age") > me->query("jail_time") ) {
		write( HIY"\n��ú���������, ���ٷ�����\n\n"NOR );
// ���� ���ԭ�ȵ�title...
// by avgirl
      if(me->query("tmp_title")){
      me->set("title",me->query("tmp_title"));
      me->delete("tmp_title");
}
		me->delete("jail_time");
		me->move( "/open/common/room/inn.c" );
		tell_object( users(), HIW"\n" + me->query("name") + "������Ľ��䷵����ԭ�ˡ�\n\n"NOR );
		return 1;
	}
	outtime = me->query("jail_time")-me->query("mud_age");
	if( outtime/3600 ) {
		msg += HIR + outtime/3600 + HIW" ʱ ";
		outtime %= 3600;
       	}
	if( outtime/60 )
		msg += HIR + outtime/60 + HIW" �� ";
	if( outtime%60 )
		msg += HIR + outtime%60 + HIW" ��";
	write( HIW"�㻹Ҫ���� " + msg + NOR"��\n" );

	return 1;
}
