inherit NPC;

void create()
{
	set_name("½��",({"lu bo","bo"}));
  set("long","�ų˷�֮���� ,���书Զ����ʦ�ֶ��ӽ������� .\n");
	set("gender","����");
	set("combat_exp",3613);
        set("attitude","heroism");
	set("age",21);
        set_skill("shasword",10);
       set_skill("sha-steps",3);
       map_skill("sword","shasword");
       map_skill("dodge","sha-steps");
	set("class","swordsman");
	set("force",150);
	set("max_force",150);
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
	set_skill("sword",35);
	set_skill("dodge",35);
	set_skill("parry",35);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	add_money("silver",5);
	create_family("�ɽ���",5,"����");
}

         
      
