inherit NPC;

void create()
{
	set_name("��������", ({ "Jail Guard", "guard" }) );
	set("race", "����");
	set("age", 31);
	set("long", "���Ǹ����ؼ���������\n");
	set("str", 150);
	set("cor", 150);
	set("limbs", ({ "ͷ��", "����", "����", "�ֱ�", "�Ȳ�" }) );
        set_temp("apply/armor", 50);
	set("combat_exp",13844);
        set_skill("dodge", 36);
        set_skill("sword", 24);
        set_skill("parry", 27);
	setup();
        carry_object("/open/gsword/obj/sword")->wield();
        carry_object("/open/gsword/obj/boot-1")->wear();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",400);
}

