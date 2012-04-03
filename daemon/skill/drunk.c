// lungshan.c
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me,object victim,object weapon,int damage);


mapping *action = ({
        ([      
                "action"     :              
"$N��������:��������:��������ǧ����,$N�ֳ����״,������$n��˫��һ׽",
                "dodge"      :               -25,
                "parry"      :               -20,
                "damage"     :                30,
                "force"      :                50,
                "damage_type":               "׽��"
        ]),
        ([     
                "action"     :              
"$N�󺰡�������:�������������,$N׽ס$n����,�������ز���ײ",
                "dodge"      :               -50,
                "parry"      :               -10,
                "damage"     :                20,
                "force"      :                80,
                "damage_type":               "ײ��"
        ]),
        ([   
                "action"     :              
"$N�󺰡��Ź���:����ױ���������,$N����״,ҡҡ��\��\��$n��ȥ",
                "dodge"      :               -10,
                "parry"      :               -25,
                "damage"     :                70,
                "force"      :                100,
                "damage_type":               "����"
        ]),
        ([  
                "action"     :              
"$N�󺰡����ɺ�:���ᾴ�������ơ�,$N�ɰ���״,����$n������һ��",
                "dodge"      :               -30,
                "parry"      :               -5,
                "damage"     :                90,
                "force"      :                120,
                "damage_type":               "����"
        ]),
        ([ 
                "action"     :               "$N����һԾ��ʹ����ɽȭ���塸ɽȪȺӿ����ȭ�������һ����ʮȭ����$n$l",
                "dodge"      :               -30,
                "parry"      :               -30,
                "damage"     :                170,
                "force"      :                150,
                "post_action":               (: berserk :),
                "damage_type":               "����"
        ]),
        ([
                "action"     :              
"$N�󺰡�������:����ϥײ���桱,$N��������һ��,ҡҡ��\��\һ��ȴ��$n��ס",
                "dodge"      :               -20,
                "parry"      :               -45,
                "damage"     :                220,
                "force"      :                240,
                "damage_type":               "����"
        ]),
        ([
                "action"     :              
"$N�󺰡��ܹ���:���˾�������ۡ�,$N�ֳɳֱ�״,��$n�Ĳ���һ׽",
                "dodge"      :               -50,
                "parry"      :               -50,
                "damage"     :                280,
                "force"      :                300,
                "damage_type":               "׽��"
        ]),
        ([
                "action"     :
"$N�󺰡�������:����̳���Ķ���,$Nͷһ��,��$nһײ",
                "dodge"      :               -30,
                "parry"      :               -5,
                "damage"     :                90,
                "force"      :                120,
                "damage_type":  "ײ��"
       ]),
       ([
               "action"      :
"$N�󺰡����ɹ�:��������������,$N��һ��,ͻȻ˫����$n������һ��",
               "dodge"      :               -30,
               "parry"      :               -5,
               "damage"     :                90,
               "force"      :                120,
               "damage_type":  "����"
       ]),
});

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
        return   notify_fail("ѧ��ȭ������֡�\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" );
}


mapping query_action(object me, object weapon)
{
int skill_level, limit;
        skill_level = (int)(me->query_skill("drunk", 1));
        limit= (int)(skill_level/10);
        if (limit < 4 )
                return action[random(4)];
        if (limit < 7 )
                return action[random(limit)];
        else if (limit < 9)
                return action[random(6)];
        else
                return action[random(sizeof(action))];
}

void berserk(object me, object victim, object  weapon, int damage)
{
    int lose, i, test,pow,pow1;
        pow1 = 0;
        pow  = 0;
        if(!me->query_temp("berserk" ))
        {
                lose = (int)(me->query_skill("drunk", 1)/20 + 1);
                me->set_temp("berserk", 1);
                for(i = 0;i < lose; i++)
                {
                        pow = random(6);
                        pow1 = pow1+pow;
                        me->set_temp("apply/attack", pow1);
                        message_vision(
                       
"[1;33m$Nʹ�����������,��ɽȪӿ�������$n���������㡣^[[0m\n" , me, victim);
                        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"));
                }
                me->delete_temp("apply/attack");
                me->delete_temp("berserk");
        }
} 


int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query("force") < 3 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query_skill("literate") <= (
(int)(me->query_skill("drunk", 1)*0.75) ) )
                return
notify_fail("�����ѧ֪ʶ���㣬�ƺ��޷�������ȭ����߰���");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("fighter")+"/drunk/"+action;
}

