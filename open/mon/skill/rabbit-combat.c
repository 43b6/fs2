inherit SKILL;

mapping *action = ({
        ([      "action":               "$N������������$n��$l�ݺݵ�һҧ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 170,
                "damage":                170,
                "damage_type":  "ҧ��"
        ]),
        ([      "action":               "$N�������ſ���$N�Ĵ��������$n��$l�ݺݵ�һҧ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 230,
                "damage":                230,
                "damage_type":  "ҧ��"
        ]),
        ([      "action":               "$N��������$N��ǰ����$n��$l������һץ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 300,
                "damage":                300,
                "damage_type":  "ץ��"
        ]),
        ([      "action":               "$N��������$Nǿ�������Ľ���$n��$l�ݺݵ�һ��!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 350,
                "damage":                350,
                "damage_type":  "����"
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
