// spiritism.c ������ by babe

#include <ansi.h>

int update_condition( object me, int duration )
{
	string	g;
	
	me->apply_condition( "spiritism", duration-1 );
	if( duration < 1 )
		return 0;

	g = me->query("gender")=="����" ? "��": "��";
	
	switch( random(5) ) {
	case  0 :
		tell_room( environment(me), MAG"" + me->query("name") + "����Ӱģģ������, �ƺ���ʲô�����š�\n"NOR, me );
		break;
	case  1 :
		tell_room( environment(me), MAG + g +"�о�" + me->query("name") + "����ƺ���ʲô�������š�\n"NOR, me );
		break;
	case  2 :
		tell_room( environment(me), MAG"Ʈ��" + me->query("name") + "���Ե�С�����С������" + g + "���½ǡ�\n"NOR, me );
		break;
	case  3 :
		tell_room( environment(me), MAG + me->query("name") + "ɢ��������Ũ�ҵ�������Ϣ��\n"NOR, me );
		break;
	default :
		tell_room( environment(me), MAG"����������Х��, " + g + "ȫ����Ƥ���\n"NOR, me );
	}

	me->add( "gin", 25-random(50) );
	me->add( "kee", 25-random(50) );
	me->add( "sen", 25-random(50) );

	return 1;
}

