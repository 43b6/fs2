inherit NPC;

void create()
{
        set_name("�̵��ϰ�",({ "keeper" }) );
	set("race", "����");
        set("age",51);
        set("long","���̵���ϰ�,����æ��������Ʒ.\n");
        set("str", 18);
        set_temp("apply/armor", 50);
        set("combat_exp", 3500);
        set_skill("dodge", 36);
        set_skill("dagger", 34);
        set_skill("parry", 27);
	setup();
        carry_object("/open/gsword/obj/dagger")->wield();
        carry_object("/open/gsword/obj/robe_2")->wear();
        carry_object("/open/gsword/obj/hat")->wear();
        carry_object("/open/gsword/obj/ring")->wear();
        add_money("coin",400);
}

