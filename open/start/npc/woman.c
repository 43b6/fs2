//woman.c

#include <../start.h>

inherit NPC;

string give_bento();

void create()
{
	set_name("ũ��",({"woman"}));
	set("long","һ��ƽ����ũ�Ҹ�Ů�����ƺ��ڷ�����ʲô��\n");
	set("gender","Ů��");
	set("nickname", "�ſ���");
	set("age", 43);

	set("combat_exp",59);
	set("inquiry",([
	  "trouble":"����԰���һ��æ��\n",
	  "help":"���ɷ��������������ͱ㵱ȥ�������������ֲַ�����\n����԰�����ȥ������\n",
	  "�㵱":(: give_bento :),
	  "bento":(: give_bento :),
	]));

	setup();
	carry_object(S_OBJ"apron")->wear();
}

string give_bento()
{
	object who, item;
	who = this_player();

	if( who->query("quests/bento") || who->query_temp("bento")==1 )
		return "�㲻���Ѿ��ѱ㵱��������\n";
	else if( who->query_temp("bento")==2 ) {
		item = new(S_OBJ"bento2");
		item->move(who);
		message_vision("��Ů��$Nһ���㵱��\n", who);
		who->set_temp("bento", 1);
		return "��οɱ��ٰѱ㵱�Ե���ร�\n";
	}
	else {
		item = new(S_OBJ"bento");
		item->move(who);
		printf("��Ů��%sһ��%s��\n",
		who->query("name"),item->short() );
		who->set_temp("bento", 1);
		return "лл�㣬��ѱ㵱�ø����ɷ����ɷ�������п��롣\n";
	}
}
