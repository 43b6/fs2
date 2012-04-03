// any.c by anmy 97/11/17

#include <ansi.h>
#include <../start.h>

inherit NPC;

void create()
{
	set_name("ũ��", ({"farmer" }) );
	set("gender", "����");
	set("age", 35);
	set("long","��ע�⵽���ı����ϳ���һ�źô���룬ʮ�ֵĻ�����\n");
	set("str", 25);
	set("con", 20);
	set("combat_exp", 134);

        set("chat_chance", 5);
        set("chat_msg", ({
         "ũ��̧��ͷ��������ͷ�ϵĺ�ˮ������������ȥŬ���ĸ��\n",
	}) );
        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
                "ũ���е���������������ɱ�˰���\n",
                "ũ���е�����Ҫ��ʲô��ҪǮҲ����ɱ�Ұɣ�\n",
        }) );

        setup();
        carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("ũ��˵����λ"+RANK_D->query_respect(me)+"������Ц�˺���\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="bento" ) {
		tell_object(who,"�������ˣ�лл����������㵱,лл~\n");
		if( !who->query("quests/bento") &&
who->query_temp("bento")==1 )
		{
			who->add("combat_exp",100);
tell_object(who,HIY"�������ũ���ı㵱֮�գ�\n"NOR);
			tell_object(who,HIC"��ľ��������� :p\n"NOR);
			who->set("quests/bento", 1);
		}
	}
	if( item->query("id")=="bento box" ) {
		printf("%s����һ��%s��\n",this_object()->short(),item->short());
		printf("%s�󺰣���С�ӣ����ҳ����ҵı㵱��\n",
		this_object()->short());
		tell_object(who, "�����ʵ�ںܲ�����˼��ֻ���ٻ�ȥ��ũ����һ���㵱��\n");
		who->set_temp("bento", 2);
	}
	return 1;
}
