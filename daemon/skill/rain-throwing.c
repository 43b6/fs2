// rain-throing.c
// By Swy ������� QC 98/6/23
// ��ǿ�����Է��ֽ� fs by swy
// ��΢�޸��������� by unfinished
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void throw_weapon(object,object,object,int);
mapping *action = ({
        ([      "action":               "$N������$w����һ֣��һ�С�"HIY"������"NOR"����ֻ��һ���׹���$n$l��ȥ",
                "dodge":        -30,
                "damage":       50,
                "force":        50,
                "parry":        -30,
  "damage_type" : "����",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$N����ɢ��һ���׹⣬һ�С�"HIC"ɢ�׷�"NOR"��$wƮ����������$n$l��ȥ",
                "dodge":        -30,
                "damage":       60,
                "force":        60,
                "parry":        -30,
  "damage_type" : "����",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$Nһ�С�"HIW"�ǵ�����"NOR"���������$wɢ��������Ӱ��$n��ȥ",
                "dodge":        -30,
                "damage":       70,
                "force":        70,
                "parry":        -30,
   "damage_type" : "����",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$Nһ�С�"HIG"��\������"NOR"���������$w����Uӥ�۷ɣ���$n$lֱ����ȥ",
                "dodge":        -40,
                "damage":       100,
                "force":        100,
                "parry":        -40,
    "damage_type" : "����",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":              "$Nһ�С�������ӿ���������$w�Լ��˵��ٶȷ���$n��$lȥ",
                "dodge":        -55,
     "damage_type" : "����",
                "damage":       150,
                "force":        150,
                "parry":        -50,
                "post_action":  (: throw_weapon :),
        ]),
});

int valid_learn(object me)
{
        object ob;

        if(me->query_skill("throwing",1)<20)
                return notify_fail("Ҫ��������Ҫ�����൱�İ���������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type")!="throwing")
                return notify_fail("������Ҫ�а��������������ꡣ\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="throwing" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return notify_fail("����������������������������ꡣ\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("killer")+"/rain-throwing/"+action;
}
void throw_weapon(object me, object victim, object weapon, int damage)
{
int am;
if( objectp(weapon) ) 
{
if( (int)weapon->query_amount()==1 ) 
{
weapon->unequip();
tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
}
    //��ΪLeei�ӵ�
else  
{
am=random(3)+1;
if ((int)weapon->query_amount() >30 &&random(
me->query_skill("rain-throwing",1)+me->query_skill("throwing",1)) >=
random(300) && (int)me->query("force") > 20)  
{
victim->receive_damage("kee",50+am*me->query_skill("rain-throwing",1));
me->add("force",-20);
message_vision(sprintf(HIC"$N��ץ��һ��"+weapon->query("name")+""+HIC+"��׼$n���ٵ���ȥ,$n��ܲ���,ȫ�����С�\n"NOR),me,victim);
weapon->add_amount(-am);
}
if (random(me->query_skill("rain-throwing",1)) > 55 && (int)weapon->query_amount() >30 && me->query("quest/island") >0)
{
if (me->query_temp("star_kill")!=1) me->set_temp("star_kill",1);
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
me->delete_temp("star_kill");
}
COMBAT_D->report_status(victim);
}
    //����Ϊֹ
weapon->add_amount(-1);
}
}
