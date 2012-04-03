// c_state by ACKY 04/13/00

#include <ansi.h>
inherit F_CLEAN_UP;

string get_rank_list( string id, int rank )
{
	string *list;
	int i;

	list = CLAN_D->clan_query(id, "level"+rank);
	if( !i = sizeof(list) )
		return "��";
	id = "";
	while(i--) {
		if( i==sizeof(list)-5 )
			id += "\n\t\t  ";
		id += list[i];
		if(i) id += "��";
		else id += "��";
	}
	return id;
}

string level( string id, string str )
{
	int i, level;
	i = CLAN_D->clan_query(id,str);
	for( level=0; i>0; level++ )
		i-= (level)*(level);
	level-=2;
	if( level < 0 )	level = 0;
	return CHINESE_D->chinese_number(level);
}

string ally( string id )
{
	int	i;
	string	ally, *list;

	list = CLAN_D->clan_query( id, "ally" );
	if( !i = sizeof(list) )
		return "��";
	ally = "";
	while(i--) {
		if( i==sizeof(list)-5 )
			id += "\n\t\t������";
		if( !CLAN_D->have_clan( list[i] ) ) {
			CLAN_D->clan_set( id, "ally", list-({list[i]}) );
			continue;
		}
		ally += "��" + CLAN_D->clan_query( list[i], "name" ) + "��";
	}
	return ally;
}

string room( string id, string item )
{
	string	room;
	object	ob;

	if( !room = CLAN_D->clan_query( id, item ) )
		return "��";
	if( !ob = find_object(room) )
		return "��";
	return trans_color(ob->short());
}

int main( object me )
{
	string list="", str="��", tmp, id;
	object *glist, ob;
	int i,money,bank,level;

	if( !me->query("clan" ) ) return 0;
	if( wizardp(me) ) {
		if( CLAN_D->what_clan_area(me) == "NULL" )
			return notify_fail( "�˴����ǰ�������\n" );
		id = CLAN_D->what_clan_area(me);
	}
	else {
		if( me->query("clan/rank") > 5 )
			return notify_fail("����Ȩʹ�ô�ָ�\n");
		id = me->query("clan/id");
	}

	money  = sizeof(get_dir(CLAN_D->get_clan_dir(me)+"room/"))*20;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"npc/"))*2;
	money += sizeof(CLAN_D->clan_query(id, "members"))*10;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"weapon/"))*1;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"armor/"))*1;
	CLAN_D->clan_set( id, "cost", money );
	if(CLAN_D->clan_query(id,"alert"))
		str="������";

	list+=sprintf(HIM"\n	����.__________"HIY"%s(%s)״̬һ����"HIM"__________.\n\n",me->query("clan/name"), id );
	list+=sprintf(HIW"�� ���� -\n");
	list+=sprintf(HIW"	�׼�- ����"NOR"%s��\n",CLAN_D->clan_query(id, "master"));
	list+=sprintf(HIW"	�׼�- ����"NOR"%s\n",get_rank_list(id, 2));
	list+=sprintf(HIW"	�׼�- ����"NOR"%s\n",get_rank_list(id, 3));
	list+=sprintf(HIW"	�׼�- ����"NOR"%s\n",get_rank_list(id, 4));
	list+=sprintf(HIW"	���������"NOR"%4d��\n",sizeof(CLAN_D->clan_query(id, "members")));
	list+=sprintf(HIW"	����������"NOR"%4d��\n\n",sizeof(get_dir(CLAN_D->get_clan_dir(me)+"npc/")));
	list+=sprintf(HIY"�� ���� -\n");
	list+=sprintf(HIY"	���ɴ���ܶ"NOR"���ƻƽ�%10d��\n",CLAN_D->clan_query(id,"gold"));
	i = CLAN_D->clan_query(id,"member_gold")/(CLAN_D->clan_query(id,"gold")/100);
	if( i > 100 )
		i = 100;
	list+=sprintf(HIY"	���ڴ����ʣ�"NOR"ռ�ܴ��%10d��\n", i );
	list+=sprintf(HIY"	����Ŀǰ˰�ʣ�"NOR"ÿ������%10d��\n",CLAN_D->clan_query(id,"tax"));
	money = 0;
	glist=users();
	for(i=0;i<sizeof(users());i++)
		if( glist[i]->query("clan/id") == id )	{
			bank = glist[i]->query("bank/coin");
			if( bank > 0 )
				money += bank/10000*CLAN_D->clan_query(id,"tax")/100;
		}
	list+=sprintf(HIY"	�˴�����˰�գ�"NOR"���ƻƽ�%10d��\n", money );
	list+=sprintf(HIY"	����Ŀǰ��˰��"NOR"ÿ�ػƽ�%10d��\n",CLAN_D->clan_query(id,"gatetax"));
	list+=sprintf(HIY"	���ɻ���������"NOR"ÿ�»ƽ�%10d��\n",CLAN_D->clan_query(id,"cost"));
	list+=sprintf(HIY"	���ɷ�չ���ѣ�"NOR"ÿ�»ƽ�%10d��\n\n",CLAN_D->clan_query(id,"prestige"));
	list+=sprintf(HIG"�� ��չ -\n");
	list+=sprintf(HIG"	����������"NOR"%6s��\n\n",level(id,"develop") );
	list+=sprintf(HIC"�� ���� -\n");
	list += sprintf(HIC"\t�����ģ: "NOR"%d\n", sizeof(get_dir("/open/clan/"+id+"/room/")) );
	list += HIC  "\t���ɺ���: "NOR + room( id, "home" );
	list += HIC"\n\t����Ǯׯ: "NOR + room( id, "bank" );
	list += HIC"\n\t���ɱ�Ӫ: "NOR + room( id, "npc_room" );
	list += HIC"\n\t����բ��: "NOR + room( id, "gate" );
	list += HIC"\n\t���ɼ���: "NOR + room( id, "jail" );
	list+=sprintf(HIR"\n\n�� �⽻ -\n");
	list+=sprintf(HIR"	ͬ���Ѻð��ɣ�"NOR"%s\n", ally( id ) );
	list+=sprintf(HIR"	���ɾ���״̬��"NOR"%s\n",str);
	list+=sprintf(HIR"	����սʤ������"NOR"%s��\n",CHINESE_D->chinese_number(CLAN_D->clan_query(id,"win")) );
	list+=sprintf(HIR"	����ս�ܴ�����"NOR"%s��\n",CHINESE_D->chinese_number(CLAN_D->clan_query(id,"lose")) );
	me->start_more(list);
	return 1;
}

int help( object me )
{
	write("\n   c_state    ������״��������

");
        return 1;
}
