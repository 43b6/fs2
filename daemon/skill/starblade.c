//��ҹ���ε��� by roger

#include <combat.h>
#include <ansi.h>
void sp_attack(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":HIG"$N�������е�$w��������Զ����������Ů�������˵�ʫ����Ȧ��һ��ü������ɫ��������Զɽ֮��ü��Ϧ��֮��ϡ������δ������ӯ��ʫ����������"NOR,
        "damage":       30,
        "dodge":        200,
        "parry":         5,
        "force":        200,
        "damage_type":  "����",
        ]),
(["action":HIY"$Nһ��������ͻ������ľ���һ��΢�磬��þ���һĨ��ɫ��$n������ô�ᡢ��ô�ᡢ��ô����ĵ�����һʱ��֪��ε���������ٿû��"NOR,
           "damage":           200,
           "dodge":            20,
           "parry":            10,
           "force":            200,
           "damage_type":  "����"
          ]),
(["action":HIC"$N�ε�������������������Ů�ӵ�һ����������һ�����ʱ���������������ǡ����Ӷ�ʱ������һ������һ������죬����΢΢������һ������ʧ��ĵ�����"NOR,
           "damage":      200,
           "dodge":       -5,
           "parry":       15,
           "force":       200,
        "damage_type":  "����"
           ]),

(["action":HIW"$N�γ�$w�����⾪�ް�������������Գ��ջ������·��ǳ�ȼ�ĵ�Ӱ�����ӵ��۲�����ϡ�����˵����̣��������仨��¥�ˡ������Ĳ��ɿ��ܣ������������С�"NOR,
        "damage":       200,
        "dodge":        -20,
        "parry":        20,
        "force":        200,
        "post_action":          (: sp_attack:),
        "damage_type": "����"
            ]),
(["action":HIG"$N̾Ϣһ������̾Ϣ������������һ��������ʫ�������Ρ��Σ����ﻨ�䣬���ﻨ��֪���٣������ﻨ�䡯������һ��������"NOR,
        "damage":       200,
        "dodge":        -20,
        "parry":        25,
        "force":        200,
        "damage_type": "����"
        ]),
(["action":HIY"$Nһ���ӳ�����һ�����µ��κۣ��������־��ޡ�����������������꣬��һ�ֵĲ���һ����"NOR,
        "damage":       200,
        "force":        200,
        "parry":        30,
        "dodge":        -10,
        "post_action":          (: sp_attack:),
        "damage_type": "����"
        ]),
(["action":HIG"�������磬�����ĵ�Ӱ�������˵�ٻӰ��������ʱ������΢΢�����������������䴦�����˵���磬����ʱ������Щ�������ķ绪�������ޡ�"NOR,
        "damage":       200,
        "parry":        20,
        "dodge":        -10,
        "force":        200,
        "post_action":          (: sp_attack:),
        "damage_type": "����"
        ]),
(["action":HIY"$N������������ϸ��ƻ衯���������Σ���ɫ�ͷף�������ѪҲ�ƵĽ��졣����ת�������п����ʵ�������������ｦ�����졣ÿһ���ӳ���$N�������������ҡ���������"NOR,
        "damage":       200,
        "force":        200,
        "parry":        30,
        "dodge":        0,
        "post_action":          (: sp_attack:),
        "damage_type":  "����"
        ]),

});
int valid_learn(object me)
{
        object ob;
        if( (int)me->query("max_force") < 50)
        return notify_fail("�������������û�а취����ҹ���ε�����\n");
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

void sp_attack(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50){
message_vision(HIM"\n��ô���޵ĵ�����������˭��Ը��Ϊ��һ��������Ϊ��һ��������Ϊ��һ������������\n"NOR,me);
  me->set_temp("conti",1);
   for(i=0;i<3;i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
  me->delete_temp("conti");
                     }
}

