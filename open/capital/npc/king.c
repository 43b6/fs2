#include <ansi.h>

inherit NPC;
int accept_kill(object who);
void create()
{
        set_name(HIM "����" NOR, ({ "king" }) );
        set("title","�������");
        set("gender", "����" );
        set("age",50);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "һλ�ߴ�Ӣͦ�����ˣ����о�ֹ�����������޷����ܵ����ϡ�\n"
            "���ƺ���Щ����������������Ե��е������ѻ���\n");
        set("combat_exp",10000000);
        set("attitude", "heroism");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
            (: exert_function, "recover" :)
            }) );
        set_skill("dodge",150);
        set_skill("unarmed",150);
        set_skill("kingfist",150);
        set_skill("parry",150);
        set_skill("force",150);
        set_skill("fireforce",150);
        set_skill("bss-parry",150);
        set_skill("bss-steps",150);
        map_skill("force","fireforce");
        map_skill("unarmed","kingfist");
        map_skill("dodge","bss-steps");
        map_skill("parry","bss-parry");
        set("force",50000);
        set("max_force",10000);
        set("force_factor",80);
        set("max_gin",30000);
        set("gin",30000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_sen",30000);
        set("sen",30000);
        set("chat_chance", 15);
        set("chat_msg", ({
              "����˵: ���������ܲ\n",
              "����˵: �󹬼�����ǧ���������裬������æ�ù�����\n",
              "����˵: ���ȥ�����������ˡ�\n",
              (: this_object(),"random_move" :),
        }) );
        setup();
        add_money("gold",25);

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
                accept_kill(who);
        }

        return 1;
}

int accept_kill(object who)
{
        int i;
        object ob, guard;
        ob = this_object();

        if( !present("king guard", environment(ob)) ) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ��ǰ������\n\n"NOR);
     for(i=0;i<5;i++)
     {
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king");
        guard->command("follow king");
        guard->kill_ob(who);
        }
        }
     tell_object(users(),HIR "��ǰ������У��д̿ͣ��챣�����£���\n" NOR);
        return 1;
}

void die() // by ACKY

{
	object winner = query_temp("last_damage_from");

winner->set("secret_book",1);
	if( winner->query("clan/id") && userp(winner) )
		CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 15 );
	:: die();
}
