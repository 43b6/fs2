// Ѫ���� by roger
// ����ħ��mob ��ר��skill֮һ
#include <ansi.h>
#include <combat.h>
inherit SKILL;

void blood(object me, object victim, object  weapon, int damage);

string *parry_msg= ({
   "$n˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С���ħ�۶���, ������������ȫ������, Ӳ�����İ�$N����ʽ��������!\n",
   "$n�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�Ⱥ����·��, ��ָ���й��ɿ��̽��$N���ʺ�, �ƽ���$N�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : HIR"$N��������һ�ƣ�ʹ��"HIM"��"HIR"Ѫ����"HIM"��"HIR"�е�"HIM"��"HIR"��Ѫ����"HIM"��"HIR"$n��ʱ��ɫһ�䣬������Ѫ���ڣ�������Ѫ����!!\n"NOR,
        "dodge":   -30,
        "parry":   -20,
        "damage":   220,
        "force":    270,
        "post_action":  (:blood:),
        "damage_type" : "��Ѫʧ��"
        
]),

([ "action" :HIR"$N˫�����ƣ�һ��"HIM"��"HIR"Ѫ����"HIM"��"HIR"�е�"HIM"��"HIR"����ѪӰ"HIM"��"HIR"ʹ����ֻ��$N��˫�������ѪŨ��$n����������ֻ������������ʧ\n"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   210,
        "force":    270,
        "damage_type" : "Ѫ��֮��"
]),

([ "action" : HIR"$N���һ����һ��"HIM"��"HIR"Ѫ������"HIM"��"HIR"�Ʒ���Ю��ŨŨѪ�����ƺ��˵���$n���ؿڿ���ȥ\n"NOR,
        "dodge":   -30,
        "parry":    20,
        "damage":   230,
        "force":    270,
        "damage_type" : "����"
]),

([ "action" : HIR"$Nʹ��"HIM"��"HIR"Ѫ����"HIM"��"HIR"�е�"HIM"��"HIR"ɷѪһָ"HIM"��"HIR"��ָ��ǧ��ֱ��$n���ؿ�ֱ�̶�ȥ��ֻ��һ����ֱ��Ѫ����$n���ؿ����...\n"NOR,
        "dodge":    -30,
        "parry":    -20,
        "damage":   220,
        "force":    270,
        "damage_type" : "����"
]),

([ "action" :HIR"$N��Ϣһת��ʹ��"HIM"��"HIR"Ѫ����"HIM"��"HIR"�е���������"HIM"��"HIR"����Ѫ��"HIM"��"HIR"���ܺ�Ȼ���¼���������������������䣬ʹ��$n�����ŵ�������ɫ!!��˵�д����߲�������Ѫ�����⣬�����ձ��������İ���!!\n"NOR,
        "dodge":   -20,
        "parry":   -10,
        "damage":   190,
        "force":    250,
        "damage_type" : "��������"
]),

([ "action" :HIR"$N��$n��$lһץ��ʹ����"HIM"��"HIR"Ѫ����"HIM"��"HIR"��������֮ɫ���"HIM"��"HIR"��Ѫ��ץ"HIM"����"HIR"�д����߽��ڼ�������Ѫ���ж���!!\n"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   200,
        "force":    250,
        "damage_type" : "ץ��"
]),

});

void blood(object me, object victim, object  weapon, int damage)
{

 victim->apply_condition("ff_poison",2);
}
int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="parry");
}


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

string query_parry_msg(string limb)
{
    return parry_msg[random(sizeof(parry_msg))];
}
