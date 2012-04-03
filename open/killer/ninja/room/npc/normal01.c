//ikki.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��У�����  �  ��  ��  ������һ��������͸$n",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    150,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N����ȼ���������𣬶�$nʹ���ˡ���  �  ��  ��  ��������",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    300,
                "force"      :    200,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("����", ({"tanaka"}));
        set("age",26);
        set("long","�����Ǽ���ɵķ����¼����ߣ�ר˾ˮ�ϵİ�ɱ�ж���\n"
        "������ߵ�������һ����ʽ���Ա��⣬��������!!\n");
        set("title",HIC"��쳷���"NOR+ HIG"�¼�����"NOR);
        set("gender","����");
        set("class","�������");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","aggressive");
        set("max_gin",2500);
        set("max_kee",10000);
        set("max_sen",2500);
        set("gin",2500);
        set("kee",10000);
        set("sen",2500);
        set("combat_exp",3500000);
        set("max_force",20000);
        set("force",20000);
        set("max_atman",9000);
        set("max_mana",9000);
        set("atman",9000);
        set("mana",9000);
        set("force_factor",35);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",400);
        set_temp("apply/damage",200);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIR "\n ���е���ӰͻȻ��ʧ����ʹ������������ ����  ɱ ��\n",target);
                message_vision(
HIW "\n��Ӱ���ٵ���$N����߷ɹ�����$N�о��������ܵ�������!��\n"NOR,target);
                target->receive_wound("kee",random(700));
                COMBAT_D->report_status(target);

}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if (random (100) < 10)
   {
     message_vision(HIY"��ʬ�������һ���\n"NOR,this_object());
     message_vision("��˳�ְ���������\n",this_object());
     head=new("/open/killer/obj/herb.c");
     head->move(this_object());
   }
   ::die();
}


