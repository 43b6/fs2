//��ɽ����
inherit NPC;
void create()
{
        set_name("��ɽ����",({"guard fighter","fighter"}));
        set("gender","����");
        set("age",30);
        set("class","fighter");
        set("force",2000);
        set("max_force",1000);
        set("force_factor",12);
          set("env/���","YES");
        set("str",25);
        set("long","��ɽ�ɵ����ŵ���,Ϊ��ɽ�ɵĵ�һ�ߵ��ӡ�\n");
        set("combat_exp",300000);
        set_skill("unarmed",70);
        set_skill("dodge",60);
        set_skill("parry",70);
        set_skill("force",60);
        set_skill("haoforce",60);
        set_skill("fire-kee",40);
        set_skill("lungshan",80);
        set_skill("henma-steps",40);
        map_skill("dodge","henma-steps");
        map_skill("parry","fire-kee");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/fight_robe")->wear();
        add_money("gold",15);
}
int accept_fight(object who)
{
return notify_fail("��������˵�� : �Բ��� , ��û�������档\n");
}

void greeting(object ob)
{
        if( ob->query("family/family_name")=="��ɽ��")
        {
        command("smile "+ob->query("id"));
        }
        if( ob->query("class")=="bandit" )
        kill_ob(ob);
}
