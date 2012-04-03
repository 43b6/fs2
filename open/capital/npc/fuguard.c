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
        set("combat_exp",4500000);
        set("force",50000);
        set("max_force",750000);
        set("max_kee",400000);
        set("kee",400000);
        set("force_factor",80);

        set_skill("blade",200);
        set_skill("parry",200);
        set_skill("force",200);
        set_skill("dodge",200);
        set_skill("godblade",200);
        set_skill("bss-steps",200);
        set_skill("fireforce",200);
        set_skill("bss-parry",200);
        map_skill("blade","godblade");
        map_skill("parry","bss-parry");
        map_skill("dodge","bss-steps");
        map_skill("force","fireforce");

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
        }

        return 1;
}
