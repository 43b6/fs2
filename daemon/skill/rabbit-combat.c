inherit SKILL;

mapping *action = ({
        ([      "action":               "$N扑上来张嘴往$n的$l狠狠地一咬!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 170,
                "damage":                170,
                "damage_type":  "咬伤"
        ]),
        ([      "action":               "$N扑上来张开了$N的大嘴疯狂地往$n的$l狠狠地一咬!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 230,
                "damage":                230,
                "damage_type":  "咬伤"
        ]),
        ([      "action":               "$N扑上来用$N的前脚往$n的$l用力地一抓!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 300,
                "damage":                300,
                "damage_type":  "抓伤"
        ]),
        ([      "action":               "$N扑上来用$N强而有力的脚往$n的$l狠狠地一踢!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 350,
                "damage":                350,
                "damage_type":  "踢伤"
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
