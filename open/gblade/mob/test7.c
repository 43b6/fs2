// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("铁铠战士",({"soldier"}));
        set("long","高大挺拔的铁凯战士 ");

        set("age",25);

        set("str", 40);
        set("no_exp",1);
        set("cor", 30);
        set("cps", 25);
        set("max_force",500);
        set("force",500);
        set("force_factor",3);

        set("combat_exp", 20000);
/*
        set("chat_chance", 15);
*/
        set_skill("parry", 30);
        set_skill("dodge", 20);
        set_skill("unarmed",50);
        set_skill("snow-martial",35);
        set_skill("black-steps",25);
        map_skill("unarmed","snow-martial");
        map_skill("dodge","black-steps");

        setup();

}



void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIW"一个雄威懔懔的战士从妖壶中走出 .\n"
        + name() + "说道 : 找死 !\n"NOR,
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
