// five-dagger.c  .........���ִ�����
// ���оͺ�..........:P

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void bleed(object me, object victim, object weapon, int damage);
string *parry_msg=
    ({
   "$n�����忿��$N, һ�С� մ��ʮ�˵� ��, ��$N���ԭ��, ʹ������ʽ!\n",
   "$n�����е�$w���Բ��, һ�С� �ƻ�Բ�� ��, ��$N�Ĺ��ƾ�������������\n",
   "$n�Ծ��ƶ�, ����$wƽ����ǰ, һ�С� ����Ʊ� ��, ������$N�Ĺ���!\n",
    });

//unarmed, dagger_action

mapping *action = ({
([ "action":"$Nʹ���� ������Ѩ�� ��,ָ��΢΢ǰָ,һ��������$n����ȥ!\n",
        "dodge": -10,
        "parry": -20,
        "damage": 250,
        "force":  240,
        "damage_type":  "Ѩ������",
]),

([ "action":"$Nһ�С� �������� ��,˫��һ��,��$nɨ��һ���Ʒ�!\n",
        "dodge": -20,
        "parry": -10,
        "damage": 260,
        "force": 230,
        "damage_type": "����",
]),

([ "action" : "$N�������,ת��һʽ���ɻ���Ҷ��,������ɻ�Ҷ��,��$n���˹�ȥ!\n",
        "dodge": -40,
        "parry": 10,
        "damage": 270,
        "force": 290,
        "damage_type": "����",
]),

([ "action":"$N������������������,����һ�С����ٳ��硯,������ǰһԾ,����$n!\n",
        "dodge": 20,
        "parry": -10,
        "damage": 290,
        "force": 280,
        "damage_type": "����",
]),
([ "action" : "$Nһ�С���Ԩ������,����һʽ������Ǭ����,$n����$N���ݾ�!\n",
        "dodge": -20,
        "parry": 20,
        "damage": 300,
        "force": 280,
        "damage_type": "����",
]),

//weapon_action

([ "action":"$N�ֳ�$w,һ�С����ӭ�ˡ�,����һ�С������ܿ͡�,��$n��˫����������!\n",
        "dodge": -20,
        "parry": -10,
        "damage": 240,
        "force":  60,
        "damage_type":  "����",
]),

([ "action":"$N������$w���˿�,���������ء�����$n�ϵ�,���һ�С�����Ǭ��������$n!\n",
        "dodge": 25,
        "parry": -10,
        "damage": 280,
        "force": 70,
        "damage_type": "����",
]),
([ "action":"$N�趯$wһ�С��������١�����$n���ʺ��ȥ,������������һ�ݡ����ط��������ٵرܿ�!\n",
        "dodge": -40,
        "parry": -20,
        "damage": 240,
        "force": 70,
        "damage_type": "����",
]),
([ "action":"$N������¶ϲɫ,˫�ּ���,һʽ����ũ�ž�����$n���˹�ȥ,ٿ��$N˫��һ��,���һ��������ɢ�͡�!\n",
        "dodge": 20,
        "parry": -20,
        "damage": 260,
        "force": 80,
        "damage_type": "����",
]),
([ "action":"$N��ʽһת,����ľ���졯�������һ����[1;33m������������[0m��,����$w��$n������Ѩ����ߵ�����!\n ",
        "dodge": 20,
        "parry": -20,
        "damage": 300,
        "force": 90,
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
          (int)me->query_skill("lan-dagger",1)/10));
          message_vision(sprintf("[1;33m$N�� �������� ����͸��$n���ϵ�������Ѩ, $n������Ѫ�ߵ�㡣[0m\n"),me,victim);
         }
}

mapping query_action(object me, object weapon)
{
        object wea=me->query_temp("weapon");
      if  (wea!=0)
            return action[random(5)+5];
      else
          return action[random(5)];
}

int valid_learn(object me)
{
        if(!me->query_temp("weapon"))
           tell_object(me,"û������ô��\n");
return 1;

        if(me->query_skill("cure")*1<=me->query_skill("seven-needle",1))
return notify_fail("���ҽ�Ƽ���̫���˰�! ��ô�ô���! ��һ����˺�ʹ����! \n");
       return 1;
}

int valid_enable(string usage)
{
/*      object me=this_player();
      object wea=find_object(me->query_temp("weapon"));
         {
          if(wea!=1)
          if(wea->query("skill_type")=="dagger")
           {
            me->map_skill("dagger","seven-dagger");
            me->map_skill("parry","seven-dagger");
            me->map_skill("unarmed",0);
            return (usage=="dagger")||(usage=="parry");
           }
          me->map_skill("unarmed","seven-dagger");
          me->map_skill("dagger",0);
          me->map_skill("parry",0);
          return (usage=="unarmed");
         }     */
        return (usage=="dagger");
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

string query_parry_msg(string limb)
{
        return parry_msg[random(sizeof(parry_msg))];
}
