inherit NPC;
void create()
{
        set_name("������ɮ",({"monk fighter","monk","fighter"}));
        set("title","������ɮ��");
        set("gender","����");
        set("combat_exp", 600000);
        set("attitude","friendly");
        set("age",35);
        set("force",3200);
        set("max_force",3200);
        set_skill("force",80);
        set_skill("unarmed",80);
        set_skill("sunforce",80);
        set_skill("linpo-steps",80);
        set_skill("six-fingers",80);
        set_skill("dodge",80);
        set_skill("parry",80);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor",10);
        setup();
        add_money("gold",5);
}
