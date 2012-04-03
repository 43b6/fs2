// trainee.c

inherit NPC;

void create()
{
        set_name("���˹�С����", ({ "bandit" }) );
        set("gender", "����" );
        set("long", "���˹Ⱦ�Ӣ���ӵĆ�����");
        set("combat_exp",10000);
        set("attitude","aggressive");
        set("age",20);
        set("force",100);
        set("max_gin",100);
        set("max_kee",220);
        set("max_force",100);
        set("force_factor",5);
        set("str",20);
        set("cor", 20);
        set("per", 20);
        set("int", 20);
        set("cps", 20);
        set("con", 20);
        set("spi", 20);
        set("kar", 20);
        set_skill("badstrike", 20);
        set_skill("badforce", 10);
        set_skill("ghost-steps",20);
        set_skill("unarmed",20);
        set_skill("dodge",30);
        set_skill("parry",30);
        set_skill("move",20);
        set_skill("force",30);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
        carry_object("/open/gsword/obj/ff_pill");
        add_money("gold", 2);
}
