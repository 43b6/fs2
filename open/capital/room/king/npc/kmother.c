#include <ansi.h>

inherit NPC;
int accept_kill(object who);
void create()
{
        set_name( "��̫��" , ({ "king-mother" }) );
        set("title","ĸ������");
        set("gender", "Ů��" );
        set("age",70);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "�����ǵ�����ϵ��Ҳ���ǻ�̫�����Ƽ������ڲ���������\n"
            "¶�����ϣ�ʹ�㲻��̫��������\n");
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
              "̫��˵: ����������Ȱ���\n",
              "̫��˵: �������ᶯ����ǹ�ˡ�\n",
              "̫��˵: �ʶ����Ǹ�Т˳�ĺ��ӡ�\n",
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
      for(i=0;i<2;i++)
     {
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king-mother");
        guard->command("follow king-mother");
        guard->kill_ob(who);
        }
        }
     tell_object(users(),HIR "��ǰ������У��д̿ͣ��챣��̫�󣡣�\n" NOR);
        return 1;
}
