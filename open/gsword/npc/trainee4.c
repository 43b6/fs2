inherit NPC;

void create()
{
	set_name("����",({"trainee"}));
	set("long","�ɽ��ɵ��������,�����Ŵ�̫����������.\n");
	set("gender","����");
	set("combat_exp",1551);
        set("attitude","heroism");
	set("age",16);
	set("title","�ɽ��ɵ��������");
	set("class","swordsman");
	set("force",100);
	set("max_force",100);
	set("force_factor",2);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	setup();
	carry_object("/open/gsword/obj/sword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
         
      
