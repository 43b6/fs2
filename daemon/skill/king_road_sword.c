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
	([	"action":		
HIW"$N��������ע��$w"HIC"����������������������������������֮��

                        "HIY"����֮·"HIW"֮��"HIR"��ĩ����"HIW"��

"HIW"����֮������ת��Ϊ�������߱���֮����$n�����ܱ���֮�����ţ�",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                300,
                "force"      :                300,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N���������������������������ת֮�仯Ϊ���������������γ�����˫��

                         "HIY"����֮·"HIW"֮��"HIR"��"HIY"��"HIC"ͬ��"HIW"��

"HIW"���½���һ��һ�ụ���ֲ������½�������̫��֮�ƺ�������������$n��",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                350,
                "force"      :                350,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N����ͻȻ�ܽ���Ӱ�죬���Խ���תΪ�񱩣��������У����н���Խ��Խ��

                          "HIY"����֮·"HIW"֮��"WHT"����"HIW"��

"HIW"���п����д��б�ɱ֮�⣬$n�޷�����$N�������֮������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N����ͻȻ�纣���ڣ�����Ҳ���������粨��һ�㣬ֻ��������Ϊһ��������

                          "HIY"����֮·"HIW"֮��"HIB"����֮��"HIW"��

"HIW"������$n����ͻȻ������˲���γ�һ����������Ѹ�ݵĽ�$n�������У�",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                450,
                "force"      :                450,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N������ת���ᣬ��������������ת����һ���ὣ������˿������Ʈ���Ѱ

                           "HIY"����֮·"HIW"֮��"HIM"��Թ����"HIW"��

"HIW"��������$n�Ӵ���һ˲�䣬������$l͸����룬����$n����֮�У�",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                500,
                "force"      :                500,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N�����ڵ�������ת����ת������Խ��Խ�Ӽ��ң������������б�ø���

                           "HIY"����֮·"HIW"֮��"HIG"®ɽ����һ����"HIW"��

"HIW"����֮����ͬ����Х�죬$n�羪��֮����ʱ�벻��Ӧ��֮��",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                550,
                "force"      :                550,
                "damage_type":               "����"
	]),
	([	"action":		
HIW"$N����һ�ν�����"HIR"ָ��Ϊ��"HIW"��"WHT"����Ϊ��/"HIW"��"HIM"�����쳾"HIW"����������μ�������

                           "HIY"����֮·"HIW"֮��"HIM"�����쳾"HIW"��

"HIW"�û���������Ӱ�󣬽�����ɢ������$n˲ʱ����������",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                340,
                "force"      :                340,
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

