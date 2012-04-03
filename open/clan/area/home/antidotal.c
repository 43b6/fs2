// poison book by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIM"ҩ����ƪ"NOR, ({ "antidotal book", "book" }) );
	set( "long", HIM"��������Ÿ��ֽⶾ���ط�(use box)��"NOR );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 100 );
		set( "unit", "��" );
	}
	setup();
}

void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_use", "use" );
}

int do_use( string arg )
{
	object	me, ob, sex;
	string	str;
	mapping	en;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "book" )
		return 0;

	me = this_player();
	ob = this_object();
	en = me->query_skill_map();
	
	me->clear_condition();
	me->clear_condition("mogi");
	me->clear_condition("lyssa");
	me->set( "force", 0 );

	message_vision( "$N�Ͻ��ó�" + ob->name() + "����\��\n", me );
	write( YEL"��ͷд��:��������˼���ֽⶾ֮��, ���������ҵ�һ�ֿ��������涾֮��,\n"NOR );
	write( YEL"           ��ʵҲʲô�ر�֮��, ֻ��......��\n"NOR );
	message_vision( HIC"\n$N�������ϵĲ���, �Ͻ������ѿ���, ����" +
		( undefinedp(en["force"]) ? "�ڹ��ķ�" : to_chinese(en["force"]) ) + "...\n\n", me );
	message_vision( HIR"������������, $Nȫ����ɢ����������, ����䤱���\n\n"NOR, me );
	message_vision( HIM"$N����!����һ��, ���ڴ��һ���Ϻ�ɫ�ķ�㡣\n"NOR, me );


	destruct(ob);

	return 1;
}

