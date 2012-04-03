//sheik.c

#include <room.h>
#include <../start.h>
#include <ansi.h>

inherit F_VENDOR;

string do_rest();
// string give_letter();

void create()
{
	set_name("�峤",({"sheik"}) );
	set("long","һ���������ǳ�ƽ�����ˣ�ƽ���������������֪����\n�����֣���������ˣ����������й���Ϣ(rest)���¡�\n");
	set("gender","����");
	set("age",47);
	set("combat_exp", 98);

	set("inquiry",([
	"rest":(: do_rest :),
	"��Ϣ":(: do_rest :),
	/* "����":"�����Ҹ��˰��Ұ����͵�ƽ�ϳ�ȥ�����п���\n",
	"ƽ�ϳ�":"��Ӷ���ڳ�ȥ�Ժ��ߵ���·�������߾ͻ��ҵ��ˡ�\n",
	"letter":(: give_letter :),
	"��":(: give_letter :), */
	]));

	set("vendor_goods", ({
		S_OBJ"thunder_hat",
		S_OBJ"rain_cloth",
		"/obj/example/dumpling",
	}) );
/*
	set("chat_chance", 5);
	set("chat_msg", ({
		"�峤����ͷ˵����û����Ը����������أ�\n"}) );
*/
	setup();
}

void init()
{
	add_action("do_vendor_list","list");
	// add_action("do_report","report");
}

int accept_fight(object me)
{
	return notify_fail("�峤ҡҡͷ����˵���벻Ҫ�������Ǻ���\n");
}

string do_rest()
{
	object who;
	string str;

	who = this_player();
	str = "��Ϣһ�������ƽ�\n";
	if( !who->can_afford(50000) ) {
		str += "Ǯ���������ǾͶԲ����ˡ�\n";
		return str;
	}
	else {
                who->pay_money(50000);
		who->set_temp("sleep", 1);
		message_vision("$N�����峤һ��Ǯ��\n", who);
		str += "�ţ�����Թ�ȥ�����ǿͷ���Ϣ��\n";
		return str;
	}
}
/*
string give_letter()
{
	object who;
	who = this_player();

	if( who->query("quests/letter") )
		return "�峤Ц�Ŷ���˵��лл���ϴΰ������š�\n"
	if( who->query_temp("letter") )
		return "��ô�������͵���û��\n";
	else {
		new(S_OBJ"letter")->move(who);
		message_vision("�峤�ӻ����ó�һ���Ž���$N��\n", who);
		who->set_temp("letter", 1);
		return "������Ұ��������ȥ��ƽ�ϳǵ����ϰ壬лл��\n���ˣ����ǧ�򲻿��Կ��ŵ�����ร�\n";
	}
}

int do_report(string arg)
{
	object who;
	who = this_player();

	if( !arg || arg!="sheik" )
		return notify_fail("��Ҫ�ر���˭��\n");
	if( who->query("quests/letter") )
		return notify_fail("�峤Ц��˵��лл���ϴΰ������š�\n");
	else if( who->query_temp("letter")==2 ) {
		tell_object(who,"�峤���˵Ķ���˵���������ˣ�"+RANK_D->query_respect(who)+"�����۵Ļ����Խ�ȥ��Ϣһ�¡�\n");
		who->set("sleep", 1);
		who->set("quests/letter", 1);
		who->add("combat_exp", 30);
		tell_object(who,HIY"����ɡ��峤���š������ˣ�\n"NOR);
		tell_object(who,HIC"��ľ��������ˣ�\n"NOR);
		return 1;
	}
	else if( who->query_temp("letter")==4 )
		tell_object(who,"�峤���˵Ķ���˵���������ˡ�\n");
	else
		return notify_fail("�峤����üͷ����˵��������\n");
}
*/
