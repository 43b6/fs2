inherit NPC;

void create()
{
	set_name("½����",({"chan chin","chin"}));
	set("long","�ų���֮��ͽ ,������Щ���� .\n");
	set("gender","����");
	set("combat_exp",6407);
        set("attitude","heroism");
	set("age",22);
	set("class","swordsman");
	set("score",1000);
	set("force",300);
        set("max_force",300);
	set("family/master_name","�ų���");
	set("force_factor",3);
	set("str",30);
        set("cor", 30);
       set_skill("shasword",10);
       set_skill("sha-steps",3);
       map_skill("sword","shasword");
       map_skill("dodge","sha-steps");
       
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",40);
	set_skill("dodge",50);
	set_skill("parry",50);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	add_money("silver",10);
	create_family("�ɽ���",5,"����");
}

         
      
