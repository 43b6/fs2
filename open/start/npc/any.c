// any.c by anmy 97/11/17

#include <ansi.h>
#include <../start.h>

inherit NPC;

void create()
{
	set_name("���", ({"beauty any","any","beauty" }) );
	set("gender", "Ů��");
        set("nickname", HIC"ܰ᰹���"NOR);
	set("age", 20);
	set("long","�㿴��һ�������Ů������������ǰ,�����þ�������,\n������һ�ֲ�ͬ�������˵�����,���ƺ�ʧ����һЩ������\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 10000);

	set("chat_chance", 5);
	set("chat_msg", ({
		"��ᰲ��ϵض�����΢Ц�š�\n",
                "���������Σ��ƺ�����Ѱ��ʲô����..��\n",
	}) );

	setup();
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object me)
{
	return
notify_fail("��᰹���˵����λ"+RANK_D->query_respect(me)+"������Ц�˺���\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="stone" ) {

tell_object(who,"��᰹������ĵ�Ц�ţ��������ˣ�лл������һر�ʯ,лл~\n");
		if( !who->query("quests/stone") &&
                           who->query_temp("stone")==1 )
		{
			who->add("combat_exp",1000);
                tell_object(who,HIY"�������ʧ��ı�ʯ֮�գ�\n"NOR);
			tell_object(who,HIC"��ľ��������� :p\n"NOR);
			who->set("quests/stone", 1);
		}
}
}
