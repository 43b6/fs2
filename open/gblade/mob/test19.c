// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("�˻Ľ���",({"wide sworder","sworder"}));
        set("long","
Ũü�����������ü�������һ�ɰ���������ʱ��������տ�Ľ���
��ֻ�����߽����������˽�������ţ�������Ⱦ���ߣ��������գ���Ϊԩ
�ꡣ\n");
        set("age",300);
        set("str", 30);
        set("cor", 30);
        set("cps", 25);
        set("max_kee",1000);
        set("max_gin",500);
        set("max_sen",300);
        set("no_exp",1);
        set("max_force",1500);
        set("force",1500);
        set("force_factor",8);
        set("combat_exp", 400000);

        set("chat_chance_combat", 10);
        set("chat_msg_combat",({
                (: this_object(),"special_attack" :)
            }));
        set_skill("parry", 100);
         set_skill("dodge", 60);
        set_skill("sword",80);
        set_temp("apply/sword",70);
        set_temp("apply/dodge",50);
        set("attitude","peaceful");
        setup();
        carry_object("/open/gblade/mob/weapon18.c")->wield();

}


void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIB"һ����ɫ��ԩ���������б�й����\n"
        + name() + "��Ц��˵�������޵У������κΣ�\n"NOR,
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
        if(this_object()->query("force")>150)
        enemy=this_object()->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
        message_vision(sprintf(HIB"
�˻Ľ����˽���, ���ν�����$N���ϻ���һ��Ѫ���ܵ��˿�
\n"NOR),target);
        target->add("kee",-100);
        this_object()->add("force",-100);
        COMBAT_D->report_status(target);
  }
