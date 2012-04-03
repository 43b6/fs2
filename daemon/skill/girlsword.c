// girlsword.c
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me,object victim,object weapon,int damage);

mapping *action = ({
        ([      "action":               "$Nʹһ��[32m����Ů��������[0m������$wʹ��������������һ������, ��$n��$l���۶���",
                "dodge":                -20,
                "damage":               30,
                "damage_type":  "����"
        ]),
        ([      "action":               "$Nʹ����Ůɢ�������е�[32m����Ů���ӡ�[0m���������, ��������ش���$n��$l",
                "dodge":                -20,
                "damage":               40,
                "damage_type":  "����"
        ]),
        ([      "action":               "$Nһ��[32m����Ů�׻���[0m�����ζ�Ȼ���ڵأ�����$w˳��ն��$n��$l",
                "dodge":                -30,
                "damage":               20,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N����$w�й�ֱ����һʽ[32m��ǧ�����ġ�[0m��׼$n��$l�̳�һ��",
                "dodge":                -40,
                "damage":               50,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N����һԾ������һ��[32m���������ޡ�[0m, $w��׼$n��$l�ͳ�һ��",
                "dodge":                -40,
                "damage":               45,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N�����ϵ�$w������ϣ�˫�ۻ���$n, ��$wһ������һ̤, ��������[32m�������Ы��[0m, $wֱ��$n��$l",
                "dodge":                -20,
                "damage":               50,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N����$w����һ�֣�ʹһ��[32m���������顱[0m���ֶ�׼$n$lһ����ȥ",
                "dodge":                -20,
                "damage":               55,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N�ὣ��ǰ������һת����$wʹһ��[0m��ɢ�����Ρ�[0m����һ���⻡ն��$n��$l",
                "dodge":                -30,
                "damage":               60,
                "damage_type":  "����"
        ]),
        ([
                "action"     : "\t������ʮ�غϺ�, $N����ʹ��Խ��Խ������⣬�Խ���������ҲԽ��һ��, \n
\t�𲽽�[36m����Ů�����ľ��衳[0m�ڻ��ͨ, ����һ���־�����ʽ����ʽ��һ����ʽ, \n
\tһ��һʽ����$n$l\n",
                "dodge"      :               -35,
                "parry"      :               -45,
                "damage"     :                90,
                "force"      :                220,
                "post_action":               (: berserk :),
                "damage_type":               "����"
        ]),
        ([      "action": "    [1;33m���ڵ��˵���ѧҲ����������ȡʤ������������!$Nֻ��ʹ����Ů�����ĸ߼�����!\n
\t\t\t\t��[1;31m��Ы������[1;33m��\n
\t$N�û�����һʱ֮��, �������, ��ͬ��Ů�·�һ��, ��$n�ۻ�����!!![0m\n",
                "parry":             -60,
                "dodge":             -60,
                "force":          350,
                "damage":         150,
                "damage_type":   "����"
         ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취����Ůɢ��������\n");

        if( (string)me->query_skill_mapped("force")!= "fireforce")
                return notify_fail("��Ůɢ�������������ʥ���ڹ�һ��������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
int skill_level, limit;
        skill_level=(int)me->query_skill("girlsword", 1);
        limit= (int)(skill_level/9);
        if (limit < 4 )
                return action[random(4)];
        if (limit < 8 )
                return action[random(limit)];
        else if (limit < 10)
                      return action[random(6)+2];
        else
                return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return notify_fail("�����������������û�а취��ϰ��Ůɢ��������\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ����Ůɢ��������\n");
        return 1;
}

void berserk(object me, object victim, object  weapon, int damage)
{
    int lose, i, un,un1;
        un1 = 0;
        un  = 0;
        if(!me->query_temp("berserk" ))
        {
                lose = (int)(me->query_skill("girlsword", 1)/10 + 1);
                me->set_temp("berserk", 1);
                for(i = 0;i < lose; i++)
                {
                          un = random(10)+1;
                          un1 = un1+0.5*un;
                        me->set_temp("apply/attack", un1);
                        message_vision(HIC"$N����ʹ�����ǡ���Ů����������ʽ��һ���ؿ�Ľ�����Ʈ�ҵ�, ��$n�мܲ��ѡ�\n"NOR, me, victim);
                        victim->receive_damage("kee",2*un1);
                        me->add("force",-3);
           COMBAT_D->report_status(victim);
                }
                me->delete_temp("apply/attack");
                me->delete_temp("berserk");
                message_vision(HIW"ʹ����ʮ�к�$N��Ϣһʱ�������������Ž�վ��ԭ����Ϣ��Ϣ��\n"NOR,me);
                me->start_busy(2);
        }
}
