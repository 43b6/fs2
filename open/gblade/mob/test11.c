// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("�������",({"liuh tho","tho"}));
        set("long","һֻӵ���������������� , ͷ����һ��� \n");
       
        set("age",500);

        set("str", 60);
        set("cor", 30);
        set("no_exp",1);
        set("cps", 25);
        set("max_kee",3000);
        /*
        set("max_force",3000);
        set("force",3000);
        set("force_factor",20);
        */
        set("combat_exp", 100000);

        set("chat_chance_combat", 50);
        set("chat_msg_combat",({
            (:this_object(),"shan_yun":)
            }));
        /*
        set_skill("parry", 100);
         set_skill("dodge", 100);
        set_skill("sword",120);
        set_temp("apply/sword",120); 
        */
        set_temp("apply/attack",100);
        set_temp("apply/dodge",80);
        set("race","Ұ��");
        set("limbs",({"ͷ��","����","ǰ��","���"}));
        set("verbs",({"bite"}));
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
        HIW"һֻ��Ȼ����Ӻ����߳�\n"
        + name() + "�����޺� , �쳹����\n"NOR,
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
/*
 void shan_yun(object ob)
 {
    object *enemy;
    int i;
    if(ob->query("force")>500)
    message("vision",
    HIY "$Nʹ����ԯ���� , ����¢������˷� , �����г������� , �ֻ����� \n"NOR,this_objects());
    enemy = ob->query_enemy();
    i=sizeof(enemy);
    while(i--){
               enemy[i]->add("kee",-500);
               }
  }
 */
