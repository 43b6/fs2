inherit SSERVER;
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void whip(object me, object victim, object weapon, int damage);

string *parry_msg =
    ({
      "$n�����ޣ�ʹ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"����ʽ����$N�Ĺ���һһ��ȥ\n",
      "ֻ��$n����һת���ᶶ����$l��Ȧ��һ���޻�����$N��$w��ȥ\n",
      "$n����$l����$l���һ��ȦȦ����ס���������\n",
      "$n��æ֮�ʣ�ʹ��һ�С����߳�����������ֱ�����Ƶ�$N���Ʒ���\n",
      "$n����Ϊ����������$l��$l��ʱ��Ӳ�ޱȣ�$n��׼��$N�Ĺ��ƣ��ֳ�$lӲ��������$N������\n",
    });

mapping *action = ({
([ "action":"$N������е�$w��$w�·����ֶ��߰㣬���ٵĴ���$n",

        "dodge"	:	-20,
        "parry"	:	-25,
        "damage":	300,
        "damage_type":	    "����",

]),

([ "action":"$N����$w�ձ�����˳���»ӣ�$w�����������$n�޷�׽��$N�ı�·",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	350,
        "damage_type":	    "����",

]),

([ "action":"$N��$w����������գ�ʹ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"-������ֻ��$w���ƻ���$n",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	350,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

([ "action":"$N�Ӷ�$w��һ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"-��������$w����ջ���һ��Բ����ֱ��$n",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	400,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

([ "action":"$N���ٻӶ�$w��$w�������������������ڵأ�һ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"--Ⱥ�߱޷�ֱ��$n��·Ѩ��",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	450,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

([ "action":"$N��һ����һ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"--���ױ��꣬�Ѿ�ѸȻֱ��$n",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	500,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

([ "action":"$N�ӱ޲��㣬�Խż�����$n���°�������$wʹ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"--"+HBWHT+HIR+"а��û�"+NOR+"��ֱ��$n",

        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	550,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

([ "action":"$N���$w��һ��"+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+NOR+"--"+HBWHT+"��������"+NOR+"�������Ѿ�����$n",
 
        "dodge"	:	-50,
        "parry"	:	-50,
        "damage":	600,
        "damage_type":	    "����",
        "post_action":	(: whip :),

]),

});

void whip(object me,object victim,object weapon,int damage)
{
int i,j,k;

	i = (int)me->query_skill("whip");
	j = (int)victim->query_skill("dodge");

	if( i < random(j) )
	{
		message_vision(HIR+"$N"+HIR+"�޷�ͻȻ��������...$n"+HIR+"һ����ܲ����������ӻ��������ԡ�\n"NOR,me,victim);
		victim->receive_wound("kee",100);
		COMBAT_D->report_status(victim,1);
	}
	
	if( (int)victim->query_busy() < 2 && random(100) < 20 )
	{
		message_vision(HIY+"$N"+HIY+"�ı޷���ס��$n"+HIY+"����$n"+HIY+"��ʱ�޷�������\n"NOR,me,victim);
		victim->start_busy(1);
	}
}

int valid_enable(string usage)
{
        return usage=="whip" || usage=="parry";
}

string query_parry_msg(string limb)
{
	return parry_msg[random(sizeof(parry_msg))];
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}
