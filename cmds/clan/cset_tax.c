// �����趨˰��ָ�� by Chan 05/12/99
// ����˰�ʺ�ʱ�� by ACKY

#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
	int num,value,num1;
	if( !str )
		return notify_fail("ָ���ʽ��cset_tax <˰��>\n");
	if( me->query("clan/rank") > 2 )
		return notify_fail("����Ȩʹ�ô�ָ�\n");
    num = atoi(str);
    if( num < 1 )
		return notify_fail("˰�ʲ��õ���1%��\n");
	if( num > 90 )
		return notify_fail("˰�ʲ��ø���90%��\n");
	CLAN_D->clan_set(me->query("clan/id"),"tax",num);
	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t����˰�ʵ�Ϊ�ٷ�֮"+
		CHINESE_D->chinese_number(num)+"��\n\t˰�ս��������Ǯׯ����Ϊ׳�󱾰�֮�á�"NOR);
    return 1;
}

int help( object me )

{
    write(@HELP

	cset_tax <˰��>

	�趨����˰��(1~90)��

	����ÿ�������һ��˰��
	
HELP
    );
 return 1;
}

