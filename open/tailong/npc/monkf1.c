inherit NPC;
void create()
{
        set_name("���ϼ���ɮ",({"monk fighter","monk","fighter"}));

        set("title","������ɮ��");
        set("gender","����");
        set("combat_exp", 1000000);
        set("attitude","friendly");
        set("age",43);
        set("force",4000);
        set("max_force",4000);
        set_skill("force",100);
        set_skill("unarmed",100);
        set_skill("sunforce",90);
        set_skill("linpo-steps",90);
        set_skill("six-fingers",100);
        set_skill("dodge",90);
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
