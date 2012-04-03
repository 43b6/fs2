// yu-needle
// �������--- ���P(unarmed), ���P(stabber)
// by adam..

#include <ansi.h>
#include <combat.h>
inherit SKILL;

void bleed(object me, object victim, object weapon, int damage);

string *parry_msg=
    ({
   "$n����һ����ָ��$wƽƽ����$N�������ϣ�һ�С�"HIM" ��ȸβ"NOR" ����$N������ҷ�˿�ȥ��",
   "$n�����忿��$N��һ�С�"HIC" մ��ʮ�˵� "NOR"������$N���ԭ�أ�ʹ������ʽ!",
   "$n����$w�����趯��һ�С�"HIW" ���ٳ���"NOR" ��, �Ƶ�$N���ò���ס����!",
   "$n�����е�$w���Բ��һ�С�"HIB" �ƻ�Բ�� "NOR" ������$N�Ĺ��ƾ�������������",
   "$n�Ծ��ƶ�������$wƽ����ǰ��һ�С�"CYN" ����Ʊ�"NOR" ����������$N�Ĺ���!",
    });

//unarmed, stabber_action

mapping *action = ({
([ "action":"$Nһ�С�"HIW" ��������"NOR" ������������������ǰ�磬˫��΢�֣���ָ����$n����ǰ��"BLINK+HIC" �βѨ"NOR" ����������ȥ!",
        "dodge": -10,
        "parry": -20,
        "damage": 30,
        "force":  50,
        "damage_type":  "����",
]),

([ "action":"$N����һ�ţ�һʽ��"HIR" ������"NOR" ��������һ��������������$n��ͷ����"BLINK+HIY" �ٻ�Ѩ"NOR" ������ȥ!",
        "dodge": -20,
        "parry": -10,
        "damage": 40,
        "force": 130,
        "damage_type": "����",
]),

([ "action":"$N˫��һ��һ��һѹ����$n�����ֱ���"BLINK+MAG" �Ϲ�Ѩ"NOR" ����ס�������תһȦ�������ؽ�$n���˿�ȥ!",
        "dodge": -30,
        "parry": 20,
        "damage": 50,
        "force": 180,
        "damage_type": "ˤ��",
]),
([ "action" : "$N��ϥ΢�ף�ٿ������һת���Ƶ���$n�ı�����ָ��$n����"BLINK+HIW" ����Ѩ"NOR"������ȥ!",
        "dodge": -30,
        "parry": -10,
        "damage": 90,
        "force": 240,
        "damage_type": "����",
]),
([ "action" : "$N����ͻȻ����������������$n��������Ȼ$N������ͣ������һ����ת��Ϊ���������$n������"BLINK+HIR" ��ѪѨ"NOR" ��������ȥ!",
        "dodge": -40,
        "parry": 10,
        "damage": 110,
        "force": 300,
        "damage_type": "����",
]),

([ "action":"$N��Хһ�������������$n��������ȥ��˫��һ��һ������$n����ߡ�"BLINK+HIY" ̫��Ѩ"NOR" �������ԡ�"BLINK+HIG" �縮Ѩ"NOR" ������!",
        "dodge": 20,
        "parry": -10,
        "damage": 100,
        "force": 280,
        "damage_type": "����",
]),
([ "action" : "$Nһ�С�"HIM" ת������"NOR" ����������������ҡ�ڣ�˫�����·��������ٵ�����$n���Ĵ򣬻����ã���$n��ȫ�����ҪѨ�к�!",
        "dodge": 20,
        "parry": 10,
        "damage": 70,
        "force": 220,
        "damage_type": "����",
]),

//weapon_action

([ "action":"$N����һ�ӣ�����һ����һ�С�"HIG" �ɻ���Ҷ"NOR"  ����������$w����$n��˫�ۡ�"BLINK+HIG" ����Ѩ"NOR" ��!",
        "dodge": -20,
        "parry": -10,
        "damage": 60,
        "force":  140,
        "damage_type":  "����",
]),

([ "action":"$N��ʹ$w, ���ҿ���, ���಻��, ����$n����ǰ��"BLINK+HIM" ����Ѩ"NOR" ��, ����"BLINK+HIR" ����Ѩ"NOR" ��",
        "dodge": -30,
        "parry": -10,
        "damage": 260,
        "force": 30,
        "damage_type": "����",
]),

([ "action":"$N����һ�ף�˫����$w��ƽƽ��ǰֱ�̣�һ�С�"HIC" ���׷���"NOR" �����ƴ�����ӭ��$n�Ľŵס�"BLINK+HIC" ӿȪѨ "NOR"��",
        "dodge": -35,
        "parry": -20,
        "damage": 120,
        "force": 270,
        "damage_type": "����",
]),
([ "action":"$N�����飬һ�С�"HIY" �ɲ����"NOR" ��������һԾ��$w����$n���Ρ�"BLINK+HIW" ����Ѩ"NOR"�����綥��"BLINK+WHT" �罺Ѩ"NOR" ��",
        "dodge": 25,
        "parry": -10,
        "damage": 90,
        "force": 240,
        "damage_type": "����",
]),
([ "action":"$N˫������һ�ţ�һʽ��"HIC" ����չ��"NOR" ��������һ�С�"HIM" ƽɳ����"NOR" ��������$w����$n���ʺ�"BLINK+HIB" ��ͻѨ"NOR" ����ȥ!\n",
        "dodge": -40,
        "parry": -20,
        "damage": 60,
        "force": 230,
        "damage_type": "����",
]),
([ "action":"$N����һת��һʽ��"HIM" ת������"NOR" ����������$w���һ��������������$n���ܣ�ٿ��һ�С�"HIY" ��������"NOR" ������$w����$n���š�"BLINK+WHT" ����Ѩ"NOR" ������"BLINK+HIC" ����Ѩ"NOR" ��",
        "dodge": 20,
        "parry": -20,
        "damage": 50,
        "force": 130,
        "damage_type": "����",
]),
([ "action":"$N���һ����[1;33m ��������[0m �����Ķ�ȫ���ھ�������$w����ߵ��㣬�ֱ�

��$n�ġ�"BLINK+HIR" �ٻ�Ѩ"NOR" ������"BLINK+WHT" ӡ��Ѩ"NOR" ������"BLINK+HIC" ��ͻѨ"NOR" ������"BLINK+HIM" ����Ѩ"NOR" ������"BLINK+HIY" ����Ѩ"NOR" ������
��"BLINK+MAG" �βѨ"NOR" ������"BLINK+HIR" ����Ѩ"NOR" ��������ͻ��!",
        "dodge": -30,
        "parry": -20,
        "damage": 190,
        "force":350,
        "damage_type":"����",
        "post_action": (: bleed :),
]),
});

//��ǿ����

void bleed(object me, object victim, object weapon, int damage)
{
        if(damage > 40)
         {
          victim->apply_condition("bleeding", random((int)damage / 10 +
          (int)me->query_skill("yu-needle",1)/10));
          message_vision(sprintf("[1;31m$N�� �������� ����͸��$n���ϵ�������Ѩ, $n������Ѫ�ߵ�㡣[0m\n"),me,victim);
         }
}

mapping query_action(object me, object weapon)
{

        object wea=me->query_temp("weapon");

        if( wea!=0)
            return action[random(7)+7];
        else
          return action[random(7)];
}
                                        

int valid_enable(string usage)
{
        object me=this_player();
        object wea=me->query_temp("weapon");
         {
          if(wea!=0)
          if(wea->query("skill_type")=="stabber")
           {
//��һ�б�ʾ���� needle
            me->map_skill("stabber","yu-needle");
            me->map_skill("parry","yu-needle");
            me->map_skill("unarmed",0);
            return (usage=="stabber")||(usage=="parry");
           }
//�������±����
          me->map_skill("unarmed","yu-needle");
          me->map_skill("stabber",0);
          me->map_skill("parry",0);
          return (usage=="unarmed");
         }
        return (usage=="unarmed");
}

int practice_skill(object me)
{
        if(!me->query_temp("weapon") || !me->query_temp("secondary_weapon") )
          return notify_fail("���������������Ҫ�ø����!....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("��ľ��������޷���ϰ��\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("����������! ��Ϣһ���ټ�������.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}

//parry_action_randon

int query_parry_msg(string limb)
{
//                return parry_msg[random(sizeof(parry_msg))];
return 1;
}
