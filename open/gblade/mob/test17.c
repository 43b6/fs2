// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("�����޺�",({"lohan"}));
        set("long","һ��ȫ������Ȼ����ɮ , ���˳����� , �������ݵ�
��������ǰ , �ֱۼ��������ʵ , ������� , ����ͻ��
����������֮ǿ !\n");
       
        set("age",1000);

        set("str", 70);
        set("cor", 30);
        set("cps", 25);
        set("max_kee",1000);
        set("max_gin",500);
        set("no_exp",1);
        set("max_sen",300);
        set("max_force",1200);
        set("force",1200);
        set("force_factor",8);
        /*
        set("max_force",3000);
        set("force",3000);
        set("force_factor",20);
        */
        set("combat_exp", 400000);

        set("chat_chance_combat", 12);
        set("chat_msg_combat",({
                (: this_object(),"special_attack" :)
            }));
        /*
        set_skill("parry", 100);
         set_skill("dodge", 100);
        set_skill("sword",120);
        set_temp("apply/sword",120); 
        */
         set_skill("stick",80);
        set_skill("dodge",80);
        set_skill("parry",50);
        set_temp("apply/dodge",50);
        set_temp("apply/stick",55);
        set("attitude","peaceful");
        setup();
        carry_object("/open/gblade/mob/weapon17")->wield();
}


void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIY"�����м����һ����ɫ�Ĺ�â , ˲�仯��һ��������޺� \n"
        + name() + "��ӥ���������� , ��������һ������ \n"NOR,
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
        if(this_object()->query("force")>100 )
        enemy=this_object()->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
        message_vision(sprintf(HIY"�����޺�����һ����ɫ�Ĺ�â , ����$N���ض���\n"NOR),target);
        target->add("kee",-65);
        this_object()->add("force",-100);
        COMBAT_D->report_status(target);
  }
 
