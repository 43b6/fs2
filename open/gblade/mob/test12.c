// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("˪���ʹ",({"face ghost","ghost"}));
        set("long","����ڤ��Ĺ�ʹ  \n");
       
        set("age",300);

        set("str", 30);
        set("cor", 30);
        set("cps", 25);
        set("max_kee",1000);
        set("max_gin",500);
        set("no_exp",1);
        set("max_sen",300);
        set("max_mana",1000);
        set("mana",1000);
        /*
        set("max_force",3000);
        set("force",3000);
        set("force_factor",20);
        */
        set("combat_exp", 150000);

        set("chat_chance_combat", 20);
        set("chat_msg_combat",({
                (: this_object(),"special_attack" :)
            }));
        /*
        set_skill("parry", 100);
         set_skill("dodge", 100);
        set_skill("sword",120);
        set_temp("apply/sword",120); 
        */
        set_temp("apply/attack",50);
        set_temp("apply/dodge",50);
        set("attitude","peaceful");
        setup();
        /*
         carry_object("/open/gsword/obj/sword")->wield();
        */
}


void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIB"һ�������������� , �߳�һ������ڤ��Ĺ�ʹ\n"
        + name() + "�ٺ���Ц\n"NOR,
                environment(), this_object() );
        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }
        /*
        set_leader(who);
        */
}

        void special_attack()
 {
    object *enemy,target;
    int i;
        if(this_object()->query("mana")>100)
        enemy=this_object()->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
        message_vision(sprintf(HIB"˪���ʹʹ������� , �е�$N������ \n"NOR),target);
        target->add("sen",-22);
        target->add("gin",-15);
        this_object()->add("mana",-100);
        COMBAT_D->report_status(target);
  }
 
