// fire-catch.c
#include <combat.h>
inherit SKILL;
inherit SSERVER;

mapping *action = ({
        ([      "action":               "$Nʹ��ʥ���湦[1;37m��[31m��[37m��[0m�־�������$wѸ�ٿ�ɨ��$n���̣�",
                "damage":               50,
                "force":            50,
	    "dodge":		-40,
	    "parry":		-40,
	    "damage_type":	"ײ��"
	]),
        ([      "action":               "$Nʹ��ʥ���湦[1;37m��[31m��[37m��[0m�־�������$w�ӿ����º�����$n��$l��",
                "damage":               70,
                "force":            70,
	    "dodge":		-50,
                "parry":                    -50,
	    "damage_type":	"����"
	]),
        ([      "action":               "$Nת������$w����ʱ[1;37m��[31mת[37m��[0m�־����������������$n��$l��",
                "damage":               90,
                "force":            90,
	    "dodge":		-35,
	    "parry":		-35,
	    "damage_type":	"����"
	]),
        ([      "action":               "$N�Ӷ�$wʹ��ʥ���湦[1;37m��[31m��[37m��[0m�־�����ʱһ�����ɻ�$n��$l��",
                 "damage":               100,
	                "force":            100,
     "dodge":		-30,
	     "parry":		-30,
	     "damage_type":	"����"
        ]),
        ([      "action":               "$NͻȻ��Ӱ�ζ���ʹ��[1;37m��[31m��[37m��[0m�־�������$w�������϶���$n��$l��",
                "damage":               110,
                "force":            110,
                "dodge":                -30,
                "parry":                 -30,
                "damage_type":  "����"
        ]),
        ([      "action":               "$Nʹ��[1;37m��[31m��[37m��[0m�־���ֻ������$w�����ű�Ӱ�������ʹ���$n��$l��",
                "damage":               120,
                "force":            120,
                "dodge":                -25,
                "parry":                  -25,
	    "damage_type":	"ײ��"
        ]),
        ([      "action":               "$N��ס$w��ʹ��[1;37m��[31m��[37m��[0m�־�������$n�Ĺ���˳������$n��$l��",
                "force":            150,
                "damage":               150,
                "dodge":                -20,
                "parry":                  -20,
	    "damage_type":	"ײ��"
        ]),
        ([      "action":               "$N�趯$wʹ��[1;37m��[31m��[37m��[0m�־���Ѹ��ʹ��һ������ͻ�$n��$l��",
                "damage":              180,
                "force":            180,
                "dodge":                -20,
                "parry":                  -20,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N����$wһ�٣�ʹ����[1;37m��[31mŭ�������[37m��[0m���Ӳ��ϵ�ʹ������$n��$l",
                "damage":              200,
                "force":            200,
                "dodge":                -10,
                "parry":                  -10,
                "damage_type":  "����"
        ]),
});

int valid_learn(object me)
{
	if((int)me->query("str") + (int)me->query("max_force") / 5 <50)
		return notify_fail("���������������Ҳ�����һ����������ǿ������\n");
	return 1;
}

int valid_enable(string usage)
{
	return (usage=="stick") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
int skill_level, limit;
        skill_level=(int)me->query_skill("fire-catch", 1);
        limit=(int)skill_level/10;
        if (limit < 10)
                return action[random(limit)];
        else
                return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;
	if( !objectp(weapon = me->query_temp("weapon"))
	||	(string)weapon->query("skill_type") != "stick" )
                return notify_fail("�����ʹ��ʥ��̵����ƻ��ǡ�ʥ���������ʹ��ʥ���湦��\n");
	if(me->query_skill("force")*3<=me->query_skill("fire-catch",1))
          return notify_fail("���������������, ��������ʥ���湦�ˡ�\n");
	if(me->query_skill("literate")*2<=me->query_skill("fire-catch",1))
          return notify_fail("���֪ʶ���㣬�޷����ʥ�����ϵ�������ѧ��\n");
	return 1;
	if( (int)me->query("kee") < 60 )
                return notify_fail("���������������ʥ���湦������������Ϣ��Ϣ�ɡ�\n");
	me->receive_damage("kee", 60);
	return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("prayer")+"/fire-catch/"+action;
}
