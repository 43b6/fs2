inherit NPC;
void create()
{
        set_name("����һ��",({"ookami ichilon"}));
        set("gender","����");
        set("title","�۹������Ż���ӳ�");
        set("class","scholar");
        set("combat_exp", 2000000);
        set("attitude","peaceful");
        set("age",18);
        set("chat_chance", 90);
        set("chat_msg", ({
        "����һ��˵��: ��ӭ��ӭ��\n",
        "����һ��˵��: ���������µĴ�����,��Һúòιۡ�\n",
        }));
        set("force",10000);
        set("max_force",10000);
        set("kee",4000);
        set("max_kee",4000);
        set_skill("force",100);
        set_skill("unarmed",100);
        set_skill("sunforce",150);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",125);
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("move",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor",15);
        set("marks/six_sp",3);
        setup();
        add_money("gold",100);
}
