//��ǰ���� made by rora


inherit NPC;


void create()
{
        set_name("��ǰ����",({"king guard","guard"}));
        set("gender","����");
        set("age",30);
        set("attitude", "heroism");
        set("str",45);
        set("cor",45);
        set("cps",45);
        set("con",45);

        set("long","�������ӵ�����սʿ������ְ�أ���ƈ��Ц��\n");
        set("combat_exp",400000);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        
        set_skill("blade",90);
        set_skill("parry",60);
        set_skill("force",60);
        set_skill("dodge",80);
        set_skill("gold-blade",80);
        set_skill("fly-steps",50);
        set_skill("sixforce",60);
        map_skill("blade","gold-blade");
        map_skill("parry","gold-blade");
        map_skill("dodge","fly-steps");
        map_skill("force","sixforce");

        setup();

        carry_object("/open/gblade/obj/blade2")->wield();
        carry_object("/open/gblade/obj/gold-robe")->wear();
        carry_object("/open/gblade/obj/gold-armor")->wear();
        carry_object("/open/gblade/obj/gold-boots")->wear();
        add_money("gold",5);
}

void init()
{
        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
}

int do_fight(string arg)
{
        object who;
        who = this_player();

        if( !arg || (arg!="guard" && arg!="king") )
                return notify_fail("���빥��˭��\n");
        else {
                kill_ob(who);
                command("follow king");
                accept_kill(who);
        }

        return 1;
}
