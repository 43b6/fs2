// ����Ѫ���� by roger
// ����ħ��mob ��ר��skill֮һ
#include <ansi.h>
#include <combat.h>
inherit SKILL;
string bleed();

string *parry_msg= ({
   "$N˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С�  ��ħ�۶�  ��, ������������ȫ������, Ӳ�����İ�$n����ʽ��������!\n",
   "$N�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�  Ⱥ����·  ��, ��ָ���й��ɿ��̽��$n���ʺ�, �ƽ���$n�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : "$N���Ӱ��, ٿ��Ծ������, �ӿ���ʹ��һ�С�  ��������  ��, ��צѸ�ٵĴ�$nͷ����ץ������!\n"NOR,
        "dodge":   -30,
        "parry":   -20,
        "damage":   180,
        "force":    250,
        "damage_type" : "����ץ��",
]),

([ "action" : "$N˫צ����һ��, ���Ӻ�, һʽ��ħ�Կ񷢡�, ������$nԾ�˹�ȥ, ˫צ���, ��$n�Ĳ��ӻ�����ȥ!\n"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   180,
        "force":    250,
        "damage_type" : "����Ť��",
]),

([ "action" : "$N�ӿ���Ų�, ʹ��һ�С�����ħ�֡�, ����$n������ת��, ��Ȼ������ǧ��ֻ��צ��$nϮ������, �ֻ�$N���ϸ�����ͬҪ����\n"NOR,
        "dodge":   -30,
        "parry":    20,
        "damage":   190,
        "force":    250,
        "damage_type" : HIR"�˿�����"NOR,
]),

([ "action" : "$Nһ�С�Ⱥħ���衱ʹ��, ֻ���й���Ӱ, $N��Ӱ�ӳ����$n������֮��, �벻֪$N��Ӻδ���������, ��Ȼ$NһԾ��, ���Ƶ�$n���, ��$n�Ժ������ȥ��\n"NOR,
        "dodge":    -10,
        "parry":    10,
        "damage":   200,
        "force":    250,
        "damage_type" : HIR"ͷ��Ѫ��"NOR,
]),

([ "action" : "$N��צ����, ��צ����, �ŵ�������, ����һʽ��  ����ħ��������  ��, ��צ����$n�������\��, ���������ұ����ư벽, ������צ����$n����硣\n"NOR,
        "dodge":   -20,
        "parry":   -10,
        "damage":   190,
        "force":    250,
        "damage_type" : "����֮��",
]),

([ "action" : "$Nצ�ɵ���, һ�С�  ������ն��  ��ʹ������, ����ֱ���Ĺ���$n����, ��, ��, ��, ��ȸ�����λ, ���צ����һʽ��  ��ħ��ɨ��  ����ɨ$n�����̡�\n"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   200,
        "force":    250,
        "damage_type" : "���쵶��",
]),

([ "action" : "$N������˫צ, һ�С�  ��ħ������  �����˳���, ˫צֱ��$n�й����̶���, $n�Ե�����Ӧ��, $N��צ���ƺ���һת, ��Ϊֱȡ$n˫Ŀ, �Ƶ�$n�������ˡ�\n"NOR,
        "dodge":   -35,
        "parry":   -20,
        "damage":   180,
        "force":    240,
        "damage_type" : HIR"��ʱʧ��"NOR,
]),

([ "action" : HIB"$N��Ȼֹͣһ�й���, ֻ�Ǿ�����������$n, ������һ�С�  ħӰ�ù���  ��, $n�����ĸе��ڸ�����, ����������ǧ��������ҧ����, �����ѵ���\n"NOR,
        "dodge":   -40,
        "parry":   -20,
        "damage":   190,
        "force":    250,
        "damage_type" : HIW"��Ӱ֮��"NOR,
]),

([ "action" : HIW"$N�������һ��! ʹ��һ�С�  ����̽·	������$n��ǰ, ��������һ�С�  С�������  ��ֱȡ$n�Ҽ�۰�, �˶�ʽ������"+"ӿ, ���˷���ʤ��, ����$N��ʽһ��, ��צʹ��  ��Ӱħ����  ����צ����  ��ɷ������  ��, �Ʒ�Ʈ�Ʋ���, �ֱ���$n��"+"ͷ��������,
 �������ǲ��š�  ħʮ��������  ��, ���ϵ���$n��ȥ, ˲����ʽ�仯, , �ۼ�$n�����Զ���ˡ�\n"NOR,
        "dodge":   -15,
        "parry":   -10,
        "damage":   180,
        "force":    250,
        "damage_type" : HIR"����ʧѪ"NOR,
]),
});

// can enable

int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="parry");
}

// action message

mapping query_action(object me, object weapon)
{
        object *enemy, vim;
        int i, j, gin, kee, sen;

        if(random(10) > 8) {
           enemy = me->query_enemy();
           j = random(sizeof(enemy));
           vim = enemy[j];
           message_vision("$N�����Ϸ���һ��ħ�磬˲ʱ��$n��״̬�Ѿ�����ǰ��\n",me,vim);
           gin = vim->query("eff_gin");
           kee = vim->query("eff_kee");
           sen = vim->query("eff_sen");

           vim->receive_damage("gin", gin/15);
           vim->receive_damage("kee", kee/15);
           vim->receive_damage("sen", sen/15);
           me->add("force", (int) -me->query("force")/20);
           COMBAT_D->report_status(vim, 1);
        }
       return action[random(sizeof(action))];
}


string query_parry_msg(string limb)
{
        return parry_msg[random(sizeof(parry_msg))];
}
