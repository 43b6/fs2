inherit NPC;

void create()
{
	set_name("�ɽ��ɳ���",({"worker"}));
	set("long","���ɽ��ɴ��ӵĹ��� .\n");
	set("gender","����");
	set("combat_exp",567);
	set("attitude","friendly");
	set("age",25);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	set_skill("hammer",20);
	setup();
	carry_object("/open/gsword/obj/dirty_cloth")->wear();
	carry_object("/open/gsword/obj/hammer")->wield();
	add_money("coin",50);
}

         
      
