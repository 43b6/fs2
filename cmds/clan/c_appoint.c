// by ~babe~ (Сѩ��) ^O^
//����дwho��load��,���Ƹı�ȼ����������ȱ�� by bss 2/13/2000
#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
	string  id, title;
	int  rank_o,rank, temp,i;
	object who,*inv,ob,user;
	if( !str )
		return notify_fail("ָ���ʽ��c_appoint <id> <�׼�> <ְ��>\n");
	if( sscanf(str, "%s %d %s", id, rank, title) != 3 )
		return notify_fail("ָ���ʽ��c_appoint <id> <�׼�> <ְ��>\n");
	if( me->query("clan/rank") > 4 )
		return notify_fail("����Ȩʹ�ô�ָ�\n");
	if( strlen(title) > 10 )
		return notify_fail("ְ���ֻ������֡�\n");
	if( me->query("clan/rank") >= rank)
		return notify_fail("��ֻ������λ�ױ����͵�ְλ��\n");
	if( (rank<2) || (rank>7) )
		return notify_fail("���������Ľ׼�ֻ��Ϊ(2~7)������\n");
	if( !who = FINGER_D->acquire_login_ob(id) )
		return notify_fail("û������ˡ�\n");
	if( !find_player(id))	{
		ob="/adm/daemons/cappointd.c"->get_user_ob(id);
		user="/adm/daemons/cappointd.c"->get_user_body(ob);
		user->set_temp("link_ob", ob);
		user->setup();
		who=user;
	}	else	{
		who=find_player(id);
	}	if( !who->is_character() || me->query("id")==id )
			return notify_fail("�벻Ҫ����Ц��\n");
		if( who->query("clan/name") != me->query("clan/name") )
			return notify_fail("�Է���������ͬ���ɡ�\n");
		switch( rank ) {
		case 2: temp = 4000000; break;
		case 3: temp = 2000000; break;
		case 4: temp = 1000000; break;
		case 5: temp =  500000;	break;
		case 6: temp =       0;	break;
		case 7: temp =       0;	break;
	}
	if( me->query("clan/rank") >= who->query("clan/rank") )
		return notify_fail("��ֻ������λ�ױ����͵�ְλ��\n");
	if( who->query("combat_exp") < temp )
		return notify_fail("�Է��Ľ�������������ʤ�δ�ְ��\n");
	if( !CLAN_D->clan_promote(me->query("clan/id"), who->query("id"), "level"+rank))
		return notify_fail("�˽׼��Ѷ�����\n");
	rank_o = who->query("clan/rank");
	who->set("clan/rank",rank);
	who->set("clan/title",title);
	if( rank < rank_o )
		CHANNEL_D->do_channel(me, "ct",
			"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t���"+
			who->query("name")+"("+who->query("id")+")Ϊ��"HIC+who->query("clan/title")+HIY"����"NOR);
	else if( rank > rank_o )
		CHANNEL_D->do_channel(me, "ct",
			"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t��"+
			who->query("name")+"("+who->query("id")+")��Ϊ��"HIC+who->query("clan/title")+HIY"����"NOR);
	else
		CHANNEL_D->do_channel(me, "ct",
			"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t��"+
			who->query("name")+"("+who->query("id")+")���Ρ�"HIC+who->query("clan/title")+HIY"����"NOR);
	who->save();
	return 1;
}

int help( object me )
{
	write(@HELP
	c_appoint <ID> <λ��> <ְ��>

	����ĳ�˵�λ�׼�ְ�Σ��߽��߿��������ͽ��ߡ�

	<λ��> ����������(2~7)
	<ְ��> ����������(1~5��)

	���׼�֮�����޶� -
		�׼���������	����ֵ-�İ���
		�׼���������	����ֵ-������
		�׼���������	����ֵ-һ����
		�׼���������	����ֵ-��ʰ��
		�׼���������	����ֵ-������
		�׼���������	����ֵ-������
HELP    );
	return 1;
}
