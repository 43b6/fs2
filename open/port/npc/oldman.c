inherit NPC;

void create()
{
	set_name("�����",({"old fisherman","man"}));
	set("long","һ�������׵������ , �������ݿڿ������ .\n");
	set("gender","����");
	set("combat_exp",1000);
	set("attitude","peaceful");
	set("age",73);
	set("str",20);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("staff",10);
	set_skill("parry",10);
	set_skill("dodge",10);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	setup();
	carry_object("/open/port/obj/crutch")->wield();
	add_money("coin",10);
}
