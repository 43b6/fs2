// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("���ڤ��",({"dance animal","animal"}));
        set("long","
�����置�����ޣ����ľ��ǻ۶�ѧ���¹��������Ҳ�ʱ���І����дʣ���
���㵸��ʩչ����䡣\n");

        set("age",100);

        set("str", 30);

        set("cor", 30);
        set("no_exp",1);
        set("cps", 25);

        set("max_kee",2500);
        set("max_mana",1000);
        set("mana",1000);


        set("combat_exp", 300000);

        set("chat_chance_combat", 20);
        set("chat_msg_combat",({
        (: this_object(),"special_attack" :)
            }));

        set_temp("apply/staff",40);
        set_temp("apply/dodge",40);
         set_skill("dodge", 50);
        set_skill("staff",50);
        set("attitude","peaceful");
        setup();

        carry_object("/open/gblade/mob/weapon15.c")->wield();

}

void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIM"һֻ�޴�Ĺ����������������û�����\n"
        + name() + "˵�� : ��а�ȣ���ɥ�ӣ�ɱ��\n"NOR,
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
        if(this_object()->query("mana")>50)
        enemy=this_object()->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
        message_vision(sprintf(HIR"���ڤ���૴߶������ , $N�Եķǳ�ʹ��\n"NOR),target);
    target->add("sen",-10);
        target->start_busy(1);
        this_object()->add("mana",-50);
        COMBAT_D->report_statue(target);
  }
