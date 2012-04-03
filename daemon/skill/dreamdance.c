// dreamdance.c//cgy

#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

mapping *action = ({
        ([
                "action"     :               "$Nʹ��һ��[1;32m�����ి�衱[0m��˫�ȳ���β״����������̬����$n���ɶ���",
                "dodge"      :                10,
                "parry"      :               -20,
                "damage"     :                30,
                "force"      :                20,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N����ٿȻ��䣬ʹ��һ��[1;32m������Ʈ翡�[0m������$n���֮�ʣ�˫����$n��ȥ",
                "dodge"      :               -5,
                "parry"      :               -30,
                "damage"     :                20,
                "force"      :                40,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N��������Ʈ����������Ҷ�ɻ��㣬����$n��ͷ���䣬����ҹ�������е�[1;32m����Ӣ�ͷס�[0m",
                "dodge"      :                10,
                "parry"      :               -35,
                "damage"     :                60,
                "force"      :                80,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N˫����ǰ�ų������廯Ϊһ�������ĺ�ʣ�ʹ��һ��[1;32m���ɻ����¡�[0m����$n",
                "dodge"      :                15,
                "parry"      :               -25,
                "damage"     :                100,
                "force"      :                100,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N˫�������������ƽ�٣�ʹ��һ��[1;32m���׺�����[0m������$n",
                "dodge"      :               -15,
                "parry"      :                10,
                "damage"     :                120,
                "force"      :                150,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N��ָ���ţ���̬��������Ȼ����$nȫ���Ѩ���㣬��$n�����мܣ�����ҹ�������е�[1;32m����Ůɢ����[0m",
                "dodge"      :               -25,
                "parry"      :               -15,
                "damage"     :                140,
                "force"      :                180,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N���忪ʼ��ת���ɻ�������������������˰���շ������������γ�һ��ǿ������������$n������ҹ���������վ�ѧ[1;32m��������족[0m",
                "dodge"      :                40,
                "parry"      :                20,
                "damage"     :                170,
                "force"      :                250,
                "damage_type":               "����"
        ]),
        ([
                 "action"     :               ""HIR"������"HIC"�����ҹ������ ��������Ĳ���, ����֮���������������"HIR"������
��������"HIC"��$n�������� ����$N�û��ɳ��ȵ�"HIR"��ȸ"HIC" ���������$n"NOR"",
                "dodge"      :                45,
                "parry"      :                25,
                "damage"     :                200,
                "force"      :                200,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               ""HIW"������"HIG"$N���ܵ����Ѿ��¼���ū������ ����$N��ɱ��"HIW"������
����������"HIG" ������ת�����γ�һ��Թ��֮�� ��ɱһ��.."NOR"",
                "dodge"      :                45,
                "parry"      :                25,
                "damage"     :                220,
                "force"      :                230,
                "damage_type":               "����"
        ]),
        ([
               "action"     :               ""HIM"����������"HIY"���ԩ��ͻ������ӿ��$N����ͷ һ���ʹ����$N"HIM"����������
����������   "HIY"��Ǳ�ܷ���ҹ�η����ļ���"HIC" �����ѩ"HIY"��Ϯ$n...."NOR"",
                "dodge"      :                50,
                "parry"      :               35,
                "damage"     :                240,
                "force"      :                250,
                "damage_type":               "����"
        ]),


});

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
                           return   notify_fail("ѧҹ�����������֡�\n");
        if(me->query("max_force")<50)
                return notify_fail(" ��ͽ������������Ҫ 50 ร�������!!\n");
        return 1;
}


int valid_enable(string usage)
{
        return ( usage=="unarmed" || usage=="parry" );
}


mapping query_action(object me, object weapon)
{
        int skill_level, limit,k,i,kee;
                object victim,*enemy;
        victim = offensive_target(me);
        if(!victim) return action[random(10)];
        skill_level = (int)(me->query_skill("dreamdance", 1));
        limit= skill_level;
                k = random(100);
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //���Լ�force 200
if((me->query("class")=="dancer")&&(weapon->query("id")=="maple ribbon"))
  {
if(me->query("id")==("cgy"))
{
message_vision(HIY"\n  $N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"��$N������Ӧ,ɲ�Ǽ�$N������ҹ������İ���!!\n"NOR,me,victim);
message_vision(HIY"ʹ���˾�������"HIR" �� "HIW" �� "HIG" ɨ "HIC" �� "HIM" Ҷ "HIY"$N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"����$n����ϯ����ƶ�ȥ!!\n\n"NOR,me,victim);
message_vision(HIR"        ��         "HIY"        ��         "HIC"        ��         "HIG"        ��        \n"NOR,me,victim);
message_vision(HIR"      ������       "HIY"      ������       "HIC"      ������       "HIG"      ������      \n"NOR,me,victim);
message_vision(HIR"  ��  ������  ��   "HIY"  ��  ������  ��   "HIC"  ��  ������  ��   "HIG"  ��  ������  ��  \n"NOR,me,victim);
message_vision(HIR"������ ���� ������ "HIY"������ ���� ������ "HIC"������ ���� ������ "HIG"������ ���� ������\n"NOR,me,victim);
message_vision(HIR" ����������������  "HIY" ����������������  "HIC" ����������������  "HIG" ���������������� \n"NOR,me,victim);
message_vision(HIR"   ������������    "HIY"   ������������    "HIC"   ������������    "HIG"   ������������   \n"NOR,me,victim);
message_vision(HIR"      ������       "HIY"      ������       "HIC"      ������       "HIG"      ������      \n\n"NOR,me,victim);
 for(i=0;i<10;i++)
 {
message_vision(HIR"$n������ǰ�������������޾��ķ�Ҷ����,˲ʱ$n�����ķ�Ҷ��ϯ��,ȫ��ʹ�಻����\n"NOR,me,victim);
victim->receive_damage("kee",10000,me);
victim->apply_condition("burn",random(10));
COMBAT_D->report_status(victim);
  }
message_vision(HIY"$N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"�ظ���ԭ״������$N���ϡ�\n"NOR,me);
me->add("force",-200);
}
else if((k>80)&&(skill_level>80))
{
message_vision(HIY"\n  $N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"��$N������Ӧ,ɲ�Ǽ�$N������ҹ������İ���!!\n"NOR,me,victim);
message_vision(HIY"ʹ���˾�������"HIR" �� "HIW" �� "HIG" ɨ "HIC" �� "HIM" Ҷ "HIY"$N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"����$n����ϯ����ƶ�ȥ!!\n\n"NOR,me,victim);
message_vision(RED"        ��         "YEL"        ��         "RED"        ��         "YEL"        ��        \n"NOR,me,victim);
message_vision(RED"      ������       "YEL"      ������       "RED"      ������       "YEL"      ������      \n"NOR,me,victim);
message_vision(RED"  ��  ������  ��   "YEL"  ��  ������  ��   "RED"  ��  ������  ��   "YEL"  ��  ������  ��  \n"NOR,me,victim);
message_vision(RED"������ ���� ������ "YEL"������ ���� ������ "RED"������ ���� ������ "YEL"������ ���� ������\n"NOR,me,victim);
message_vision(RED" ����������������  "YEL" ����������������  "RED" ����������������  "YEL" ���������������� \n"NOR,me,victim);
message_vision(RED"   ������������    "YEL"   ������������    "RED"   ������������    "YEL"   ������������   \n"NOR,me,victim);
message_vision(RED"      ������       "YEL"      ������       "RED"      ������       "YEL"      ������      \n\n"NOR,me,victim);

 for(i=0;i<5;i++)
 {
message_vision(HIR"$n������ǰ�������������޾��ķ�Ҷ����,˲ʱ$n�����ķ�Ҷ��ϯ��,ȫ��ʹ�಻����\n"NOR,me,victim);
victim->receive_damage("kee", 100,me);
victim->apply_condition("burn",random(10));
COMBAT_D->report_status(victim);
  }
message_vision(HIY"$N���ϵ�"HIW "��"HIG"֮"HIM"��"HIY"�ظ���ԭ״������$N���ϡ�\n"NOR,me);
me->add("force",-200);
}
}
}
 if((me->query("get_dan_sp",1))&&(me->query("family/family_name")=="ҹ��С��"))
 {      if (limit < 28 )
                return action[random(2)];
        if (limit < 56 )
                return action[random(4)];
        if (limit < 84)
                return action[random(4)+2];
         if (limit < 90)
           return action[random(7)+1];
        else if(limit<95)
           return action[random(7)+2];
        else
          return action[random(7)+3];
        }

else
 {     if (limit < 28 )
                return action[random(2)];
        if (limit < 56 )
                return action[random(4)];
        if (limit < 84)
                return action[random(4)+2];
        else
                return action[random(4)+3];
   }



}
int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query("force") < 5 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

/*
string perform_action_file(string action)
{
        return CLASS_D("dancer")+"/dreamdance/"+action;
}
*/
