// guard.c

inherit NPC;
void create()
{
        set_name("�ο�",({"visitor"}));
	set("gender", "����" );
	set("age", 25);
	set("str", 10);
	set("cor", 25);
	set("cps", 25);
	set("int", 15);
	set("long",
		"һλ������ɽ������ο�.�������������ܵ�����,\n"
		"һ��Ҳû������ĵ���...\n" );
        set("combat_exp", 400);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
                "�ο�˵: ������ɽ�羰������...\n",
                "�ο�˵: ���ɽ��ˮ������������������...\n",
		"�ο�˵: ��˵����ԭ��һ����ɽ...\n",
		"�ο�˵: ������겻�ᶳ�������λ�ڻ�ɽ���ϡ�\n"
	}) );
	set_skill("dagger", 4);
	set_skill("parry", 10);
	set_skill("dodge", 15);
	setup();
        carry_object("/open/gsword/obj/map.c");
	add_money("silver",3);
        carry_object("/open/gsword/obj/robe")->wear();
        carry_object("/obj/example/dagger")->wield();
}
