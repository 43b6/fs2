/************************************************************
*  clan_war_officer.c by ACKY 06.22.00                      *
************************************************************/

/*
	MUD ʱ��	��ʵʱ��
	  6 ����	  1 ����
*/

#include <ansi.h>

inherit NPC;
void	multipk_start();
void	multipk_timeout();
void	multipk_win( object ob );
void	multipk_lose( object ob );
void	multipk_round( object win, object lose );
void	multipk_over();
int	war_score( int exp );
string	where( object ob );

#define	AREA_PK	"/open/clan/area/pk/"

int	multipk_now    = 0,	// ս���Ƿ�ʼ
	multipk_time   = 0,	// ս������ʱ��
	multipk_point1 = 0,	// ��ս����ս��
	multipk_point2 = 0,	// ��ս����ս��
	multipk_money1 = 0,	// ��ս�������ý�Ǯ
	multipk_money2 = 0;	// ��ս�������ý�Ǯ
mapping multipk = ([
	"ʮ������"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"��Ѫ���"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"а���쾳"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"������"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"�������"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"����ʥ��"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"�����"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"���͵�"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
	"���꽭��"	: ([
		"ʮ������"	: ([ "war" : 0 ]),
		"��Ѫ���"	: ([ "war" : 0 ]),
		"а���쾳"	: ([ "war" : 0 ]),
		"������"	: ([ "war" : 0 ]),
		"�������"	: ([ "war" : 0 ]),
		"����ʥ��"	: ([ "war" : 0 ]),
		"�����"	: ([ "war" : 0 ]),
		"���͵�"	: ([ "war" : 0 ]),
		"���꽭��"	: ([ "war" : 0 ])
			]),
		]);

mapping pk_map = ([
	0	: "thunder",
	1	: "wind",
	2	: "ice",
	3	: "fire",
	4	: "land",
	]);

mapping pk_nmap = ([
	"thunder"	: 0,
	"wind"		: 1,
	"ice"		: 2,
	"fire"		: 3,
	"land"		: 4,
	]);

mapping pk_cmap = ([
	"thunder"	: "Ѹ�׷�",
	"wind"		: "������",
	"ice"		: "������",
	"fire"		: "�����",
	"land"		: "����ԭ",
	]);

string	multipk_clan1, multipk_clan2;		// ����ID 
object	*multipk_player1, *multipk_player2;	// ��ս���� 1.��ս�� 2.��ս��

void create()
{
//	string *clan_id = CLANV_D->fs_clan();
	set( "title", "����ս������������");
	set_name( "֣�ܹ�", ({ "clan_war officer", "officer" }) );
	set( "long", "\n���ǰ���ս������������ˡ�\n" );      
	set( "clan/name", " ��  ͢ " );
	set( "race", "����" );
	set( "gender", "����" );
	set( "attitude", "friendly" );
	set( "no_kill", 1 );
	setup();
//	clan_id = fs_clan();
	multipk["���꽭��"]["���͵�"]["player1"]= "acky";
}

void init()
{
	if( !query_heart_beat( this_object() ) )
		set_heart_beat(1);
	::init();
}

int do_exchange( object me )
{
	if( me->query("clan/exchange") >= (me->query("clan/war")/1000) ) {
		tell_object(me, HIY"֣�ܹ�˵��: ��Ŀǰս��Ϊ "+me->query("clan/war")+" ��, �����������ı�׼��\n"NOR);
		return 1;
	}
	me->add( "clan/exchange", 1 );
	me->add( "standby", 1 );
	tell_object(me, HIY"֣�ܹ�˵��: ��ϲ���������һ��, �ڽ�Ҫ��ͷ���������εظ�, ������һ�˵ġ�\n"NOR);
	return 1;
}

int do_list( object me )
{
	string	*clan;
	int	i, j, clan_sum, count;
	
	clan = keys(multipk);
	clan_sum  = sizeof(clan);

	for( i=0; i<clan_sum; i++ )
		for( j=0; j<clan_sum; j++ )
			if( multipk[clan[j]][clan[i]]["war"] == 1 ) {
				printf( "%|10s �� %|10s ��ս��\n", clan[i], clan[j] );
				count++;
			}
	if( count==0 )		
		printf( HIC"���κΰ��ɷ���ս��, ����ռ����������֮����\n"NOR );
	else
		printf( HIR"������%s��Ũ�ҵ�ɱ��...\n"NOR, CHINESE_D->chinese_number(count) );

	return 1;
}

int do_multipk( string clan2, string *player )
{
	int	n;
	object	me, ob;
	string	clan1, clan1_id;
 multipk_player1=({});multipk_player2=({}); 
	
	// clan1 ����ս���İ��� (������)
	// clan2 ����ս���Ķ��� (������)

	me       = find_player( player[0] );
	clan1    = me->query( "clan/name" );
	clan1_id = me->query( "clan/id"   );
	
        if( CLAN_D->clan_query( clan1_id, "gold" ) < 1000000 )
		return notify_fail( "���ɴ���һ�������ƽ�\n" );
	
	if( multipk_now ) {
		tell_object( me, "Ŀǰ����ս���������а��ɶ�ս��, ���Դ���\n");
		return 1;
	}

	// multipk[��������][��������]
	//	["war"]		1: Ը���ս 0: ��Ը���ս
	//	["player(1~5)"] �������ɲ�ս����
         
	if( multipk[clan1][clan2]["war"] ) {

		// ��ս���ϴ��� clan1 ��ս���� clan2 ��ս����
		CHANNEL_D->do_channel( me, "war", "�� -��"+me->query("clan/title")+"������"+clan2+"��ս�顣\n"NOR);

		if( !ob = find_player(multipk[clan1][clan2]["player1"]) ) {
			CHANNEL_D->do_channel( this_object(), "war", clan2 + "������" + clan1 + "��ս, �����ˡ�\n"NOR );
			multipk[clan1][clan2]["war"] = 0;
			return 1;
		}	
	}
	else { // ��ս���ϴ��� clan1 ��ս���� clan2 ��ս����
		CHANNEL_D->do_channel( me, "war", "�� -��"+me->query("clan/title")+"����"+clan2+"��ս��\n"NOR);
		multipk[clan2][clan1]["war"] = 1;
		for( n=1; n<6; n++ )
			multipk[clan2][clan1]["player"+n] = player[n];
		return 1;
	}

	// ��ս���ϴ��� multipk1 ��ս���� multipk2 ��ս����
	multipk_clan1 = ob->query("id");
	multipk_clan2 = me->query("id");

     for( n=1; n<6; n++ ){
tell_object(find_player("avgirl"),sprintf("%O",multipk[clan1][clan2]["player"+n]));
		if( find_player(multipk[clan1][clan2]["player"+n]) )
multipk_player1 += ({ find_player(multipk[clan1][clan2][sprintf("player%d",n)]) }) ;
  tell_object(find_player("avgirl"),sprintf("asdsad:%O",multipk_player1));
}
	for( n=1; n<6; n++ )
		if( find_player(player[n]) )
			multipk_player2[n-1] = find_player(player[n]);

	CHANNEL_D->do_channel( this_object(), "war", "��"+clan2+"���롾"+clan1+"��˫��������Сʱ��ս��\n"NOR); // MUD 6hr = REAL 1min

	multipk_now    = 1;
	multipk_time   = 1;

	return 1;
}

// ������ս
int do_end( object me, string type, string clan2 )
{
	// clan1 ����Ͷ������ clan2 ʤ������
	string	clan1;
	
	clan1 = me->query("clan/name");

	if( type == "multipk" ) {
		if( multipk[clan2][clan1]["war"] != 1 )
			tell_object( me, "��ﲢû�жԴ˰�����ս��\n");
		else {			
			tell_object( users(),
				HIW"\n��"+clan1+"����"+me->query("clan/title")+"��"+me->query("name")+
				"("+me->query("id")+")�͸���"+clan2+"��һ���ƽЭ���顣\n\n"NOR );
			multipk[clan2][clan1]["war"] = 0;
			return 1;
		}
	}
	return 1;
}

void heart_beat()
{
	// *multipk_player1, *multipk_player2; ��ս���� 1.��ս�� 2.��ս��

	if( multipk_now ) {
		if( multipk_time == 50 )
			CHANNEL_D->do_channel( this_object(), "war", "��" +
				CLAN_D->clan_query( multipk_clan1, "name" ) + "���롾" +
				CLAN_D->clan_query( multipk_clan2, "name" ) + "��֮ս, ������ʼ, ��˫���Ͻ���������׼����" );
		if( multipk_time == 60 )
			multipk_start();
		if( multipk_time > 300 ) // MUD 24hr = REAL 4min
			multipk_timeout();
	}
	
	multipk_time++;	
}

void multipk_judge( object ob )
{
	int n;
	string area;

	area = where(ob);

	if( ob->query("war/clan") == 1 )
		if( where(multipk_player2[pk_nmap[area]]) == area ) {
			tell_object( ob, "֣�ܹ�˵��: ��δ�ֳ�ʤ����\n" );
			return;
		}
		else
			multipk_win( ob );

	else if( ob->query("war/clan") == 2 )
		if( where(multipk_player1[pk_nmap[area]]) == area ) {
			tell_object( ob, "֣�ܹ�˵��: ��δ�ֳ�ʤ����\n" );
			return;
		}
		else
			multipk_win( ob );
}

void multipk_win( object ob )
{
	int	score;
	object	vs;
	
	tell_object( ob, HIC"֣�ܹ�˵��: ��ϲ, ����ʤ�ˡ�\n"NOR );
	score = ob->query( "clan/war" ) + ob->query_temp( "war/score" );
	ob->set( "clan/war", score );
	tell_object( ob, "����ս����Ϊ " + score + " �㡣\n" );

	if( ob->query("war/clan")==1 ) {
		multipk_point1++;
		multipk_money1 += ob->query_temp("war/score")/10;
	}
	else if( ob->query("war/clan")==2 ) {
		multipk_point2++;
		multipk_money2 += ob->query_temp("war/score")/10;
	}
	
	if( vs = find_player(ob->query_temp("war/vs")) )
		multipk_round( ob, vs );
	else
		multipk_round( ob, ob );
        ob->remove_all_killer();
	ob->move( ob->query( "war/from" ) );
	ob->delete_temp( "war" );
}

void multipk_lose( object ob )
{
	int	score;
	object	vs; 

	tell_object( ob, HIC"֣�ܹ�˵��: ʤ���Ѷ�, �����ˡ�\n"NOR );
	score = ob->query( "clan/war" ) - war_score(ob->query("combat_exp"));
	ob->set( "clan/war", score );
	tell_object( ob, "����ս����Ϊ " + score + " �㡣\n" );

	vs = find_player(ob->query_temp("war/vs"));
	ob->remove_all_killer();
	ob->move( ob->query( "war/from" ) );
	ob->delete_temp( "war" );
	multipk_win( vs );
}

void multipk_round( object win, object lose )
{
	if( win->query_temp("war/clan")==1 )
		multipk_point1++;
	else
		multipk_point2++;
		
	if( win == lose )
		CHANNEL_D->do_channel( this_object(), "war", "��" + pk_cmap[win->query_temp("war/area")] + "��ʤ���ѷ�, ʤ��"HIW + win->query("name") + HIR"!" );
	else
		CHANNEL_D->do_channel( this_object(), "war", "��" + pk_cmap[win->query_temp("war/area")] + "��ʤ���ѷ�,"HIW +
			lose->query("name") + HIR"������¾, ʤ��"HIW + win->query("name") + HIR"!" );
	
	if( (multipk_point1+multipk_point2)==5 )
		multipk_over();
}

void multipk_start()
{
	int n;
	object ob;

	multipk_point1 = 0;
	multipk_point2 = 0;

	CHANNEL_D->do_channel( this_object(), "war", "ʱ���ѵ�,��" +
		CLAN_D->clan_query( multipk_clan1, "name" ) + "���롾" +
		CLAN_D->clan_query( multipk_clan2, "name" ) + "��֮ս��ʼ��" );

	for( n=0; n<5; n++ ) {
		if( multipk_player1[n] ) {
			ob->set_temp( "war/type", "multipk" );
			ob->set_temp( "war/clan", 1 );
			ob->set_temp( "war/area", pk_map[n] );
			ob->set_temp( "war/from", file_name(environment(ob)) );
			ob->set_temp( "war/vs", multipk_player2[n]->query("id") );
			if( multipk_player2[n] ) {
				ob->set_temp( "war/score", war_score(multipk_player2[n]->query("combat_exp")) );
				ob->set_temp( "war/vs", multipk_player2[n]->query("id") );
			}
			else {
				ob->set_temp( "war/score", 0 );
				ob->set_temp( "war/vs", "NONE" );
			}
			ob->move(AREA_PK+pk_map[n]+"_"+(random(9)+1));
		}
	}

	for( n=0; n<5; n++ ) {
		if( multipk_player2[n] ) {
			ob->set_temp( "war/type", "multipk" );
			ob->set_temp( "war/clan", 2 );
			ob->set_temp( "war/area", pk_map[n] );
			ob->set_temp( "war/from", file_name(environment(ob)) );
			if( multipk_player1[n] ) {
				ob->set_temp( "war/score", war_score(multipk_player1[n]->query("combat_exp")) );
				ob->set_temp( "war/vs", multipk_player1[n]->query("id") );
			}
			else {
				ob->set_temp( "war/score", 0 );
				ob->set_temp( "war/vs", "NONE" );
			}
			ob->move(AREA_PK+pk_map[n]+"_"+(random(9)+1));
		}
	}

}

void multipk_over()
{
	string clan_win, clan_lose;
	int point;

	if( multipk_point1 > multipk_point2 ) {
		clan_win  = multipk_clan1;
		clan_lose = multipk_clan2;
		point     = multipk_money1; 
	}
	else {
		clan_win  = multipk_clan2;						
		clan_lose = multipk_clan1;
		point     = multipk_money2;
	}

	CHANNEL_D->do_channel( this_object(), "war", "�䶯����, ������̵ġ�" +
		CLAN_D->clan_query( multipk_clan1, "name" ) + " VS " +
		CLAN_D->clan_query( multipk_clan2, "name" ) + "��֮ս���ڽ�����" );
	CHANNEL_D->do_channel( this_object(), "war", HIW +
		CLAN_D->clan_query( clan_win, "name" ) + HIR"սʤ"HIW +
		CLAN_D->clan_query( clan_lose, "name" ) + HIR"��" );
	CHANNEL_D->do_channel( this_object(), "war", HIW +
		CLAN_D->clan_query( clan_lose, "name" ) + HIR"����"HIW +
		CLAN_D->clan_query( clan_win, "name" ) + HIY"�ƽ�" +CHINESE_D->chinese_number(point)+ "����"HIR"��" );

	point *= 10000;
	CLAN_D->add_money  ( clan_win ,  point );
	CLAN_D->add_money  ( clan_lose, -point );
	CLAN_D->add_clanset( clan_lose, "develop", -point/10000 );

	log_file("clan/"+clan_win+"/WAR-"+ctime(time())[4..6], sprintf("%s սʤ%|12s��ûƽ� %5d ����\n",
		ctime(time())[0..15], CLAN_D->clan_query(clan_lose,"name"), point ));
	log_file("clan/"+clan_lose+"/WAR-"+ctime(time())[4..6], sprintf("%s �ܸ�%|12s���ƽ� %5d ����\n",
		ctime(time())[0..15], CLAN_D->clan_query(clan_win,"name"), point ));

	multipk_now    = 0;
	multipk_time   = 0;
	multipk_point1 = 0;
	multipk_point2 = 0;
	multipk_money1 = 0;
	multipk_money2 = 0;
}

void multipk_timeout()
{
	int	n;
	object	ob;
		
	CHANNEL_D->do_channel( this_object(), "war", "��" +
		CLAN_D->clan_query( multipk_clan1, "name" ) + " VS " +
		CLAN_D->clan_query( multipk_clan2, "name" ) + "��˫���Ѽ�ս����һ�ա�" );
	for( n=0; n<5; n++ ) {
		if( multipk_player1[n] )
			if( pk_cmap[where(ob)] ) {
				ob->remove_all_killer();
				ob->move( ob->query( "war/from" ) );
				ob->delete_temp( "war" );
			}
	}
	for( n=0; n<5; n++ ) {
		if( multipk_player2[n] )
			if( pk_cmap[where(ob)] ) {
				ob->remove_all_killer();
				ob->move( ob->query( "war/from" ) );
				ob->delete_temp( "war" );
			}
	}
	multipk_over();
}

string where( object ob )
{
	int	i;
	string	area;

	i = 24;
	area = file_name(environment(ob));

	if( area[16..22] == "multipk" )
		while( i++ )
			if( area[i] == '_' )
				return area[24..i-1];
	return "NONE";
}

int war_score( int exp )
{
	int level, i;

	i = exp-3000000;
	for( level=0; i>0; level++ )
		i-= (level)*1500;

	return level;
}

