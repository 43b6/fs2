//fumostaff.c
#include <combat.h>
#include <ansi.h>
inherit SKILL;

mapping *action = ({
      ([      "action":         HIW"$N�������� ,һʽ"+HIC"������������"HIW+" ,���е�$wЮ�ź���������$n$l��ɨ��ȥ"NOR,
        "damage":       40,
        "dodge":        10,
        "parry":        -20,
        "damage_type":  "����",
        ]),
   ([      "action":      HIW"$Nһ����Ծ ,����$wб�� ,һ��"+HIR"�������ơ�"HIW+",����ǧ��֮��,�Ӱ����ֱ������"NOR,
        "damage":           50,
           "dodge":           20,
             "parry":          -30,
        "damage_type":  "����"
          ]),
        ([         "action":         HIW"$N˫Ŀ�������� ,�ں����,һ��"+HIB"���ຣ���ġ�"HIW+",����$wѸ�����׵�ӭ��$n$l"NOR,
           "damage":      70,
           "dodge":          0,
            "parry":         -50,
             "force":          100,
        "damage_type":  "����"
           ]),
        ([     "action":     HIW"$N���������д�,����"+HIM"�������㡱"HIW+",���е�$w��������,���˵����$n����һ��"NOR,
           "damage":          80,
        "dodge":        -30,
        "parry":        10,
        "damage_type": "����"
            ]),
     ([      "action":      HIW"$N��һ�¾� ,��͸����,ȫ������������� ,һ��"+HIY"����ħ�ϡ�"HIW+",$w�����Ƶ���$n$l��ȥ"NOR,
        "damage":       100,
        "force":        100,
        "parry":        -30,
        "dodge":        -10,
        "damage_type": "����"
        ]),
      ([      "action":      HIW"$N������ת ,�������� ,һ��"+HIC"��������ħ��"HIW+",�����е�$w���һƬ"NOR,
        "damage":       130,
        "force":        130,
        "parry":        -20,
        "dodge":        0,
        "damage_type": "����"
        ]),
});
int valid_learn(object me)

{
                object ob;

                if( !(ob = me->query_temp("weapon"))

                ||     (string)ob->query("skill_type") != "staff" )

                       return notify_fail("���������һ�����Ȳ������ȷ�\n");

        return 1;
}
int valid_enable(string usage)
{
        return (usage=="staff")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

/*void movedown(object me,object target, object weapon,int damage)
{
        if(random(3)>1)
               return;
        if(me->query("force")<20) return;
        me->add("force",-20);
          message_vision(
        HIG "$Nʹ������ɨ���ϡ� ,���������̿� ,��$n���������������ڵ���֮�� !\n"NOR,me,target);
        if (random(target->query("combat_exp"))<random(me->query("combat_exp")))
          {
                message_vision( GRN "���$n��Ϣһ�� ,��ʱ�������� !\n" NOR,me,target);
                target->start_busy(me->query_skill("gold-blade",1)/20);
          }
           else
                message_vision(   GRN "���$n����һԾ ,���˹�ȥ��\n" NOR,me,target);
}*/
int practice_skill(object me)
{
        object weapon;

        if(me->query("max_force")/10<me->query_skill("gold-blade",1))
        return notify_fail("���������� ,ǿ����ϰ ,ֻ���ܺ���\n");
        if( !objectp(weapon = me->query_temp("weapon"))
        ||      (string)weapon->query("skill_type")!="blade")
        return notify_fail("��Ҫ���ʺϵ�����������ϰ�Ͻ�����������\n");

        if((int)me->query("kee")<30)
                return notify_fail("�������� ,��Ϣһ�������ɡ�\n");
        me->receive_damage("kee",30);
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("bonze")+"/fumostaff/"+action;
}
