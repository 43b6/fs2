#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me,object victim,object weapon,int damage);
mapping *action = ({
        ([      "action":               "$N������������$n��$l�ݺݵ�һҧ",
                "dodge":                -200,
                "parry":                -200,
                "damage":                200,
                "force":                200,
                "damage_type":  "ҧ��",
                "post_action":               (: berserk :)

        ]),
        ([      "action":               "$N������������$n��$l�ݺݵ�һҧ",
                "dodge":                -200,
                "parry":                -200,
                "damage":                300,
                "force":                300,
                "damage_type":  "ҧ��",
                "post_action":               (: berserk :)

        ]),
        ([      "action":               "$N������������$n��$l�ݺݵ�һҧ",
                "dodge":                -200,
                "parry":                -200,
                "damage":                400,
                "force":                400,
                "damage_type":  "ץ��",
                "post_action":               (: berserk :)

        ]),
        ([      "action":               "$N������������$n��$l�ݺݵ�һҧ",
                "dodge":                -200,
                "parry":                -200,
                "damage":                500,
                "force":                500,
                "damage_type":  "ҧ��",
                "post_action":               (: berserk :)
        ]),
});

int valid_learn(object me)
{
        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        return 1;
}
void berserk(object me, object victim, object  weapon, int damage)
{
int j=0;
if (me->query_temp("earthkill")!=1)
{
me->set_temp("earthkill",1);
for(j = 0;j < 3; j++)
{
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
me->delete_temp("earthkill");
}
}
