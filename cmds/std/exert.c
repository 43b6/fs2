// exert.c ���� by babe

#include <skill.h>
#include <ansi.h>
inherit F_CLEAN_UP;

int main( object me, string arg, int repeat )
{
	string force, tmp;
	int i, r;

	seteuid(getuid());

	if( !arg )
		return notify_fail( "��Ҫ���ڹ���ʲô?\n" );
	notify_fail( "����ڹ���û�����ֹ��ܡ�\n" );
	arg = lower_case(arg);
	tmp = arg;
	if( sscanf( arg, "%s %d", arg, repeat ) != 2 )
		arg = tmp;
	if( repeat < 1 ) repeat = 1;
	else if( repeat > 10 ) repeat = 10;
	if( me->is_busy() )
		return notify_fail( "��һ��������, ���������к�����Ϣ��\n" );
	if( me->query_temp("no_power_e") )
		return notify_fail( "��о�����������������������, ʹ���޷�������ʹ��������\n" );
	if( (!me->query("food")||!me->query("water")) && userp(me) ) {
		if( random(100) < 1 ) {
			me->receive_wound( "kee", me->query("age") );
			write( HIR"���ֶ��ֿ�, һʱ֮���޷���������, �ܵ�������!"NOR );
		}
		return notify_fail( "��о��ֶ��ֿ�! �޷�����!\n" );
	}

	if( stringp( force=me->query_skill_mapped("force") ) ) {
		for( i=0; i<repeat; i++ )
			if( SKILL_D(force)->exert_function( me, arg ) ) {
				r = 1;
				if( random(300) < (int)me->query_skill( "force", 1 ) )
					me->improve_skill( force, 1, 1 );
			}
			else if( SKILL_D("force")->exert_function( me, arg ) ) {
				r = 1;
				if ( random(300) < (int)me->query_skill( "force", 1 ) )
					me->improve_skill( "force", 1, 1 );
			}
		if( r == 1 )
			switch(arg) {
			case "reseckee" :
				message_vision( CYN"$N�����е���������������ʹ����תǿ��\n"NOR, me ); break;
			case "recover" :
				message_vision( CYN"$N��������" + chinese_number(repeat) + "��������ɫ�������ö��ˡ�\n"NOR, me ); break;
			case "regenerate" :
				message_vision( CYN"$N��������" + chinese_number(repeat) + "�������ֽŻ�˼��£������˿������л������ˡ�\n"NOR, me ); break;
			case "refresh" :
				message_vision( CYN"$N��һ��������"+chinese_number(repeat)+"�����������������Ѷ��ˡ�\n"NOR, me ); break;
			}
		return r;
	}

	return notify_fail( "��δѡ��(enable)��Ҫʹ�õ��ڹ���\n" );
}

int help (object me)
{
        write(@HELP
ָ���ʽ : exert <��������> [<ʩ�ö���>]
ָ��˵�� :
           ����������һЩ���칦�ܣ������Ҫָ��<��������>��
         <ʩ�ö���>����п��ޡ�����ʹ��ĳһ���ڹ������칦
          ��֮ǰ����������� enable ָ����ָ����Ҫʹ�õ��ڹ���

ע�������ı��Լ����ڹ�����ԭ�����������������ֱ��ת����ȥ������
    �� 0 ��ʼ��
ע������������ظ�ʹ��, �� 10 exert refresh �� exert refresh 10

�����ο� :
           help force �ɵ�֪һЩ�󲿷��ڹ����еĹ��ܣ�
           ���������õ��ڹ�������û�иù��ܣ���һ�Ի�
           �ο�����˵����֪��
HELP
        );
        return 1;
}
