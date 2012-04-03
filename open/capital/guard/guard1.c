//ring guard by bss
//�޸���casey�Ļƽ����
//������ֻ��ͬ��,king can call 3 ֻ,else can call 1 ֻ
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N��¶�׹� , ����˫�� ,��$n�������˹�ȥ ,�ۿ�$n��Ҫ����ȭ���˵���"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "����",
           ]),
([ "action" :"$NѸ�ٳ嵽$n��ǰ ,����$n��ע���ʱ�򾹳�$n���˹�ȥ,$n��$N�Ĺ�������һ������Ȼ��������"NOR"!!!
",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "����",
            ]),
([ "action" :"$N��ȫ������������β�� ,�������ذ���˹�ȥ,�ӵ��ϱ��������ʯ���粨�ΰ����$n"NOR"��
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  240,
             "damage_type":  "����",
            ]),
([ "action" :"$N��������³�һ�ɾ��˵ľ���,���ȵ����������ĸ���ʹ��$n���������!!!"NOR"��
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  275,
             "damage_type":  "����",
            ]),
([ "action":"$N��Ȼ���Լ�����������һ����һ�� ,��$n��ȥ
������$N������ʵ����̫���ˣ�����$n�ǳ�������"NOR"��",
               "dodge"       : -100,
               "parry"       : -100,
               "damage"       : 892,
             "damage_type":  "����շ��",
           ]),
       });

void create()
{
     set_name(HIW"ʥ���Գ"NOR ,({"ring guard", "guard"}) );
     set("race", "Ұ��");
     set("clan_kill",1);
     set("no_exp",1);
     set("title", "�ػ���");
     set("age",103972);
     set("long","
�ػ������԰������,��������,�����ĵ�����Ӷ�����ĸ��������Ϊ��,������Ը����
ӡ�ڻ�����ָ֮�����ػ���ָ�������ˡ�
��\n");
     set_temp("apply/attack",200);
     set_temp("apply/damage",200);
     set_temp("apply/move",200);
        set("no_plan",1);
     set("max_kee",10000);
     set("kee",10000);
     set("force",19000);
     set("max_force",19000);
       set("force_factor",30);
     set("gin", 8000);
     set("sen", 8000);
     set("max_gin", 8000);
     set("max_sen", 8000);
     set("combat_exp",4700000);
     set("chat_chance_combat", 32);
     set_skill("dodge",200);
     set_skill("move", 200);
     set_skill("parry",200);
     set_skill("unarmed",200);
 set("limbs", ({ "Գ��", "Գ��", "ǰ֫" , "����" , "Գβ" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);

}
mapping query_action()
{
   return action[random(sizeof(action))];
}

void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        BLINK+HBMAG+HIY"һ��ǿ��ӽ�ָ��� , һֻ�޴�İ�Գ�����߳�\n\n"
        + name() +BLINK+HBMAG+HIY "��е�˵�� : �����Ҿ�Ҫ�����е�������!\n"NOR,
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
        command("defend "+who->query("id"));
        who->set_temp("have_guard",1);
        set_leader(who);
}
void init()
{

      set_heart_beat(1);
}

void heart_beat()
{
        object me=this_object();
        object who = query_leader ();
        if(!who){
        call_out("leave",0);
        return ;
        }
        if(!who->is_fighting()) {
             call_out("leave",0);
             return;
        }
        if(!me->is_fighting()){
             call_out("leave",0);
             return;
        }
           :: heart_beat();
}
void leave()
{
  object who = query_leader ();
  message_vision (HIG"$N˵�������Ѿ���������ս����φ����´μ���\n" +
                  "һ����紵����$N��������֮�����ˡ�\n" NOR, this_object ());
  if (who)
    who->set_temp("have_guard",0);
  destruct(this_object());
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king"))
    who->set_temp("have_guard",0);
  message_vision (HIB"$N�ҽ�һ��������ʧ����Ӱ���١�\n", this_object ());
  destruct (this_object ());
}

 void die()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king")){
    who->set_temp("have_guard",0);
      }
  message_vision (HIB"$N�ҽ�һ��������ʧ����Ӱ���١�\n", this_object ());
  destruct (this_object ());

           ::die();
}

