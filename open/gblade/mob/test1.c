//test1

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("С��",({"dog"}));
        set("long","һֻС�� , ��������Ƿ��� !");
        set("race","Ұ��");

        set("max_gin", 50);
        set("max_kee", 50);
        set("max_sen", 50);

        set("age", 5);

        set("str",20);
        set("cor", 30);
        set("cps", 25);
        set("no_exp",1);

        set("limbs",({"ͷ��","ǰ��","β��","����"}));
        set("verbs",({"bite","claw"}));
        set("combat_exp", 1);
/*
        set("chat_chance", 15);
*/
        setup();

}



void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIY"һֻС���������д��˳��� .\n"
        + name() + "�����Ľ�������!\n"NOR,
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
