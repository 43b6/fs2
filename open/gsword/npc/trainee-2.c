inherit NPC;

void create()
{
	set_name("�鳯",({"hon zou","zou"}));
	set("long","�Ժ�֮��ͽ ,��ѧ��ʦ����ɹ��� .\n");
	set("gender","����");
	set("combat_exp",6106);
        set("attitude","heroism");
	set("age",22);
	set("class","swordsman");
	set("force",300);
        set("max_force",300);
        set_skill("shasword",10);
	set_skill("sha-steps",3);
	map_skill("sword","shasword");
	map_skill("dodge","sha-steps");
	set("family/master_name","�Ժ�");
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
	//  carry_object("/open/gsword/obj/pill")->set_amount(1);
	create_family("�ɽ���",5,"����");
}

         
      
