// by ACKY 04/03/00

#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
	int num,value,num1;
	if( !str )
		return notify_fail("ָ���ʽ��cset_gatetax <�ƽ�>\n");
	if( me->query("clan/rank") > 3 )
		return notify_fail("����Ȩʹ�ô�ָ�\n");
    num = atoi(str);
    if( num < 0 )
		return notify_fail("��˰�����Ǹ��ġ�\n");
	CLAN_D->clan_set(me->query("clan/id"),"gatetax",num);
	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t�����˰��Ϊ"+
		CHINESE_D->chinese_number(num)+"���ƽ�\n\t˰�ս��������Ǯׯ����Ϊ׳�󱾰�֮�á�"NOR);
    return 1;
}

int help( object me )

{
    write(@HELP

	cset_gatetax <�ƽ�>

	�趨���ɹ�˰����ȡ��������֮���ã���׳����ɡ�
	
HELP
    );
 return 1;
}

