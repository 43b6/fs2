inherit NPC;

void create()
{
	set_name("��ҩʦ",({"doctor wang","doctor","wang"}));
	set("long","һ��˹˹���ĵ������� ,��ҩʦ���� ,����ǰ��ɭ��������
���� ,�ҷ��ų˷羭�� ,���԰�Ȼ��� ,��ҩʦΪ�������
֮�� ,��Ը�����ɽ� ,�����æ !\n");
	set("gender","����");
	set("combat_exp",8000);
	set("attitude","friendly");
	set("age",41);
	set("class","doctor");
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("cure",40);
	set_skill("literate",40);
	setup();
	carry_object("/open/gsword/obj/robe_2")->wear();
	add_money("silver",5);
}
