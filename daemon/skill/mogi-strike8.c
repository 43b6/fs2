// mogi npc skill ֮ ̫����ñ���
#include <ansi.h>
#include <combat.h>
inherit SKILL;
string *parry_msg= ({
   "$n˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С���ħ�۶���, ������������ȫ������, Ӳ�����İ�$N����ʽ��������!\n",
   "$n�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�Ⱥ����·��, ��ָ���й��ɿ��̽��$n���ʺ�, �ƽ���$N�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : HIC"$N��Ӱ����ʹ��̫����ñ����е�һʽ"HIY"�����軨ɽ��"HIC"�����ҡ��Ʈ�������ؽӽ�$n�����治��ص���$n$l\n"NOR,
        "dodge":   20,
        "parry":   20,
        "damage":  250,
        "force":   290,        
        "damage_type" : "����"
        
]),

([ "action" :HIC"$N˫������ʹ��һʽ"HIY"��ȸ�赾�㡯"HIC"����ȸ���Ծ����ӯ��Ѹ�ٵ���$n$l��ȥ"NOR,
        "dodge":   30,
        "parry":   30,
        "damage":   250,
        "force":    270,
        
        "damage_type" : "����"
]),

([ "action" :HIC"$N�����������������һʽ"HIY"���������ء�"HIC"����������ƣ��Ի�Ϊ������Ϊʵ�ػ���$n\n"NOR,
        "dodge":   30,
        "parry":    30,
        "damage":   250,
        "force":    290,
        "damage_type" : "����"
]),

([ "action" :HIC"$N����Ծʹ��̫����ñ����е�һʽ"HIY"�������ƶˡ�"HIC"����գ�ۼ�ת��Ϊ�վ�����ָ����ֱ��$n$l��ȥ\n"NOR,
        "dodge":    30,
        "parry":    30,
        "damage":   270,
        "force":    300,
        "damage_type" : "����"
]),

([ "action" :HIC"$NٻӰ��ɢ���ȹ��뵣�һʽ"HIY"���������¡�"HIC"������Ӱ��ǧ���·�Ⱥħ��ѪȺȺΧ��$n\n"NOR,
        "dodge":   100,
        "parry":   100,
        "damage":  240,
        "force":   270,
        
        "damage_type" : "����"
]),

([ "action" :HIC"$Nһʽ"HIY"��Ů���ԡ�"HIC"�ھ���Ͷ��֮��ɢ����������������Ů��ҹ�λ��߳����������ֵش���$n����\n"NOR,
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
