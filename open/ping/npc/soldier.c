inherit PARTY_NPC;

void create()
{
        set_name("����ʿ��", ({"door soldier","soldier"}));
        set("long","һλ���ش��ŵ�ʿ��.\n");
        set("age", 18);
        set("attitude","heroism");
        set("str", 24);
        set("per", 15);
        set("con", 50);
        set("cps", 22);
        set("cor", 27);
        set_skill("unarmed", 20);
        set_skill("dodge", 25);
        set("combat_exp", 1000);
        set_skill("parry", 25);
        set_skill("blade", 20);
        set("chat_chance", 10);
        set("chat_msg", ({
        "ʿ���ȵ�:�������ص�,������ȥ����\n" }));
        set_temp("apply/armor", 10);
        set_temp("apply/attack", 10);
        setup();
        carry_object("/open/ping/obj/Ns_boots.c")->wear();
        carry_object("/open/ping/obj/Ns_hat.c")->wear();
         carry_object("/open/ping/obj/Ns_blade.c")->wield();
        carry_object("/open/ping/obj/Ns_armor.c")->wear();
//        carry_object("/open/ping/obj/Ns_suit.c")->wear();
        add_money("silver", 10);
}
