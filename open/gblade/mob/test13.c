// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("����Ѻ��",({"ghost"}));
        set("long","�������� , �� , ڤ����֮Ѻ��  \n");
       
        set("age",300);

        set("str", 50);
        set("cor", 30);
        set("cps", 25);
        set("max_kee",1000);
        set("max_gin",500);
        set("max_sen",300);
        set("max_mana",600);
        set("mana",600);
        set("max_force",2000);
        set("no_exp",1);
        set("force",2000);
        set("force_factor",20);
        set("combat_exp", 200000);

        set("chat_chance_combat", 50);
        set("chat_msg_combat",({
            (:this_object(),"special_attack":)
            }));
        /*
        set_skill("parry", 100);
         set_skill("dodge", 100);
        set_skill("sword",120);
        set_temp("apply/sword",120); 
        */
        set_temp("apply/attack",80);
        set_temp("apply/dodge",100);
        set_skill("unarmed",90);
        set_skill("dodge",60);
        set_skill("parry",50);
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
        HIG"һ���̹��������� , һ����Ŀ������Ѻ�����˳���\n"
        + name() + "˵�� : ץ�㵽ڤ���������\n"NOR,
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
 void special_attack(object ob)
 {
    object *enemy,target;
    int i;
    if(ob->query("mana")>50)
    enemy=ob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    message("vision",
    HIR "$Nʹ������� , �е�$N������ \n"NOR,target);
    target->add("sen",-10);
    ob->add("mana",-50);
  }
 */
