// 09.30.2K ACKY ����

#include <ansi.h>

#include "/adm/daemons/word.c"

inherit F_CLEAN_UP;

int help( object );

int main( object me, string arg )
{
	string	respect;
	
	seteuid(getuid());

	respect	= RANK_D->query_respect(me);

	if( !me->query("robot/ans") )
		return 0;

	if( !arg ) {
		write(paper(me->query("robot/ans")));
		return 1;
	}

	if( me->query("robot/ans") != arg ) {
		write( "���ǻ�������? ��ô�򵥶�����?\n"+
		       "���뱻 quit �Ļ��ͺúô��!\n");
		me->add( "robot/wrong", 1 );
		if( me->query("robot/wrong")==5 )
			me->do_command("quit");
		return 1;
	}

	me->delete("robot");
    me->delete_temp("no_ans");
    new("/obj/money/silver")->move(me);
	write( HIC"ԭ��" + respect + "���ǻ�����, ��������, ������Ҽ������, ��Ц��...\n"NOR );
	return 1;
}

int help( object me )
{
	write( @HELP

    ��������ϵͳ����ʱ, ������ ans <��> ���ش����⡣
���������Ŀ, ����ֱ���� ans ����ʾһ����Ŀ��

HELP);
	return 1;
}
