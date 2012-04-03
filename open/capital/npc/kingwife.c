#include <ansi.h>

inherit NPC;

string ask_me(object who);
int accept_kill(object who);

void create()
{
        set_name("����", ({ "King girl", "girl" }) );
        set("title", "����ʺ�");
        set("gender", "Ů��" );
        set("age", 22);
        set("str", 22);
        set("cor", 30);
        set("cps", 21);
        set("int", 25);
        set("per", 29);
        set("long",
                "�������ǵ���ʥ�ϵ�����, ��Ϊ��������֮�ʺ�\n" );
          set("combat_exp",5000000);
        set("attitude", "heroism");
        set("chat_chance", 15);
        set("chat_msg_combat", ({
                "����˵�����󵨿�ͽ, �������ʳ���Ұ��\n",
                "����˵�������˰�..�д̿�!!\n",
           }) );
        set("force_factor",80);
        set_skill("force",120);
        set_skill("dodge",120);
        set_skill("parry",120);
        set_skill("dagger",120);
        set_skill("fireforce",120);
        set_skill("bss-steps",120);
        set_skill("fly-circle",120);
        set_skill("bss-parry",120);
        map_skill("dodge","bss-steps");
        map_skill("dagger","fly-circle");
        map_skill("force","fireforce");
        map_skill("parry","bss-parry");
        set("force",50000);
        set("max_force",50000);
        set("force_factor",80);
        set("max_gin",3000);
        set("gin",3000);
        set("max_kee",10000);
        set("kee",10000);
        set("max_sen",3000);
        set("sen",3000);

        setup();

        carry_object("/open/capital/room/king/obj/dagger1")->wield();
         carry_object("/open/capital/room/king/obj/km-belt")->wear();
         carry_object("/open/capital/room/king/obj/km-boots")->wear();
         carry_object("/open/capital/room/king/obj/km-cloak")->wear();
         carry_object("/open/capital/room/king/obj/km-cloth")->wear();
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
        guard->command("defend girl");
        guard->command("follow girl");
        guard->kill_ob(who);
        }
        }
     tell_object(users(),HIR "��ǰ������У��д̿ͣ��챣�����£���\n" NOR);
        return 1;
}
