// mogi npc skill ֮ ����ɱ


#include <ansi.h>
#include <combat.h>
inherit SKILL;
string *parry_msg= ({
   "$n˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С���ħ�۶���, ������������ȫ������, Ӳ�����İ�$N����ʽ��������!\n",
   "$n�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�Ⱥ����·��, ��ָ���й��ɿ��̽��$n���ʺ�, �ƽ���$N�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : "$N���ײ�ͷʹ��һ��"HIG"����Ů֯�졯"NOR"��˲��ɷ���������Ⱥ�����裬Χɱ$n����Ѩ\n"NOR,
        "dodge":   20,
        "parry":   20,
        "damage":  250,
        "force":   290,        
        "damage_type" : "����"
        
]),

([ "action" :"$N����Ծ��������$n������ɲ��ʹ����һʽ"HIG"��֩Ů�޵ء�"NOR"��ֻ������ɷ�������һ�����$n����·��ֱ��$n�ľ���\n"NOR,
        "dodge":   30,
        "parry":   30,
        "damage":   250,
        "force":    270,
        
        "damage_type" : "����"
]),

([ "action" :"$N��Ծ��ذ�����˿�������Ҵܣ�һʽ"HIG"����Ů���¡�"NOR"��Ȼ��������˿���޹���ı���$n������\n"NOR,
        "dodge":   30,
        "parry":    30,
        "damage":   250,
        "force":    290,
        "damage_type" : "����"
]),

([ "action" :"$N����һ������һ˦ʹ��һʽ"HIG"��ˮŮ�ɴ��"NOR"����ʱ�ɷ��������������պ��ᣬֱ��$n�ĸ���ҪѨ\n"NOR,
        "dodge":    30,
        "parry":    30,
        "damage":   270,
        "force":    300,
        "damage_type" : "����"
]),

([ "action" :"$N��ͷ����һ��ʹ��һʽ"HIG"����\Ů���Ρ�"NOR"����˿�ɱ����ܣ�������˷�����$n\n"NOR,
        "dodge":   100,
        "parry":   100,
        "damage":  240,
        "force":   270,
        
        "damage_type" : "����"
]),


});

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
