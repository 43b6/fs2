#include <ansi.h>

inherit NPC;
int accept_kill(object who);
void create()
{
        set_name( "皇太后" , ({ "king-mother" }) );
        set("title","母仪天下");
        set("gender", "女性" );
        set("age",70);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "她就是当今皇上的娘，也就是皇太后，你瞧见她那在不经意中流\n"
            "露的威严，使你不敢太靠近她。\n");
        set("combat_exp",7000000);
        set("attitude", "heroism");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
            (: exert_function, "recover" :)
            }) );
        set_skill("dodge",200);
        set_skill("dagger",200);
        set_skill("fly-circle",200);
        set_skill("parry",200);
        set_skill("force",200);
        set_skill("fireforce",200);
        set_skill("bss-parry",200);
        set_skill("bss-steps",200);
        map_skill("force","fireforce");
        map_skill("dagger","fly-circle");
        map_skill("dodge","bss-steps");
        map_skill("parry","bss-parry");
         set("force",5000);
         set("max_force",5000);
         set("force_factor",10);
        set("max_gin",3000);
        set("gin",3000);
        set("kee",10000);
        set("max_sen",3000);
        set("sen",3000);
        set("chat_chance", 15);
        set("chat_msg", ({
              "太后说: 最近天气真热阿。\n",
              "太后说: 我最讨厌动刀动枪了。\n",
              "太后说: 皇儿真是个孝顺的孩子。\n",
        }) );
        setup();
        carry_object("/open/capital/room/king/obj/dagger1")->wield();
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
                return notify_fail("你想攻击谁？\n");
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
         tell_room(environment(ob),HIW"\n突然！冲出两位御前护卫！\n\n"NOR);
      for(i=0;i<2;i++)
     {
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king-mother");
        guard->command("follow king-mother");
        guard->kill_ob(who);
        }
        }
     tell_object(users(),HIR "御前护卫大叫：有刺客！快保护太后！！\n" NOR);
        return 1;
}
