// wang.c by oda

#include <ansi.h>
#include <../start.h>

inherit NPC;

void create()
{
	set_name("���ϰ�", ({ "wang" }) );
	set("gender", "����");
	set("combat_exp",8);
	set("long", "�㿴��һ������������վ�ڹ�̨����˵���Ǯ��\n");

	setup();
}

int accept_object(object who , object item)
{
	int letter;
	letter = who->query_temp("letter");

	if( item->query("id") == "sheik's letter" ) {
		if( letter==1 || letter==3 ) {
			tell_object(who,"���ϰ�С���Ķ���˵��ร������ƴ�峤������������\n����лл�㣬�鷳�����ȥ����(report)�����Ѿ��յ��ˡ�\n");
			if( letter==1 )
				who->set_temp("letter", 2);
			else
				who->set_temp("letter", 4);
		}
	}
	return 1;
}
