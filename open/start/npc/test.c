//woman.c

#include <../start.h>

inherit NPC;

   string give_stone();

void create()
{
	set_name("����ũ��",({"woman"}));
set("long","һ��ƽ����ũ�Ҹ�Ů�����ƺ��ڷ�����ʲô\n,�������������ʲô��Ҫ��æ�ġ�\n");
	set("gender","Ů��");
	set("age", 20);
	set("combat_exp",1000);
	set("inquiry",([
	  "trouble":"�Һ÷��, ��ǰ������ũ��������ʱ�ڵ�һ����Ʒ\n",
	  "��Ʒ":"�Ҽ�һ�ű�ʯ, ����԰��һ���ԭ����?\n",
          "��ʯ":"������������ƿ�ӡ, һ����ĳλ�߹ٵ���Ʒ~\n",
	  "�챦ʯ":(: give_stone :),
	  "red stone":(: give_stone :),
	]));

	setup();
	carry_object(S_OBJ"apron")->wear();
}

string give_stone()
{
	object who, item;
	who = this_player();

	if( who->query("quests/stone") || who->query_temp("stone")==1 )
		return "�㲻���Ѿ��Ѻ챦ʯ��������\n";
	else if( who->query_temp("�챦ʯ")==2 ) {
		item = new(S_OBJ"stone");
		item->move(who);
		message_vision("��Ů��$Nһ�ź챦ʯ��\n", who);
		who->set_temp("stone", 1);
		return"���ǵ�,����������·�ϼ���,�ٰ��һ�������ร�\n";
	}
	else {
		item = new(S_OBJ"stone");
		item->move(who);
		printf("��Ů��%sһ��%s��\n",
		who->query("name"),item->short() );
		who->set_temp("stone", 1);
		return "�鷳�㽫�챦ʯ���ԭ����, ��������Ǻ��ż��ġ�\n";
	}
}
