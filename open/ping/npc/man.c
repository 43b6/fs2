
inherit NPC;
void create()
{
        set_name("����", ({ "man" }) );
	set("gender", "����" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long",
                "һλ��ͨ�Ľ���.\n"
                "����æ�����Ĺ���.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              "����˵: �������������л�����.\n",
              "����˵: �������Ͽ�װˮ...(fill ����).\n",
              "����˵: ��ѩ����а�����ȶ��ǿ��µ�����.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
        carry_object("/open/gsword/obj/g_pill");
         	
}

