// /open/start/obj/letter.c by oda

#include <ansi.h>
#include <../start.h>
#include <room.h>

inherit ITEM;

void create()
{
	set_name("�峤����",({"sheik's letter", "letter"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","�������ƴ峤��������͵��ţ����治֪��д��Щʲô��\n");
	set("unit","��");
	}
	setup();
}

void init()
{
	add_action("do_read", "read");
}

int do_read(string arg)
{
	object who;
	who = this_player();

	if( !arg || arg!="letter" )
		return notify_fail("��Ҫ��ʲô��\n");
	if( !who->query_temp("reading") ) {
		who->set_temp("reading", 1);
		return notify_fail("��ͻȻ����峤�����Ļ�����ʼ��ԥ��������\n���׸ò��ÿ��أ�....\n");
	}

/*
	if( who->query_temp("letter")==1 ) {

		switch( random(2) ) {
			case 0:
			write("\n
	������
	    �Ұ�Ǯ�����ڴ����ϱߵĵ�����������û�˵�ʱ��
	ȥ͵͵�����ڳ������Ͳ��ᱻ�˷����ˡ���ס��Ǯ����һ��
	�����˸�������ȥ������һ��(search)��֪���ˡ�\n\n");
			tell_object("Ϊ�˱���峤���Ƿ����ű�͵���ˣ���С������Ľ���\n�ۺ�����������׼���Ȱ�����ȥ�ٻ�����Ǯ��\n");
			who->set_temp("letter", 3);
			break;

			case 1:
*/
			write("\n
	������
	    �Ұ�Ǯ������....

�㷢���ƺ�����һ��ر�ͼ�����˷ܵ�׼�����¶�ʱ....\n\n");
			call_out("do_read2", 3, who);
/*
			break;

		}
*/

		return 1;
/*
	}
	else if( who->query_temp("letter")==3 )
		return notify_fail("���������±����ְ�����ȥ���Űɡ�\n");
	else
		return notify_fail("���˵��Ż���Ҫ�ҿ��ȽϺðɡ�\n");
*/
}

int do_read2(object who)
{
	int i;

	tell_object(who,HIY"������Ļ��͹Թ԰������£�\n\n"NOR);
	tell_object(who,"��֪��ʱ�����Ѿ���һȺ�����ɷ�����˸�����Χס��....\n\n");
	for(i=0; i<2; i++)
		new(S_NPC"bandit")->move(environment(who));
/*
	tell_object(who,CYN"ɽ��ͷ�������˵����С�ӣ�����ע�����ƴ��Ǹ���ͷ�Ѿ��ܾ��ˣ�����������Ҵ�������....������������\n"NOR);
	tell_object(who,CYN"ɽ��ͷ�ӿ�����˵���ߺ�....���������ϵ�Ǯ���ž�����һ����\n"NOR);

	if( who->can_afford(1000)!=1 ) {
		tell_object(who,CYN"ɽ��ͷ���ƿڴ����С�ӣ�����Ǯ��û�С��ֵ��ǣ����Ҵ�\n"NOR);
		who->set("gin", 20);
		who->set("kee", 20);
		who->set("sen", 20);
		tell_object(who,"\n�㱻ɽ��ʹŹһ���Ժ������Ǳ�ס��һ��С��....�������Ѿ��������ˡ�\n");
	}
	else {
		who->pay_money(1000);
		tell_object(who,"\nɽ����������ź�һǧ��Ǯ�Ժ�㳤���ȥ�ˡ�\n");
	}

	tell_object(who,"�㿪ʼ����Լ�����͵���ŵ�....\n");
	destruct( this_object() );
*/
	return 1;
}
