inherit NPC;
void create()
{
	set_name("Сͯ", ({"clean boy","boy"}));
	set("long","�ɽ��ɵ�Сͯ,�����æ�û�ͷת��,��Ϊ����ʦ��½���������,
Ҫ��������еķ��߸����øɾ�,С�����ĸ�Υ��ʦ��������,ֻ��
����С�Ͳ�ƴ���Ĳ�����.\n");
	set("gender","����");
	set("combat_exp",1000);
        set("attitude","friendly");
	set("age",15);
	set("title","�ɽ���Сͯ��");
	set("score",1000);
	set("force",0);
	set("max_force",0);
	set_skill("force",5);
        set_skill("shasword",4);
	set_skill("sword",7);
	set_skill("dodge",10);
	set_skill("parry",6);
	set_skill("literate",15);
	set_skill("unarmed",10);
	set_skill("blade",7);
	set_skill("dagger",5);
        set("str", 20);
        set("cor", 26);
	set("per", 20);
	set("int", 15);
	set("cps", 10);
	set("con", 20);
	set("spi", 15);
	set("kar", 15);
	setup();
	carry_object("/open/gsword/obj/suit")->wear();
	add_money("coin",50);
}

