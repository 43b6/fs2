inherit NPC;

void create()
{
	set_name("�ŵ���",({"down yua","yua"}));
	set("long","�ų˷���� ,����Ӧ�������˼�� ,�����˴��� .\n");
	set("gender","����");
	set("combat_exp",6106);
        set("attitude","heroism");
	set("age",21);
	set("class","swordsman");
	set("score",1000);
	set("force",300);
        set("max_force",300);
	set("family/master_name","�ų˷�");
	set("force_factor",3);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",40);
	set_skill("dodge",40);
	set_skill("parry",40);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	add_money("silver",10);
	create_family("�ɽ���",5,"����");
}

         
      
