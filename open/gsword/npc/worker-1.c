inherit NPC;

void create()
{
	set_name("�ɽ����ϳ���",({"old worker","worker"}));
	set("long","һ���������Ƶ����� ,�ƺ����ɽ��ܾ��� .\n");
	set("gender","����");
set("combat_exp",182);
	set("attitude","friendly");
	set("age",68);
	set("str",20);
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
	setup();
	carry_object("/open/gsword/obj/dirty_cloth")->wear();
	add_money("coin",50);
}

         
      
