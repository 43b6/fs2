// ����� by roger
// ����ħ��mob ��ר��skill֮һ
#include <ansi.h>
#include <combat.h>
inherit SKILL;

void blood(object me, object victim, object  weapon, int damage);
void super(object me, object victim, object  weapon, int damage);
string *parry_msg= ({
   "$n˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С���ħ�۶���, ������������ȫ������, Ӳ�����İ�$N����ʽ��������!\n",
   "$n�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�Ⱥ����·��, ��ָ���й��ɿ��̽��$n���ʺ�, �ƽ���$N�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : HIM"$Nʹ��ħ��"HIB"��"HIM"�����"HIB"��"HIM"�еľ���"HIB"��"HIM"��е���"HIB"��"HIM"������һ��һ��������ֱ����$nɲ�Ǽ�$n��$l�ѱ�����...\n"NOR,
        "dodge":   20,
        "parry":   20,
        "damage":   250,
        "force":    290,        
        "damage_type" : "����"
        
]),

([ "action" :HIM"$Nʹ��ħ��"HIB"��"HIM"�����"HIB"��"HIM"�е�"HIB"��"HIM"���������"HIB"��"HIM"����ңץһ̽��ʹ��$n����Ϣ�޷����ӣ���������$N��ס!!\n"NOR,
        "dodge":   30,
        "parry":   30,
        "damage":   250,
        "force":    270,
        "damage_type" : "��Ѫ����"
]),

([ "action" :HIM"$Nʹ��"HIB"��"HIM"�����"HIB"��"HIM"�е�"HIB"��"HIM"�ֽ���"HIB"��"HIM"��˫��һ̽��˳��һŤ��һ�죬$n��������ԭ��$n�Ľ����ѱ������ַ�֮���̲�������ë���Ȼ...\n"NOR,
        "dodge":   30,
        "parry":    30,
        "damage":   250,
        "force":    290,
        "damage_type" : "��������"
]),

([ "action" :HIM "$Nʹ����"HIB"��"HIM"���һ��ָ"HIB"��"HIM"ʳָһ��һ��������ָ����$n��$l������������ﱻ�⵽����֮����ɨ����������!!\n"NOR,
        "dodge":    30,
        "parry":    30,
        "damage":   270,
        "force":    300,
        "damage_type" : "����"
]),

([ "action" :HIM"$N��ȫ������������ǰ���������������ܵ���ɲ�Ǽ䲻���𶯣�������������"HIB"��"HIM"�����"HIB"��"HIM"�ĳ�������"HIB"��"HIM"��к����"HIB"��"HIM"��ǰ��!!��Ȼ$Nһ����ȣ�������֮����һ�μ������ݺݵ�����$n���ؿ�!!\n"NOR,
        "dodge":   100,
        "parry":   100,
        "damage":   240,
        "force":    270,
        "post_action":  (:super:),
        "damage_type" : "ը��"
]),


});


void super(object me, object victim, object  weapon, int damage)
{
  message_vision(HIR"���$N������������$n���ؿڷ��ը����Ѫ���Ľ������˴�Ŀ�ľ�!!\n"NOR,me,victim);
  victim->receive_damage("kee",190,me);
  COMBAT_D->report_status(victim);
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
