//�������ָ�� by roger && taifar
//���ϸ��ڰ�¥¥���־�ʫskill
#include <combat.h>
#include <ansi.h>
void sp_attack(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":HIC"$Nһʽ"HIM"��������ġ�"HIC"ָ���Թ�ҡҷ����Ӱ֯��һƬ���أ�һ���Ҷ������ָ����������ֱ��$n����"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type":  "����",
        "weapon"     :  "�绪ָ��",
        ]),
(["action":HIC"$N����˫��ʹ����"HIM"������ӣ�ܡ�"HIC"��������ָ��Ӱ�ƻã�ָ�����ܣ� ������ָ����������$n�����ܸ���"NOR,
           "damage":           250,
           "force":            250,
           "damage_type":  "����",
           "weapon"     :  "�绪ָ��",
          ]),
(["action":HIC"$N��Ȼ����ƮƮʹ��һʽ"HIM"���������ӡ�"HIC"����Ӱ�вУ����Ѵ���֮��������$n�Ĺ���Ϯ��$n$l"NOR,
           "damage":      250,
           "force":       250,
           "damage_type":  "����",
           "weapon"     :  "�绪ָ��",
           ]),

(["action":HIC"$N��������ѹ���ͣ�һʽ"HIM"���������ָ��"HIC"�е�"HIM"����ȪǱ����"HIC"��ס��$n�����̣�����ָ������ˮ����"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     : "�绪ָ��",
            ]),
(["action":HIC"$N��ӯ�طɻ�����ʹ��һʽ"HIM"���������ָ��"HIC"�е�"HIM"��ܽ��˫�࡯"HIC"������ָ��һǰһ�����$N��Ϯ��ȥ"NOR,
        "damage":       250,
        "force":        250,
        "damage_type": "����",
        "weapon"     : "�绪ָ��",
        ]),
(["action":HIC"$Nʹ��һʽ"HIM"�����ַ��衯"HIC"��ֻ��$Nʮָ�ֵ���������ָ��������׹����$n"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     : "�绪ָ��",
        ]),

});

int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="stabber")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N����˫�֣�������ƣ�ʮָ������˸ɢ�����ָ��Ϯ��$n\n"NOR,me,victim);
  victim->start_busy(1);
  me->set_temp("conti",1);
   for(i=0;i<5;i++)
    
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                   
  me->delete_temp("conti");
                     }
}

