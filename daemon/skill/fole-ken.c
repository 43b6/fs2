
// fole-ken.c //���װ�ʽ// write by ����..

inherit SKILL;
#include <ansi.h>
mapping *action = ({
([	"action":"$N���һ��,�Ͽ�ƽ��Ų������,�����ĵ�,���ֹɶ��ھ�,һ��"HIW"������ɽ�Ӷ���"+NOR",�������,
�ƾ���ɽ,�������ε�����,�����������֮�Ƴ�$n����!!",
	        "dodge":		-10,
		"parry":		-40,
		"force":		200,
		"damage":               135,
		"damage_type":	"����"
	]),
([	"action": "$Nʹ��һ��"HIW"���׹���ɽ����"+NOR",�������,��������,һ���ۻ���ھ�.�������,
˳���Ƴ�,������������,��ȫ����"HIC"��һ����ʯ���綷��"+NOR"֮����,$n�������,
�Ѵ�����վ�,�����ľ������$n�ؿ�!!",
		"dodge":		-40,
		"parry":		-10,
		"force":		270,
		"damage":               150,
		"damage_type":	"����"
	]),
([	"action": "$Nʹ�����װ�ʽ"CYN"��ˮ���ƾ��ס�"+NOR",˫������,һƬ��ɫ�ľ���,�������ɷ���,
����һ����ɽ�������Ʒ�,����$n��ǰ,ŭ�����ΰ�Ļ���$n..",
		"dodge":		-15,
		"parry":		-20,
		"force":		120,
		"damage":               60,
		"damage_type":	"����"
	]),
([	"action": "$N�������,��������,����һ��ʹ��"YEL"����ɳ��ҹ��"+NOR",˲ʱ������, 
��ɳ����,�����֮"HIY"��ƽɳçç������,�������ʯ���ߡ�"+NOR"$N�÷�ɳ��ʯ֮��,
��$n�������\����������!!",
		"dodge":		-50,
		"parry":		-25,
		"force":		160,
		"damage":               110,
		"damage_type":	"����"
	]),
([	"action": "$N������������,�������һƬ�˻�,����һ��,˫����£,ʹ��"HIR"���������ꡯ"+NOR",һȦ,
һ��,����һ������������,ɨ��$n!!",
		"dodge":		-30,
		"parry":		-10,
		"force":		100,
		"damage":               60,
		"damage_type":  "����"
	]),
([	"action": "$N˫��ƮƮ,������ʮ��,���������֮"HIW"�����紵����׹�ߡ�"+NOR",
���˷��װ�ʽ֮"HIC"��������ɽʯ��"NOR",��Ӱ����,���ƿ�籩��,
��������ϸ���ͬʱ����$nȫ��ҪѨ!!",
		"dodge":		-10,
		"parry":		-30,
		"force":		150,
		"damage":               70,
		"damage_type":	"��ʴ֮��"
	]),
([	"action": "$N�������,ƮȻ����,˳��ʹ��"HIW"���绨����ӡ�"+NOR",˫���絶�罣,�Ӷ�֮��,
����һƬ��â,������֮��,$n��ʱ��ǰ����һƬ�˹�,һ���ѣ,
�⵶Ѹ�ٵĳ�$n����λ��ȥ!!",
                "dodge":                -35,
		"parry":		 20,
  		"force":		120,
		"damage":                80,
		"damage_type":	"����֮��"
	]),
([      "action": "$N���𺮱�����,�����巺����,˲��.....����һ�󺮷�,��ʱ˫�Ƽ���,
ʩչһ��"HIC"�����������ġ�"+NOR",ɷʱ����������Ʈ��,$n�ѱ������ƵĲ�������,
�̹Ǳ���������,���ϵ���$n������ȥ!!!",
                "dodge":               -10,
                "parry":               -40,
                "force":               130,
                "damage":              100,	
                "damage type":  "����֮��"
        ]),        
});

int valid_learn(object me)
{
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("���װ�ʽ���Ʒ�..������±��С�\n");

	if( (int)me->query("max_force") < 200 )
		return notify_fail("�������̫��,Ӳ���ᵼ�¾�������.\n");
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
		return notify_fail("�����������,���������ˡ�\n");
	if( (int)me->query("force") < 5 )
		return notify_fail("��û���㹻������һչ��ѧ.\n");
	me->receive_damage("kee", 20);
	me->add("force", -5);
    write("��������������ʽ����һ��,��ʱ���ù����ָ���һ��¥. \n"); 
	return 1;
}
mixed hit_ob(object me, object victim, int damage_bonus)
{
 if( damage_bonus < 100 ) return 0;
  if( random(damage_bonus/2) > victim->query_str() ) {
    victim->receive_wound("kee", (damage_bonus - 100) / 2 );
        switch(random(3)) {
        case 0: return "$N��������ʵ�Ļ���,$n������ʮ��,������һ����Ѫ!!\n";
        case 1: return "$N����һ�£�$n�����巢����������һ������,�ƺ���ͷ�Ա�����.\n";
        case 2: return "һ���ҽ�,$n���Ա�����,$n���溬����֮ɫ,�����Ȼ.\n";
              }}}
              
