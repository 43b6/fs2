// by ACKY
#include <ansi.h>
inherit F_CLEAN_UP;
int main( object me, string str )
{
	int num;
	if( me->query("clan/rank") > 3 )
		return notify_fail("����Ȩʹ�ô�ָ�\n");
	if( !str )
		return notify_fail("ָ���ʽ��c_prestige <����>\n");
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("�˴����ǹ��֮���̡�\n");
	num = atoi(str);
	if( num > 10 )
		return notify_fail("�������������ľ��Ѳ��ó���ʮ�����ƽ�\n");
	num = num*10000;
	if(CLAN_D->clan_query(me->query("clan/id"),"gold") < num)
		return notify_fail("Ŀǰ���ڲ�����ô��Ǯ��\n");
	CLAN_D->clan_set(me->query("clan/id"),"prestige",num);
	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� - "HIW+me->query("clan/title")+HIY
		"֣�ص�����\n\t��Ͷע"HIC+CHINESE_D->chinese_number(num)+HIY"���ƽ�, ������������֮������"NOR);
	return 1;
}

int help( object me )
{
	write(
"\n\tc_prestige: �趨���ڽ������������ľ��ѡ�
\n\t��λ: �����ƽ�
\n\t������������, ��ռ��ĵ�������\n\n"
	);
	return 1;
}
