// ��������  by weiwei and smooth
#include <combat.h>
inherit SKILL;

void ru10(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);

mapping *action = ({
([ "action" : "$N������ü,����һ��,һ��[1;33m���[0m�������и���,����һ��[5;1;33m �������֡�[0m��",
                "dodge"      :   -30,
                "parry"      :   -20,
                "damage"     :    50,
                "force"      :    50,
                "damage_type":   "����",
           ]),
([ "action" : "$N��Ŀ[1m��ü[0m,˫�ƺ�ʲ,ٿȻ�������,һ�� [5;1;33m ���𶥷�ơ�[0m,$n������$n������ʮ����Ѩ��",
                "dodge"      :    -30,
                "parry"      :    -20,
                "damage"     :     60,
                "force"      :     60,
                "damage_type":   "����",
           ]),
([ "action" : "$N���һ��,���嵤��,һ��[5;1;33m ����ɽ�ӡ�[0m˳�ƶ���,ֻ����ӰƮƮ,�����п�ɽ��ʯ֮�ơ�",
                "dodge"      :   -30,
                "parry"      :   -20,
                "damage"     :    70,
                "force"      :    70,
                "damage_type":   "����",
             ]),
([ "action" : "$N��������,��������,��Ե΢΢����,[5;1;33m ���������ޡ�[0m������������ʹ$n���޿ɵ�,���޿ɱܡ�",
                "dodge"      :   -50,
                "parry"      :   -30,
                "damage"     :    80,
                "force"      :    80,
                "damage_type":   "����",
           ]),
([ "action" : "$N����һ��,����š��,ͻ����$n�Ҽ�[1m���羮��[0mѨ����,ֻ��$nһ��[1;32m���ӷ���[0m,�߸�Ծ��,$N�����⶯,��Ӱ˳������,һ��[5;1;33m ��ӭ�����졯[0m ,����$n��ȥ��",
                "dodge"      :   -50,
                "parry"      :   -20,
                "damage"     :    90,
                "force"      :    90,
                "damage_type":   "����",
           ]),
([ "action" : "$N�����Ƽ�,�㲻�ŵ�,��Ե������[1m���Χ��[0m,��ʱһ��ʧ���Ѿõ�[5;1;33m[�������][0m ,�����з���,[1;31m����[0m�����$nֱ���ȥ��",
                "dodge"      :   -60,
                "parry"      :   -20,
                "damage"     :    100,
                "force"      :    100,
                "damage_type":   "����",
           ]),
([ "action" : "$N˫ϥ�̺�,���Ƴ���,����ȽȽ���ϸ���[5;1;33m ���������[0mЮ�ŷ�ɰ��ʯ,�������֮������ӭ��$n��",
                "dodge"      :    -50,
                "parry"      :    -20,
                "damage"     :    110,
                "force"      :    110,
                "damage_type":   "����",
           ]),
([ "action" : "$N[1m����[1;36m���[0m,[1m����[31m����[0m,[1m��ɫ[1;36m����[0m[1;31m����[0m,��Ȼ����[1m�����ؼ�֮[5;1;33m ������ڡ�[0m ,ɷʱ����ر�ɫ,��ӰƮȻ,ֻ��$n���¶���ĺ���,[1m��׹[31m����[0m,[1m���[36m����[0m��",
                "dodge"      :    -50,
                "parry"      :    -20,
                "damage"     :    120,
                "force"      :    120,
                "damage_type":   "����",
           ]),
([ "action" : "$N[1m����ֹˮ,��Ҷ΢Ц[0m������һ��[5;1;33m �� �� �� �� �� ��[0m,ֻ��$N[1;33m���۶�,����֮������[0m����
�ڴ�ʱ,$n��������[1m������..�������֡�[0m,��ʱ$N˫�۾��Ⱪ��,�ȵ�:[1;32m����ʽ�뷢,������ء�[0m,�����Ӱ����,���������м��������",
                "dodge"      :    -50,
                "parry"      :    -20,
                "damage"     :    130,
                "force"      :    130,
                "damage_type":   "����",
                "post_action": (: conti :),
           ]),
  });

void conti(object me, object victim, object weapon, int damage)
{
        int i;
        int level=(int)(me->query_skill("rulai",1)/10);
        if (level > 6)
        {
  if( me->query_temp("rulai") == 0 && me->query("class")=="bonze" )
          {
              me->set_temp("rulai",1);
              message_vision(sprintf("\n[35;1m$Nһ��ָ�죬һ��ָ�أ����һ��[5;37m �� �����µأ�Ψ�Ҷ��� ��[0m\n"),me);
              for(i=1;i<=10;i++)
        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
              me->delete_temp("rulai");
             me->start_busy(1);
          }
        } 
}
mapping query_action(object me,object weapon)
{
int skill_level, limit;
        skill_level = (int)(me->query_skill("rulai", 1));
        limit= (int)(skill_level/10);
        if (limit < 4 )
                return action[random(4)];
        if (limit < 7 )
                return action[random(limit)];
        else
                    return action[random(4)+5];
}

int valid_enable(string usage) 
{
       return (usage=="unarmed")||(usage=="parry");
}
int valid_learn(object me)
{
     return 1;
}
int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("���������ƻ���Ҫ���ְ�....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("��ľ��������޷���ϰ��\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
        if( me->query("max_force") < 3000 )
          return notify_fail("�������������,ǿ����ϰ�����߻���ħ��\n");
         if( me->query_skill("literate",1) < me->query_skill("rulai",1) )
          return notify_fail("���֪ʶ����������������Ƶĸ��\n");
        me->receive_damage("gin", 5);
        me->add("force", -1);
        return 1;
}


