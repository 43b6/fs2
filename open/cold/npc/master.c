// shiao.c

inherit NPC;
inherit F_MASTER;

void consider();

void create()
{
	set_name("��ӳ",({"master yin","yin"}));

	set("nickname","�Ż�����");
	set("gender", "����");
	set("age",20);
	set("long",
		"����һλ��ͨ�ɷ���Ϊ�������ˣ��ഫ�ǡ��Ż���Ů��Ͷ̥ת����������Ϊ���ˡ�\n");
	set("attitude", "peaceful");

	set("str", 26);
	set("cor", 30);
	set("int", 24);
	set("cps", 30);

	set("force",800);
	set("max_force",800);
	set("force_factor",10);

	set("combat_exp", 1000000);
	set("score", 200000);

	set("chat_chance_combat", 80);
	set("chat_msg_combat", ({
	}) );

	set_skill("unarmed",40);
	set_skill("sword",70);
	set_skill("force",60);
	set_skill("magic",100);
	set_skill("literate",90);
	set_skill("dodge",100);
	set_skill("parry",40);
	create_family("��������",3,"������");

	setup();

}

void init()
{
	add_action("do_touch","touch");
}

void attempt_apprentice(object me)
{
	if(me->query("gender")!="Ů��")
	{
		command("say �Բ��� ! ����������ֻ��Ůͽ��\n");
		return;
	}
	command("l "+me->query("id"));
	if(me->query("per")<20)
	{
		command("say �ܱ�Ǹ ! ���Ҳ���ʦͽԵ�֡�");
		return;
	}
	if(me->query_temp("do_touch_yin")!=1)
	{
		command("say С����������ҵ��֡�\n");
		return;
	}
}
int do_recruit(object me)
{
	command("smile "+me->query("id"));
	command("say ����ϲ������������Ů���ˡ�\n");
	command("recruit "+me->query("id"));
	return 1;
}


int recruit_apprentice(object ob)
{
	if( ::recruit_apprentice(ob) )
		add("apprentice_availavble", -1);
}
int do_touch(string arg)
{
	if(this_player()->query("gender")!="Ů��")
		return notify_fail("������� ?\n");
	if(arg!="yin")
		return notify_fail("������ʲô ?\n");
	message_vision("$N������֣����������$n������\n",this_player(),this_object());
	command("smile");
	this_player()->set_temp("do_touch_yin",1);
	if(this_player()->query("per")>20)
		do_recruit(this_player());
	return 1;
}
