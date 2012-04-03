// KING_ROAD_SWORD.c

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack0(object me, object victim, object  weapon, int damage);

int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);

mapping *action = ({
	([	"action":		HIC"$N��������ע��$w$"HIC"��ʹ��"HIY"����ĩ���衱"HIC"һʽ��ֻ����$w"HIC"����������֮����$n�����ܱ���֮�����ţ�",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                300,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action":		HIC"$N��������Ϊ����������ʹ��"HIR"������ͬ�족"HIC"һʽ��������Ͻ����ӻ���ֻ��������Ϊ�������Σ��Բ�ͬ�������$n",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                350,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action":		HIC"$NͻȻ����ʽ��ת����Ϊ����ʹ��"WHT"��������"HIC"һʽ��$nֻ����$N��֮��Ӱ����ߣ��޷�ȷ��$N�������ڣ�����$n$l������������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action":		HIC"$N��������$w"HIC"��ʹ��"HIB"������֮����"HIC"������˲���γ�һ����������Ѹ�ݵĽ�$n��������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                450,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action":		HIC"$N���������۳�һ���ὣ����ʹ���β�����"HIM"����Թ���ȡ�������˲����$n��$l���룬����$n����֮��",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                500,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action":		HIC"$N��������ȫ��ʹ��"HIG"��®ɽ����һ���ۡ�"HIC"��������Ϊ���ν���������������ܵı�������$n˿������͸���н�������$n��������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                550,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
	([	"action"     :		HIC"$N����һ�ν�����"HIW"��ָ��Ϊ��������Ϊ���������쳾��"HIC"��������μ������ϣ��û���������Ӱ�󣬽�����ɢ������$n˲ʱ����������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                340,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
	]),
});
int valid_enable(string usage)
{
        return (usage=="sword")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp_attack0(object me, object victim, object  weapon, int damage)
{
  int i;

  message_vision(HIR
    "$N�����������֮·������֮�䴮��֮�������಻���Ľ���, "
    "��ʽһʽ����һʽ�������, ��ʽ�������ν�ˮ���಻��!!\n"NOR, me, victim);
  for (i = 0;i < 15; i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
