#include <combat.h>
#include <ansi.h>
void movedown(object me,object target,object weapon,int damage);
inherit SKILL;
mapping *action = ({
// 1
(["action":HIW"$N��������һ��"+HIC"�����ƶϷ塱"HIW+"���ֳ�$w"+HIW+"��$n$l������ȥ��"NOR,
        "damage":       30,
        "dodge":        5,
        "parry":         -5,
        "force":        160,
        "damage_type":  "����",
        ]),
// 2
(["action":HIW"$N�������������$w"+HIW+"б����һ��"+HIR"������Х���ա�"HIW+"������Ӱ����ֱк���¡�"NOR,
           "damage":           60,
           "dodge":           10,
           "parry":            -10,
           "force":            160,
           "damage_type":  "����"
          ]),
// 3
(["action":HIW"$N��ת���ӣ�һ��"+HIB"��ҹս�˷���"HIW+"������$w"+HIW+"Ѹ���ױȵĿ���$n$l��"NOR,
           "damage":      80,
           "dodge":          5,
           "parry":         -10,
           "force":          160,
        "damage_type":  "����"
           ]),
// 4
(["action":HIW"$Nʹ��"+HIM"������էչ��"HIW+"������$w"+HIW+"�������Ļ���$n$l����������������ȴ��ʽ����ʽ��������С�"NOR,
        "damage":          80,
        "dodge":        20,
        "parry":        -20,
        "force":        160,
                "damage_type": "����"
            ]),
// 5
(["action":HIW"$N�ż�һ�㣬���������Ծ��һ�ɶ�ߣ�ʹһ��"+HIG"�����񵹹ҡ�"HIW+"�����϶�������$n��$l��"NOR,
        "damage":    100,
        "dodge":        20,
        "parry":        -20,
        "force":        160,
        "damage_type": "����"
        ]),
// 6
(["action":HIW"$N΢һ�¾������ᵶ�棬һ��"+HIY"����ʯ��ɽ��"HIW+"��$n$lֱ�����¡�"NOR,
        "damage":       100,
        "force":        160,
        "parry":        -20,
        "dodge":        10,
        "damage_type": "����"
        ]),
// 7
(["action":HIW"$N������ת������������һ��"+HIC"��������Ǯ��"HIW+"������$n$l��"NOR,
        "damage":       130,
        "parry":        -10,
        "dodge":        10,
        "force":        160,
        "damage_type": "����"
        ]),
// 8
(["action":HIW"$N�������һ��"+HIG"�����������족"HIW+"���������ְ˷���$n�ٸ���Ϣ��ӿ���ؿڲ�����"NOR,
        "damage":       130,
        "force":        160,
        "parry":        -10,
        "dodge":        10,
        "post_action":          (: movedown :),
        "damage_type":  "����"
        ]),
// 9
(["action":HIW"$N����$w"+HIW+"һ�Σ�һ��"+HIR"��ѩӵ���ء�"HIW+"����$n$lֱ�̶�ȥ��"NOR,
        "damage":       160,
        "force":        160,
        "parry":        -10,
        "dodge":        20,
        "damage_type":  "����"
        ]),
// 10
(["action":HIW"$N�Ʋ�����ʹ��һ��"+HIB"�������Ʋ���"HIW+"�����б仯Ī�⣬����$n$l��"NOR,
        "damage":       160,
        "dodge":        100,
        "parry":        -20,
        "force":        160,
        "damage_type":  "����"
        ]),
});
int valid_learn(object me)
{
        object ob;
        if( (int)me->query("max_force") < 100)
        return notify_fail("�������������û�а취���Ͻ�����������\n");
        if( (string)me->query_skill_mapped("force")!= "sixforce")
                return notify_fail("�Ͻ���������������������ķ���������\n");
        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "blade")
                return notify_fail("���������һ�ѵ�������������\n");
        return 1;
}

int valid_enable(string usage)
{
        return (usage=="blade")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void movedown(object me,object target, object weapon,int damage)
{
if(me->query("force")<20) return;
if(70>=random(100)) {
        me->add("force",-20);
        message_vision(
        HIG "$Nʹ������ɨ���ϡ������������̿�����$n���������������ڵ���֮�£�\n"NOR,me,target);
      message_vision(GRN"���$n��Ϣһ����ʱ�������ã�\n"NOR,me,target);
           target->start_busy(1);
          }
           else {
      message_vision(GRN "���$n����һԾ�����˹�ȥ��\n"NOR,me,target);
}
}

string perform_action_file(string action)
{
if(this_player()->query_skill_mapped("blade")=="gold-blade") {
        return CLASS_D("blademan")+"/gold-blade/"+action;
}
}
