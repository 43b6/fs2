inherit NPC;
void create()
{
        set_name("�м���ɮ",({"monk fighter","monk","fighter"}));
        set("title","������ɮ��");
        set("gender","����");
        set("combat_exp", 700000);
        set("attitude","friendly");
        set("age",39);
        set("force",3600);
        set("max_force",3600);
        set_skill("force",85);
        set_skill("unarmed",85);
        set_skill("sunforce",85);
        set_skill("linpo-steps",85);
        set_skill("six-fingers",85);
        set_skill("dodge",85);
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
