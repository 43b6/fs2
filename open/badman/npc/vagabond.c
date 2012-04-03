// vagabond.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("�о�����", ({ "vagabond" }) );
	set("gender", "����");
	set("age", 20);
	set("attitude", "badman");
	set("long", "��ȫ��������ģ����Ǳ�̫�����ȽϺá�\n");
	set("combat_exp", 500);
	set_skill("dodge", 10);

	set("chat_chance", 4);
	set("chat_msg", ({
	}));

	setup();
	//carry_object(BAD_OBJ"short_sword")->wield();
}

void greeting(object who)
{
	object ob = this_object();

        if( !who || environment(who)!=environment() ) return;

	tell_object(who, "�о���������ײײ����������������û���۾��Ƶ�ײ����һ�¡�\n");
	tell_room(environment(ob),"�о�����һ��С����$N������ײ��һ�¡�\n",who);
	command("say �Բ��𣬶Բ���"+RANK_D->query_respect(who)+"����ԭ�¡�");
	if( random(5)>2 ) {
		if( who->can_afford(1000) ) {
			who->pay_money(1000);
			message_vision("�о������Ż����ŵĶ㵽һ��ȥ��\n", who);
			ob->pay_player(1000);
		}
	}
    if (who->query("quests/steal",1))
    {
   if (!present("lucky-neck",who))
     {
      new("/data/autoload/badman/ste.c")->move(who);
      message_vision("[1;36m��ѽ������"+who->query("name")+"�ɣ�
�и�����˵������������������ø��㣡[0m\n",who);
     }
    }
    if (who->query("marks/kardie",1))
    {
     message_vision("[1;36m��ѽ������"+who->query("name")+"�ɣ�
�и�����˵����˶�����Ҫ�Ұ������������㣡[0m\n",who);
     new("/data/autoload/badman/ste.c")->move(who);
     who->delete("marks/kardie");
    }
    if (who->query("kar")==30 && who->query("quests/steal",1))
    {
    if (who->query("marks/fish",1))
    {
    }
   else {
     message_vision("[1;36m��ѽ!����"+who->query("name")+"��?
�и�������Ұ��ⶫ������.[0m\n",who);
     new("/data/autoload/badman/ste.c")->move(who);
     who->set("marks/fish",1);
    }
    }
}
