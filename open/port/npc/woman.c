inherit NPC;

void create()
{
	set_name("�渾",({"woman"}));
	set("long","һ��ƽ�����渾 , �������� .\n");
	set("gender","Ů��");
	set("combat_exp",1000);
	set("attitude","peaceful");
	set("age",27);
	set("str",20);
	set("per", 25);
	set("cps",20);
	set("spi", 15);
	set_skill("blade",10);
	set_skill("parry",10);
	set_skill("dodge",10);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	setup();
	carry_object("/open/gblade/obj/knife")->wield();
	add_money("coin",10);
}
