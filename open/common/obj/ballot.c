// ballot.c
// A toilet used to poll from players.
// Author: Spock @ FF	97.Mar.12.
// Last modified by Spock @ FF	97.Mar.18.

#include <ansi.h>

inherit ITEM;
inherit F_SAVE;

void init()
{
	add_action("do_setup", "setup");
	add_action("do_nominate", "nominate");
	add_action("do_vote", "vote");
	add_action("do_statistics", "stat");
	add_action("do_cancel", "cancel");
}

string query_save_file()
{
	return DATA_DIR + "ballot_box";
}

void create() 
{
	seteuid( getuid() );

	set_name( HIC "����һͶƱר����" NOR, ({ "ballot box", "box", "ballot" }) );
	set("no_get", 1);
     set("no_sac",1);
	set("no_clean_up", 1 );
	set("unit", "��");
	restore();
}

string short()
{
	int *ballots;
	
	ballots = query("ballots");
	
	if( !query("voting") )
		return HIC "ͶƱר���� " NOR "(box) [ " HIR "û��ͶƱ� " NOR "]";
	if( !arrayp( ballots ) || !sizeof( ballots ) )
		return HIC "ͶƱר���� " NOR "(box) [ " HIG "ͶƱ��" NOR ", " HIM "û���κ�ѡƱ " NOR "]";
	if( this_player() ) {
		if( query("voting_start_time") > time() ) {
			return sprintf("%s " NOR "[ %s, " HIM "ͶƱ��δ��ʼ " NOR "]", 
			HIC "ͶƱר���� " NOR "(box)", 
			( query("final_nominate_time") > time()
			? HIM "������" NOR : HIR "������ֹ" NOR ) );
		} else if( this_player()->query("vote/id") == query("voting_id") 
			&& this_player()->query("vote/voted_option") ) {
			return sprintf("%s " NOR "[ %s, " HIW "%d ͶƱ�˴�" NOR ", " HIB "����ͶƱ " NOR "]", 
			HIC "ͶƱר���� " NOR "(box)", 
			( query("final_nominate_time") > time()
			? HIM "������" NOR : HIR "������ֹ" NOR ),
			query("voters_count") );
		} else {
			return sprintf("%s [ %s" NOR ", " HIW "%d ͶƱ�˴�, " HIC "��δͶƱ " NOR "]", 
			HIC "ͶƱר���� " NOR "(box)", 
			( query("final_nominate_time") > time()
			? HIM "������" NOR : HIR "������ֹ" NOR ),
			query("voters_count") );
		}
	}
}

string long() {
	string long;
	int i;
	string *options;
	int *player_ballots;
	int *new_array;
	
	long = HIY "  [ ͶƱר���� ]" NOR "\n";
	long += " ҪͶƱ�밴 vote xxx\n";
        long += " Ҫȡ��ͶƱ�밴 cancel xxx\n";
	if( !query("voting") )
		return long + HIR "Ŀǰû���κ�ͶƱ�" NOR "\n";

	options = query("options");

	if( this_player()->query("vote/id") != query("voting_id") ) {
		this_player()->set("vote/id", query("voting_id") );	
		this_player()->set("vote/voted_option", 0 );
		this_player()->set("vote/ballots", ({ }) );
	}
	player_ballots = this_player()->query("vote/ballots");

	if( sizeof( player_ballots ) == 0 || this_player()->query("vote/id") 
		!= query("voting_id") )
		player_ballots = ({ });

	if( sizeof( options ) > sizeof( player_ballots ) ) {
		new_array = allocate( i = ( sizeof( options ) - sizeof( player_ballots ) ) );
		new_array[i - 1] = 0;
		player_ballots += new_array;
	} 
	
	this_player()->set("vote/ballots", player_ballots );
	player_ballots = this_player()->query("vote/ballots");

	long += query("desc") + "\n";
	long += HIW " <����״��> " HIY "[��ʼʱ��] " NOR + ctime( query("voting_setup_time") ) + "\n";
	long += "            " HIY "[��ֹʱ��] " NOR + ctime( query("final_nominate_time") ) + "\n";
	long += "            " + ( time() < query("final_nominate_time") ? HIG "������" NOR "\n" : HIR "������ֹ" NOR "\n" );

	long += HIW " <ͶƱ״̬> " NOR;
	long += HIY "[ͶƱ��ʼʱ��] " NOR + ctime( query("voting_start_time")) + "\n";
	long += "            " + ( time() < query("voting_start_time") ? HIR "ͶƱ��δ��ʼ" NOR "\n" : HIG "ͶƱ��ʼ" NOR "\n" );
	if( query("max_voter_option") == 0 )
		long += HIC "            ����Ʊ��\n";
	else
		long += sprintf( HIC "            ÿ�����Ʊ��: " NOR "%s\n", query("max_voter_option") 
			? sprintf("%d", query("max_voter_option")) : "����Ʊ��" );

	long += HIW " <Ŀǰѡ��>" NOR "\n";

	for( i = 0; i < sizeof( options ); i++ ) {
		long += sprintf("%s" NOR "(" CYN "%2d" NOR ") %s\n",player_ballots[i] > 0 ? HIY "��" NOR : "  ", i + 1, options[i] );
	}
	long += HIW " <ͶƱ����>" NOR "\n";
	long += sprintf(HIC "  %d ͶƱ�˴�" NOR ", ", query("voters_count") );
	if( this_player()->query("vote/id") == query("voting_id") 
		&& this_player()->query("vote/voted_option") )
		long += HIG "����ͶƱ" NOR "\n";
	else	long += HIR "��δͶƱ" NOR "\n";

	return long;
}

int do_setup( string arg )
{
	string item;
	string s_value;
	int d_value;

	if( !wizardp( this_player() ) )
		return notify_fail("ֻ����ʦ��Ȩ������ͶƱר����Ͱ���趨.\n");

	if( !arg ) {
		write(@LONG
ͶƱר������趨ֵ:

reset			�����趨��������
desc	string		ͶƱ�������
id	string		ͶƱ���ʶ����� ( ÿ��ͶƱ��Ҫ���� )
final	int		�������ʱ��, ��������
start   int		����֮��ʼͶƱ, ��������. ( 0 �����Ͽ�ʼ )
max_op	int		ÿ��ӵ�е�Ʊ�� ( 0 ����Ʊ�� )
voting	int		�Ƿ�ʼͶƱ. 0 �����, ����ֵ��ʼ ( ������趨 )
LONG
		);
		return 1;
	}
	sscanf( arg, "%s %s", item, s_value );
	if( item == "desc" ) {
		set("desc", s_value );
		write("�趨�˴�ͶƱ������Ϊ: " + s_value + "\n");
		save();
		return 1;
	} else if( item == "id" ) {
		set("voting_id", s_value );
		write("�趨�˴�ͶƱ��ʶ����Ϊ: " + s_value + ".\n");
		save();
		return 1;
	}
	sscanf( arg, "%s %d", item, d_value );
	if( item == "final" ) {
		set("final_nominate_time", time() + d_value*24*60*60 );
		write( sprintf("�趨�˴�ͶƱ����������Ϊ %d ���.\n", d_value ) );
		save();
		return 1;
	} else if( item == "start" ) {
		set("voting_start_time", time() + d_value*24*60*60 );
		write( sprintf("�趨�˴�ͶƱ�� %d ���ʼͶƱ.\n", d_value ) );
		save();
		return 1;
	} else if( item == "max_op" ) {
		set("max_voter_option", d_value );
		write( sprintf("�趨�˴�ͶƱÿ�����Ʊ��Ϊ: %d\n", d_value ) );
		save();
		return 1;
	} else if( item == "voting" ) {
		if( d_value )
			set("voting_setup_time", time() );
		set("voting", d_value );
		write( sprintf("%s�˴�ͶƱ.\n", d_value ? "����" : "�ر�" ) );
		save();
		return 1;
	}
	if( arg == "reset" ) {
		delete("desc");
		delete("voting_id");
		delete("voting_setup_time");
		delete("voting_start_time");
		delete("final_nominate_time");
		delete("voting");
		delete("max_voter_option");
		delete("options");
		delete("ballots");
		delete("voters_count");
		write("���ͶƱר����������趨.\n");
		save();
		return 1;
	}

	return notify_fail("�趨����Ŀ����ȷ.\n");
}

int do_nominate( string arg )
{
	string *options;
	int *ballots;
	int *player_ballots;
	int i;
	int *new_array;
	
	options = query("options");
	ballots = query("ballots");
	player_ballots = this_player()->query("vote/ballots");

	if( sizeof( player_ballots ) == 0 )
		player_ballots = ({ });

	if( sizeof( options ) == 0 )
		options = ({ });
	if( sizeof( ballots ) == 0 )
		ballots = ({ });
		
	if( !query("voting") )
		return notify_fail("Ŀǰû���κ�ͶƱ�.\n");

	if( time() > query("final_nominate_time") )
		return notify_fail("�����Ѿ���ֹ��.\n" );

	if( !arg ) return notify_fail("��ָ��������ѡ�������.\n");

	options += ({ arg });

	new_array = allocate( 1 );
	new_array[0] = 0;
	ballots += new_array;

	set("ballots", ballots );
	set("options", options );

	player_ballots += new_array;
	
	this_player()->set("vote/ballots", player_ballots );

	message_vision("$N " CYN "��" HIC "ͶƱר����" NOR CYN "�ڶ���һ��ֽ, ����д��:\n" HIW + arg + NOR "\n", this_player() ); 

	save();
	return 1;
}

int do_vote( string arg )
{
	int *ballots;
	string *options;
	int voter_option, i;
	int *player_ballots;
	int *new_array;
	int voters_count, voted_option;

	if( !arg ) return notify_fail("��ָ��ͶƱ��Ŀ�ĺ���.\n");

    if(this_player()->query("age") < 15)
      return notify_fail("�����̫�ٲ���ͶƱ!!!!\n");
    if(!userp(this_player()))
      return notify_fail("ֻ�������ͶƱ!!!\n");
	options = query("options");
	ballots = query("ballots");
	player_ballots = this_player()->query("vote/ballots");
	voters_count = query("voters_count");
	voted_option = this_player()->query("vote/voted_option");

	if( sizeof( player_ballots ) == 0 )
		player_ballots = ({ });

	sscanf( arg, "%d", voter_option );

	if( !query("voting") )
		return notify_fail("Ŀǰû��ͶƱ�.\n");

	if( query("voting_start_time") > time() )
		return notify_fail("ͶƱ��δ��ʼ.\n");

	if( !arg ) return notify_fail("��ָ��ͶƱ��Ŀ�ĺ���.\n");

	sscanf( arg, "%d", voter_option );

	if( voter_option < 1 || voter_option > ( sizeof( ballots ) ) )
		return notify_fail("û�����ѡ��.\n");

	if( this_player()->query("vote/id") != query("voting_id") ) {
		this_player()->set("vote/id", query("voting_id") );	
		this_player()->set("vote/voted_option", 0 );
		this_player()->set("vote/ballots", ({ }) );
	}
	if( sizeof( options ) > sizeof( player_ballots ) ) {
		new_array = allocate( ( i = sizeof( options ) - sizeof( player_ballots ) ) );
		new_array[i - 1] = 0;
		player_ballots += new_array;
		this_player()->set("vote/ballots", player_ballots );
	}

	if( this_player()->query("vote/voted_option")
		>= query("max_voter_option") && query("max_voter_option") > 0 )
		return notify_fail("���Ѿ����������ͶƱ��Ʊ��.\n");

	if( player_ballots[ voter_option - 1 ] )
		return notify_fail("���Ѿ�Ͷ�˴�ѡ��һƱ.\n");

	ballots[ voter_option - 1 ] ++;
	player_ballots[ voter_option -1 ] = 1;
	set("ballots", ballots );

	if( this_player()->query("vote/voted_option") == 0 )
		set("voters_count", voters_count + 1 );
	voted_option ++;
	this_player()->set("vote/voted_option", voted_option );
	this_player()->set("vote/ballots", player_ballots );

	message_vision("$N " CYN "��һ��ѡƱ�ӽ�" HIC "����һͶƱר����" NOR CYN "��." NOR "\n", this_player() );

	save();
	return 1;
}

int do_cancel( string arg )
{
	string *options;
	int *ballots;
	int voter_option, i;
	int *player_ballots;
	int *new_array;
	int voters_count;
	int voted_option;

	options = query("options");
	ballots = query("ballots");
	player_ballots = this_player()->query("vote/ballots");
	voters_count = query("voters_count");
	voted_option = this_player()->query("vote/voted_option");

	if( sizeof( player_ballots ) == 0 )
		player_ballots = ({ });

	if( !query("voting") )
		return notify_fail("Ŀǰû��ͶƱ�.\n");

	if( query("voting_start_time") > time() )
		return notify_fail("ͶƱ��δ��ʼ.\n");

	if( !arg ) return notify_fail("��ָ��ȡ��ͶƱ��Ŀ�ĺ���.\n");

	sscanf( arg, "%d", voter_option );

	if( voter_option < 1 || voter_option > ( sizeof( ballots ) + 1 ) )
		return notify_fail("û�����ѡ��.\n");

	if( sizeof( options ) > sizeof( player_ballots ) ) {
		new_array = allocate( i = sizeof( options ) - sizeof( player_ballots ) );
		new_array[i - 1] = 0;
		player_ballots += new_array;
		this_player()->set("vote/ballots", player_ballots );
	}

	if( this_player()->query("vote/id") != query("voting_id") ) {
		this_player()->set("vote/id", query("voting_id") );	
		this_player()->set("vote/voted_option", 0 );
	}

	if( !player_ballots[ voter_option - 1 ] )
		return notify_fail("����û��Ͷ��ѡ��һƱ.\n");

	ballots[ voter_option - 1 ] --;
	player_ballots[ voter_option -1 ] = 0;
	set("ballots", ballots );
	voted_option --;

	this_player()->set("vote/voted_option", voted_option );
	this_player()->set("vote/ballots", player_ballots );

	if( this_player()->query("vote/voted_option") == 0 )
		set("voters_count", voters_count - 1 );

	message_vision("$N " CYN "��һ��ѡƱ����" HIC "ͶƱר����" NOR CYN "��������." NOR "\n", this_player() );

	save();
	return 1;
}

int do_statistics( string arg )
{
	string *options;
	int *ballots;
	int i;
	string stat;
	string save, file;
    object me=this_player();

    if(!wizardp(me)) return 0;

	if( !query("voting") )
		return notify_fail("Ŀǰû���κ�ͶƱ�.\n");

	options = query("options");
	ballots = query("ballots");

	stat = HIW " <ĿǰͶƱͳ��>" NOR "\n";
	
	if( !arg ) {
		for( i = 0; i < sizeof( options ); i ++ ) {
			stat += sprintf(" (" CYN "%2d" NOR ") " GRN "[" HIW "%4d " GRN "Ʊ] " NOR "%s\n", i + 1, ballots[i], options[i] );
		}

		write( stat );
		message_vision("$N " CYN "��" HIC "ͶƱר����" NOR CYN "͵��ѡƱ." NOR "\n", this_player() );

		return 1;
	}

	if( arg == "save" ) file = "u/a/anmy/ballot_stat";
	else sscanf( arg, "save %s", file );

	if( wizardp( this_player() ) ) {
		stat += query("desc") + "\n";
		stat += HIW " <����״��> " HIG "[��ʼʱ��] " NOR + ctime( query("voting_setup_time") ) + "\n";
		stat += "            " HIG "[��ֹʱ��] " NOR + ctime( query("final_nominate_time") ) + "\n";
		stat += "            " + ( time() < query("final_nominate_time") ? HIG "������" NOR "\n" : HIR "������ֹ" NOR "\n" );

		if( query("max_voter_option") == 0 )
			stat += HIW " <ͶƱ״̬> " HIC "����Ʊ��\n";
		else
			stat += sprintf(HIW " <ͶƱ״̬> " HIC "ÿ�����Ʊ��: " NOR "%s\n", query("max_voter_option") 
				? sprintf("%d", query("max_voter_option")) : "����Ʊ��" );

		stat += HIW " <Ŀǰѡ��>" NOR "\n";

		for( i = 0; i < sizeof( options ); i ++ ) {
			stat += sprintf(" (" CYN "%2d" NOR ") " GRN "[" HIW "%4d " GRN "Ʊ] " NOR "%s\n", i + 1, ballots[i], options[i] );
		}

		stat += HIW " <ͶƱ����>" NOR "\n";
		stat += sprintf(HIC "  %d ͶƱ�˴�\n" NOR, query("voters_count") );

		write_file( file, stat ); 
		write("Ŀǰ��ͶƱͳ�ƽ���Ѵ���: "+ file +"\n");
		return 1;
	} else return notify_fail("stat �Ĳ�������ȷ.\n");
	return 1;
}
