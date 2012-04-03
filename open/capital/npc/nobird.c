
inherit NPC;

void create()
{
        set_name("̫��", ({ "nobirdman", "man" }) );
        set("long",
                "�����ڻʳ����һλ̫�࣬ƽ���͸����ڻʵۻ������Է���, \n
"
                "����һ����������������һ����, һ����֪��һ������ɶ\n
"
                "�ö�����\n");

        set("attitude", "heroism");
	set("class","officer");
        set("vendetta_mark", "authority");
        set("pursuer", 1);

        set("str", 20);
        set("cor", 21);
        set("cps", 21);

	set("combat_exp",4608);

	set("random_move",3);
        set("chat_chance", 10);
        set("chat_msg", ({
                (: random_move :),
        }) );

        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "̫��ȵ�������ʲô��!?�����ڻʳǽ�������! \n",
                "̫��ȵ�: �ҿ���̫���й�����������һλ, ���ֱ����!!\n"
        }) );

        set_skill("unarmed", 30);
        set_skill("parry", 40);
        set_skill("dodge", 40);
        set_skill("move", 35);

        set_temp("apply/attack", 35);
        set_temp("apply/defense", 35);
        set_temp("apply/damage", 30);
        set_temp("apply/armor", 35);
        set_temp("apply/move", 35);

        setup();

        carry_object("/obj/cloth")->wear();
}

