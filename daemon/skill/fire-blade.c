#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack(object me, object victim, object weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int i;
mapping *action = ({
//1
       ([    "action" :
"$N���һ�㣬����һ�䣬ʹ��"HIR"����ľ���֡�"NOR"������$w��$n������ȥ��",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       110,
             "force"  :       160,
             "damage_type": "����",
        ]),
//2
       ([    "action" :
"$N������$w��һ��"HIR"���ƻ���ľ��"NOR"��$n����֮ʱ�����ַ��ƶ�׼$n����һ����",
             "dodge" :   -10,
             "parry" :   -30,
             "damage" :  120,
             "force"  :  160,
             "post_action":  (: attack :),
             "damage_type" :   "����",
         ]),
//3
        ([   "action" :
"$N�����ھ�����������ע$w��һ��"HIG"��ľ�ѳ��ۡ�"NOR"�����۰�ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         130,
             "force"  :         160,
             "damage_type":  "����",
        ]),
//4
        ([   "action" :
"$NۀԾ������վ�����һ��"HIG"��һ�����ϡ�"NOR"��������ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         140,
             "force"  :         160,
             "post_action":  (: attack :),
             "damage_type":  "����",
        ]),
//5
        ([   "action" :
"$Nһ��"HIY"���ǻ���ԭ��"NOR"����$w�����������ٿ��£��ܱ߿�������ȼ�հ㱬����⡣",
             "dodge"  :        -10,
             "parry"  :        -30,
             "damage" :        150,
             "force"  :        160,
             "damage_type":  "����",
        ]),
//6
        ([   "action" :
"$N�Ӷ�����$wʹ��"HIY"��Եľ���㡱"NOR"ֻ��$w��һ��������$n��������С�",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       160,
             "force"  :       160,
             "post_action":  (: attack :),
             "damage_type":  "����",
        ]),
//7
        ([   "action" :
"$Nʹ��"HIB"�����׳�н��"NOR"��ֻ��$w��������ֱ��$n��$N��˳����ת��$n������һ����",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         170,
             "force"  :         160,
             "damage_type":  "�Ƕ�֮��",
        ]),
//8

        ([      "action":
"$N��$wһ�ʹ��"HIB"��ȼľ����"NOR"�������Դ����ȵ���������ֱ��$n��",
                "dodge":  -10,
                "parry":  -30,
                "damage": 180,
                "force":  160,
                "damage_type":  "����",
        ]),
//9
        ([      "action":HIW
"$N�ھ�һ�£�ʹ��"HIM"����ľ�ɵ�"HIW"��������������ע��$w"HIW"����$n�����ȥ\n"
"$n֪���в���Ӳ�������ؾ����Ҫ�������У�ȴ��֪��Ӱ���Σ�$N�����һ�ԵȺ�\n"
"��ס����˫���ಢ���£����$w"HIW"�������������"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       190,
                "force":        160,
                "post_action":  (: attack :),
                "damage_type":  "����֮��",
        ]),
//10
       ([      "action" :HIW
"$N�ھ����£�ʹ��"HIM"������ն�m��"HIW"����ת��ʮ�ɹ������ֱ�ע��������$w"HIW"���ۼ�\n"
"$n����������$N���첻�ܣ�����һ��Ӳ�ǰѹ��Ƹ���������������ͬʱ������$w"HIW"����\n"
"��ȥ��$n�޴Ӷ��α�����Ŀ���Ҫ����"NOR,
               "dodge":         -10,
               "parry":         -30,
               "damage":        200,
               "force":         160,
               "post_action":  (: attack :),
               "damage_type":   "Ѫ��֮��",
        ]),
//11
       ([      "action" :HIC
"$N������Ϣ����ת������ʹ��"HIB"����ˮ��н��"HIC"��ֻ��������һ˳���ɺ��ǰ�����¶���\n"
"$n��ʱ��Ӧ����Ӳ�ǳ���$w"HIC"һ�ǡ�"NOR,
                "dodge" :       -10,
                "parry" :       -30,
                "damage":       220,
                "force" :       160,
                "post_action":  (: attack :),
                "damage_type":  "����",
        ]),
//12
       ([ "action" :HIC
"$Nʹ��ȼľ����������һ��"HIW"������������"HIC"�������ƿ죬����Ԧ�أ�����˸գ������ۺ���ھ�\n"
"ʹ$n���в��У�$N�����ӿ칥�ƣ�$w"HIC"ֱͦ����ֱ��$n��"NOR,
"dodge": -10,
"parry": -30,
"force": 160,
"post_action":  (: attack :),
"damage": 220,
"damage_type": "����",
]),

});
mapping query_action(object me, object weapon)
{
int skill, limit, f;
skill=(int)(me->query_skill("fire-blade", 1));
limit=(int)(skill/10);
if(limit<3)
{
return action[random(2)];
}
if(limit<4)
{
return action[random(3)];
}
if(limit<5)
{
return action[random(4)];
}
if(limit<6)
{
return action[random(5)];
}
if(limit<7)
{
return action[random(6)];
}
if(limit<8)
{
return action[random(7)];
}
if(limit<9)
{
return action[random(8)];
}
if(limit<10)
{
return action[random(10)];
}
else
{
return action[random(12)];
}
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force",1)<1000)
        return notify_fail("�������������������ȼľ������\n");
        if((string)me->query_skill_mapped("force")!= "woodforce")
        return notify_fail("ȼľ�����������ľ���ķ������á�\n");
 if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
        return notify_fail("������е�������������\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="blade" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/fire-blade/" + action;
}

void attack(object me, object victim, object weapon, int damage)
{
int a,lv=me->query_skill("fire-blade",1);
if ( lv >= 80) { a=7; }
else a=4;
switch(random(a))
{
          case 0:
                    damage = 4*(str+cor)+cps+kar+spi+int1;
message_vision(sprintf(HIW"\n$Nȷʵ����$nҪ����$n��ʱѪ�����ء�\n"NOR),me,victim);
                    victim->receive_damage("kee",damage);
                    COMBAT_D->report_status(victim);
                    break;

          case 1:
message_vision("$N���˵��Ｑ��������ȴ��$n���ƣ�ֻ������Ϊ�ء�\n",me,victim);
                    break;

          case 2:
message_vision(sprintf(HIW"\n$N��һ��ǿ��ʹ$n��������������\n"NOR),me,victim);
                    victim->start_busy(random(2)+1);
                    COMBAT_D->report_status(victim);
                    break;

          case 3:
message_vision("$N��$n��Ϣ���ң�����������ȴ��$n���ƣ��޹�������\n",me,victim);
                    break;

          case 4:
damage=4*(cps+int1)+str+cor+kar+spi;
message_vision(HIW"\n$N������������$n������������֮ʱ����ָ������㣬��ȥ��$n���������\n"NOR,me,victim);
if(victim->query("force",1)>0)
{ victim->add("force",-(victim->query("force",1)/2)); }
                   victim->add("kee",-damage);
                   COMBAT_D->report_status(victim);
                   break;

          case 5:
message_vision("$N��ת������ȴ�޷���ʱ���ţ����ò��ݻ����ơ�\n",me,victim);
                    break;
          case 6:
message_vision(sprintf(HIW"\n$N����ʮ�ɹ��������������ϸ���Ѩ��׼���Ż���$n�����˺���\n"NOR),me,victim);
me->set_temp("addpower",1);
          break;
       }
}
