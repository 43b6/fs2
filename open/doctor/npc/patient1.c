
inherit NPC;
void create()
{
        set_name("����", ({ "paitent" }) );
	set("gender", "Ů��" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","������������������ſ�����.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              "����˵: ��ô��ô���˰�!!��ʱ�Ż��ֵ�����?\n",
              "����˵: �����֪����ô���,�Բ��·�,Ҳ˯����..*_*\n",
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
         	
}


