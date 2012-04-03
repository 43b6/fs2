// celestrike.c
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void at_head(object me, object victim, object  weapon, int damage);
void at_foot(object me, object victim, object  weapon, int damage);

mapping *action = ({
	([	"action":		"$Nʹ��һ��"HIY"��������ʽ��"NOR"�����ƴ�������$n��$l",
		"dodge":		-130,
		"parry":		150,
		"force":		400,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ��һ��"HIY"��������ʽ��"NOR"�����ƻ���Ϊʵ����$n��$l",
		"dodge":		-110,
		"parry":		-230,
		"force":		420,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ����а�Ʒ�"HIY"��С����ʽ��"NOR"������Ȱ�����$n��ǰ��һ������$n��$l",
		"dodge":		-130,
		"parry":		210,
		"force":		430,
		"damage_type":	"����"
	]),
	([	"action":		"$N˫��һ��ʹ��"HIY"��ѩ�������¡�"NOR"����׼$n��$l�����ĳ�����",
		"dodge":		110,
		"parry":		-230,
		"force":		440,
                "post_action":               (: at_head :),
 		"damage_type":	"����"
	]),
	([	"action":		"$N���ƻ��˸�ȦȦ�������Ƴ���һ��"HIY"���鶯�巽�ġ�"NOR"����$n$l",
		"dodge":		-120,
		"parry":		-230,
		"force":		450,
                "post_action":               (: at_head :),
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ��"HIY"���������Ƕϡ�"NOR"������ɢ���ߴ�ͬʱ��$n��$l���ƹ���",
		"dodge":		-170,
		"parry":		-210,
		"force":		460,
                "post_action":               (: at_foot :),
		"damage_type":	"����"
	]),
	([	"action":		"$N����������һ��"HIY"�����������족"NOR"˫�Ʋ����Ƴ�",
		"parry":		-240,
		"force":		500,
                "post_action":               (: at_foot :),
		"damage_type":	"����"
	]),
});

int valid_learn(object me)
{
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("����а���Ʊ�����֡�\n");
	if( (int)me->query_skill("celestial", 1) < 20 )
		return notify_fail("�����а�񹦻���㣬�޷�����а�Ʒ���\n");
	if( (int)me->query("max_force") < 100 )
		return notify_fail("�������̫�����޷�����а�Ʒ���\n");
	return 1;
}

int valid_enable(string usage) { return usage=="unarmed"; }

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	if( (int)me->query("force") < 5 )
		return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	me->receive_damage("kee", 30);
	me->add("force", -5);
	return 1;
}
void at_head(object me, object victim, object  weapon, int damage)
{
   int sp_value;
   sp_value =300+random(300);
   victim->receive_damage("kee",sp_value,me);
   COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
void at_foot(object me, object victim, object  weapon, int damage)
{
   int sp_value;
   sp_value =300+random(300);
   victim->receive_damage("kee",sp_value,me);
   victim->start_busy(1);
   COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
