// ha.c by oda

#include </open/open.h>

inherit F_VENDOR;

void create()
{
	set_name("������", ({ "ha ha er", "ha", "er" }) );
	set("nickname", "Ц��ص�Ц����");
	set("gender", "����");
	set("age", 44);
	set("class", "bandit");
	set("attitude", "friendly");
	set("long", "�㿴��һ���������ֵ�Բ�����ӣ�����ʼ��ά����һ����Ц�ݣ�����\n�������Ƶġ�����Ҫ������˶������˶����ķ����Ļ����ǿɾʹ��\n�ش톪��\n������ҷ��ݵ��ƹ������������Щ�����ԡ�\n");
	set("vendor_goods", ({
	BAD_OBJ"meal",
	BAD_OBJ"luwei",
	BAD_OBJ"wine",
	}));

	set("combat_exp", 550000);
	set("str", 25);
	set("cor", 25);
	set("int", 30);
	set("spi", 23);
	set("cps", 21);
	set("con", 25);
	set("per", 22);
	set("max_force", 1000);
	set("force", 1000);
	set("force_factor", 10);
	set("max_gin", 500);
	set("max_kee", 1000);
	set("max_sen", 500);

	set_skill("array", 90);
	set_skill("blade", 60);
	set_skill("dodge", 45);
	set_skill("force", 40);
	set_skill("move", 40);
	set_skill("parry", 35);
	set_skill("unarmed", 30);
	set_skill("badstrike", 60);
	set_skill("badforce", 50);
	set_skill("ghost-steps", 40);
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badblade");
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");

	set("chat_chance", 8);
	set("chat_msg", ({
	"��������Ц���������������������������Ҫ��Ҫ�Ե㶫������������\n",
	"������ƤЦ�ⲻЦ��˵��������������������ƴ��\������������ࡣ�������\n",
	}) );
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
	}) );

	setup();
	//carry_object(BAD_OBJ"liu_blade")->wield();
	add_money("gold", 10);
}

int accept_fight(object me)
{
	command("say ������ô������"+RANK_D->query_respect(me)+"�Ķ��֣����ͱ�����Ц�ˡ�");
	remove_call_out("backstab");
	call_out("backstab", 3, me);
	return 0;
}

void backstab(object me)
{
	if(!me || environment(me)!=environment())
		return;
	message_vision("������ͻȻ����һ�������������������㳯��$N�ı����˹�ȥ��\n",me);
	this_object()->kill_ob(me);
}
