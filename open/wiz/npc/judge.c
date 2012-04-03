//judge.c

#include <login.h>
#include <ansi.h>

inherit NPC;

int	n = 0;

void create()
{
	set_name( "���й�", ({ "judge ice","ice","judge" }) );
	set( "long",
		"����һλ�������Ƿ�Ϊ���������й٣�������������(answer)�������������\n"
		"��������ħ�ơ�\n\n");
	set("nickname", HIB"��Ѫ����"NOR);
	set("title","ר�ŶԸ����������й�");
	set("gender", "����");
	set("no_lyssa",1);
	set("age",40);
	set("no_kill",1);
	setup();
}

void init()
{
	object me;

	seteuid( geteuid (this_player()));
	me = this_player();
	me->set_temp( "old_startroom", me->query("startroom") );
	me->set( "startroom", ROBOT_CHECK );
	if( !query_heart_beat(this_object()) ) set_heart_beat(1);
	add_action( "do_answer", "answer" );
	add_action( "babe_jail", "", 1) ;
	call_out( "judge", 1, me );
}

int babe_jail() // ����ǿ���ж� action ��ֹ����Ҹ� by ACKY
{
	object ob = this_player();
	if( ((string)query_verb()=="recall") ||
		((string)query_verb() =="perform") ||
		((string)query_verb() =="practice") ||
		((string)query_verb() =="exert") ||
		((string)query_verb() =="cast") ||
		((string)query_verb() =="conjure") ||
		((string)query_verb() =="do") ||
		((string)query_verb() =="c_in") ||
		((string)query_verb() =="c_home")
		) {
		write (HIY"���й�˵��:����������˻ش�����, �㻹�����?��\n"NOR);
		return 1;
	}
	if( ((string)query_verb()=="ct") ||
		((string)query_verb() =="tell") ||
		((string)query_verb() =="gt") ||
		((string)query_verb() =="reply") ||
		((string)query_verb() =="shout") ||
		((string)query_verb() =="war") ||
		((string)query_verb() =="dead") ||
		((string)query_verb() =="chat") ||
		((string)query_verb() =="rumor") ||
		((string)query_verb() =="music") ||
		((string)query_verb() =="chat") ||
		((string)query_verb() =="ht") ||
		((string)query_verb() =="cb") ||
		((string)query_verb() =="mud") ||
		((string)query_verb() =="es")
		) {
		write (HIY"���й�˵��:�����ȱ�? �Ŷ���û��!��\n"NOR);
		return 1;
	}
	return 0;
}

string color()
{
	if( ++n>7 )
		n=1;
	switch(n) {
	case 1: return HIR;
	case 2: return HIB;
	case 3: return HIY;
	case 4: return HIG;
	case 5: return HIY;
	case 6: return HIM;
	case 7: return HIW;
	}
}
// by ACKY
// �µ��ж���ʽ, ���㵫������ֹzmud
void judge( object me )
{
	int a, b, c, d, answer;
	string name, oper, tmp;

	a = random(20) + 1;
	b = random(20) + 1;
	c = random(20) + 1;
	if( b > a ) {
		d = a;
		a = b;
		b = d;
	}
	name = me->query("name") + "(" + me->query("id") + "), ";

	switch(random(5)) {
	case 0:
		tmp = random(2) ? "��" : "����";
		answer = a + b;
		oper = chinese_number(a) + tmp + chinese_number(b) + "���ڶ���?";
		break;
	case 1:
		tmp = random(2) ? "��" : "����";
		answer = a + b + c;
		oper = chinese_number(a) + tmp + chinese_number(b) + "�ټ�" + chinese_number(c) + "���ڶ���?";
		break;
	case 2:
		answer = a - b;
		tmp = random(2) ? "��ȥ" : "����";
		oper = chinese_number(a) + tmp + chinese_number(b)+ "���ڶ���?";
		break;
	case 3:
		tmp = random(2) ? "����" : "����";
		if( a * b <= 100 ) {
			answer = a * b;
			oper = chinese_number(a) + tmp + chinese_number(b)+ "���ڶ���?";
		} else {
			answer = (a * b) % 10;
			oper = chinese_number(a) + tmp + chinese_number(b)+ "����λ�����ڶ���?";
		}
		break;
	case 4:
		answer = a % b;
		oper = chinese_number(a) + "����" + chinese_number(b)+ "�����?";
		break;
	}
	if( random(2) )
		tell_room( environment(), HIY"���й��ʵ�:��" + color() + name + oper + HIY"��\n"NOR );
	else
		tell_object( me, HIY"���й��ʵ�:��" + color() + oper + HIY"��\n"NOR );
	call_out( "say_answer", 20+random(6), me );
	me->set_temp( "quiz/q", answer );
}

void say_answer( object me )
{
	string name, ans;

    if(!me) return ;
	ans = chinese_number( me->query_temp("quiz/q") );
	name = me->query("name") + "(" + me->query("id") + ")";

	if( !undefinedp(me->query_temp("quiz/q")) ) {
		tell_object( me, "���й�˵��:��" + name + ", ��ô�򵥶�����? �𰸵���" + ans + "����\n" );
		if( !wizardp(me) ) {
			command( "say ��" + name + ", �㷴Ӧ̫�����! ����С��һ��!��" );
			me->add_temp( "quiz/a", -1 );
			if( me->query_temp( "quiz/a" ) <= -5 ) {
				command( "say ��" + name + ", ���ٷ�����! �ٳٶ۰�! �ȹ���ȥ˯ʮ���Ӱ�!��\n" );
				me->do_command( "sleep 0 10 0 0" );
			}
		}
	}
    if(me)
	if( environment(me) == environment() )
		call_out( "judge", 1, me );
}

int do_answer( string arg )
{
	string s, name;
	object me;
	int ans;

	me = this_player();
	if( undefinedp(me->query_temp("quiz/q")) )
		return notify_fail( "�������һ�⡣\n" );
	notify_fail( "��ش�һ�����֡�\n" );
	if( !arg ) return 0;

	tell_object( me, CYN"����: " + arg + "\n"NOR );
	name = me->query("name") + "(" + me->query("id") + ")";
	if( sscanf( arg, "%d", ans )==1 ) {
		if( ans==me->query_temp("quiz/q") ) {
			me->add_temp( "quiz/a", 1 );
			me->delete_temp("quiz/q");
			command( "say " + name + "�����!" );
			command( "pat " + me->query("id") );
			if( me->query_temp("quiz/a") >= 3 ) {
				command( "say ���ܺã�"+ name + ", �㿴�������񱿵�������Իؼ��ˡ���\n" );
				me->delete_temp("quiz");
				me->set( "startroom", STARTROOM );
				me->move(STARTROOM);
			}
		}
		else {
			command( "say " + name + "�����!" );
			me->add_temp( "quiz/a", -1 );
			if( me->query_temp("quiz/a") <= -5 ) {
				command( "say ��" + name + ", ���ٸ����Ҳ°�! ����! �ȹ���ȥ˯ʮ���Ӱ�!��\n" );
				if( !wizardp(me) )
					me->do_command( "sleep 0 10 0 0" );
			}
		}
	}
	else
		return 0;
	return 1;
}

void die()
{
	object ob;
	if( !ob = query_temp("last_damage_from") )
		ob = this_player(1);
	if( !ob )
		return;
	write( HIW"���й���Ц��:��������Ҳ��ɱ����\n"NOR );
	tell_object( users(), "��"HIC"����"NOR"��"HIC"���й�(judge)˵��: �ĺ�������" + ob->query("name") + "���ҽ���ɱ��, ��֪ͨ wiz ���ұ���!\n"NOR );
}
