//��ҹ���ε��� by roger && taifar
//���ϸ��ھ�¥¥��������skill
#include <combat.h>
#include <ansi.h>
void sp_attack(object me,object victim,object weapon,int damage);
void sp_attack1(object me,object victim,object weapon,int damage);
void sp_attack2(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":HIC"$N����$wʹ��һʽ"HIY"��ҹŮ��ҡ�"HIC"��������Զ��������ٻӰȦ��������뵣����ҵĵ���˲��ֱ��$n���"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "post_action":          (: sp_attack1:),
        "damage_type":  "����",
        "weapon"     :  "�鵶",
        ]),
(["action":HIC"$N�����תʹ��һʽ"HIY"��Ϧ��޿�ơ�"HIC"�����ź�쵶���߳�������������������絶����Ϧϼͻ����$n��ǰ"NOR,
           "damage":           850,
           "force":            850,
           "damage_type":  "����",
        "post_action":          (: sp_attack1:),
        "damage_type":  "����",
           "weapon"     :  "�鵶",
          ]),
(["action":HIC"$Nٿ�ػص���һʽ"HIY"��������塯"HIC"���Ʒ�������һ�����ʱ�����죬�����γ������Ļ��߸��ӹ���ֱ׹$n����"NOR,
           "damage":      850,
           "force":       850,
           "damage_type":  "����",

        "post_action":          (: sp_attack:),
        "post_action":          (: sp_attack1:),
           "weapon"     :  "�鵶",
           ]),

(["action":HIC"$N����һʽ"HIY"�����㽶Ҷ��"HIC"��������ת����Ӱ��ľ���һ��΢���Ƚ�$n�����ѿ�������ɨ$n����֫"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
            ]),
(["action":HIC"$Nѹ��ת����ͻ��$n��˫ϥʹ��"HIY"����ҹ���ε�����"HIC"�е�"HIY"��˯¶���ġ�"HIC"����գ�ۼ�ص�����ƽɨ����Ϯ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "damage_type": "����",
        "post_action":          (: sp_attack:),
        "weapon"     :  "�鵶",
        ]),
(["action":HIC"$N���㻮��"HIY"����ҹ���ε�����"HIC"��ʹ����һʽ���������¡���$w�ڿ����������Ի���쪳����£����ݵ���ֱ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
        ]),
(["action":HIC"$N�������ޣ�����"HIY"����ҹ���ε�����"HIC"���⣬ʹ����һʽ������������$w��$N���л�����������ֱ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (:sp_attack2:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
        ]),

});

int valid_enable(string usage)
{
        return (usage=="blade")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N���һЦ���鵶�����������ǹ����룬����һɢ��ϸϸ�������$n��ȥ���������� \n"NOR,me,victim);
  victim->start_busy(2);
  me->set_temp("conti",1);
   for(i=0;i<5;i++)
    
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                   
  me->delete_temp("conti");
                     }
}
void sp_attack1(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N���һЦ���鵶�����������ǹ����룬����һɢ��ϸϸ�������$n��ȥ���������� \n"NOR,me,victim);
  me->set_temp("conti",1);
   for(i=0;i<2;i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

  me->delete_temp("conti");
                     }
}
void sp_attack2(object me,object victim, object weapon,int damage)
{
 message_vision(sprintf(HIC"$N������ת��ת�ۼ�����$n���$n������æת��ص���ֻ��$N�Ƶ���һ�ಢʹ���䱾�������������ǰ��һ�� \n"NOR),me,victim);
 victim->start_busy(2);
 message_vision(sprintf(HIC"$n���к����һ�£�˲��$N�ƺ�������ϯ����� \n"NOR),me,victim);
 victim->apply_condition("tsunami",random(4)+2);
 COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
 }

