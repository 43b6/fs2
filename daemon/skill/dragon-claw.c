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
mapping *action = ({
//1
       ([    "action" :HIW
"$N�������ƣ��Ʊ仯��צ��һ��"HIR"��˫�����顱"HIW"��˫צ������������㣬�ɿ��\n"
"ץ��$n��Ҫ����$n�ۼ�˫צ�빥ֻ�����ܣ�����������һ����$l������ּ�֮ʹ��"NOR,
             "damage" :       150,
             "force"  :       150,
             "damage_type": "ץ��",
        ]),
//2
       ([    "action" :HIW
"$Nһ��"HIR"��������ء�"HIW"��צֱ�£��������ҵĸ�����˳����$n�Ĺ��ƣ�����Ϊ���ķ���ס\n"
"$n�Ĺ��ƣ�$n��ʱ�����мܣ���$N����Ļ������ţ�����³�Ѫ����"NOR,
             "damage" :  150,
             "force"  :  150,
             "post_action":  (: attack :),
             "damage_type" :   "ץ��",
         ]),
//3
        ([   "action" :HIW
"$N������Ϣ��һ��"HIM"��������顱"HIW"����צ���Ʒֱ����$n�����㣬$n�˴�ʧ�˲�ж��\n"
"$N����צȴ�޴����ܣ�����ʵʵ����$Nһ�����ƣ������Ѫʧ����"NOR,
             "damage" :         200,
             "force"  :         200,
             "damage_type":  "����",
        ]),
//4
        ([   "action" :HIW
"$N��Ծ����������ӯ��һ��"HIM"������������"HIW"˫�ƴ�����˷��빥���£�������������˰�\n"
"��Ҫ��$n��û��$n�������������й���ȫ��ֵ���������Ӳ��Ӳ��������$n������Ѫ��"NOR,
             "damage" :         200,
             "force"  :         200,
             "post_action":  (: attack :),
             "damage_type":  "����",
        ]),
//5
        ([   "action" :HIW
"$N�����������һ����һ��"HIG"���������ˡ�"HIW"˫צ���ң�Χ����$n�Ż������ػ���˲��$N��\n"
"��$n���㣬˫צЮ�����ҵ���������$n����ץȥ��$n�������ܵ����Ǳ�ǿ����������ˡ�"NOR,
             "damage" :        250,
             "force"  :        250,
             "damage_type":  "����",
        ]),
//6
        ([   "action" :HIC
"$N�ȹ����̣���������ȫ��һ��"HIG"���������硱"HIC"˫��������$N�������º����Ļ���\n"
"˫�ƣ�˫��������ɨ��ȥ��$n�����໥�Գ壬�������������$n���ˤ���ڵء�"NOR,
             "damage" :       250,
             "force"  :       250,
             "post_action":  (: attack :),
             "damage_type":  "����",
        ]),
//7
        ([   "action" :HIC
"$N������Ϣ���Ż��������ۼ�$n��Ϣ���̣��������꣬һ��"HIB"����ɽ��Х��"HIC"��������ԥ������\n"
"�춥������˲ʱ�仯�������˫ȭ��ֱ��$n����ֱ���ȥ��$n��ʱ�������Ѫ���ڣ��������ҡ�"NOR,
             "damage" :         250,
             "force"  :         250,
             "post_action":  (: attack :),
             "damage_type":  "����",
        ]),
//8

        ([      "action":HIC
"$N�����ھ�����ת���죬һ��"HIB"��������Ұ��"HIC"��$n��������������������������Ӳ��Ҫ����\n"
"�����£����ھ�����ƽ������ȴ�̺�������ھ�����$n����ʱ���������ѹᴩ������������������"NOR,
                "damage": 300,
                "force":  300,
                "post_action":  (: attack :),
                "damage_type":  "����",
        ]),
//9
        ([      "action":HIC
"$N��ת��˫צ��һ��"HIY"��������ˮ��"HIC"��˫צ���������¶��ϣ��ɺ���ǰ����$n�͹���ȥ\n"
"$n��ʱ���������粨����ӿ�ľ������������޴룬��ʱ�������������ȣ�������س�Ѫ��"NOR,
                "damage":       300,
                "force":        300,
                "post_action":  (: attack :),
                "damage_type":  "����",
        ]),
//10
       ([      "action" :HIC
"$N����ȫ��������������ȫ�����²��죬һ��"HIY"���������顱"HIC"��Ю��ǿ��������$n���ϻ���\n"
"��ʮ�У����нԻ���$n���ϸ���Ѩ��$n����ȫ����ȫ���ֵ���ȴ�޷�ж��棬�����ھ�ƴ����"NOR,
               "damage":        300,
               "force":         300,
               "post_action":  (: attack :),
               "damage_type":   "��������",
        ]),

});
mapping query_action(object me, object victim, object weapon)
{
int skill, limit;
skill=(int)(me->query_skill("dragon-claw", 1));
limit=(int)(skill/10);
if(random(100) < 60)
{
if(!me->query_temp("goldheal")&&random(100)<50)
{
message_vision(sprintf(HIY"\n$N���һ��ʹ�����־�ѧ�������֡�����ʱ�������һ����ǽ¤����$N���ԡ�\n"NOR),me);
me->set_temp("goldheal",1);
} else if(!me->query_temp("unsuck")) {
message_vision(sprintf(HIY"\n$N����ȫ���ھ�ʹ��ʮ�ɡ������֡�����ͼҪ�ѵ��˹��������ȥ��\n"NOR),me);
me->set_temp("unsuck",1);
}
}
if(limit<3)
{
return action[random(2)];
}
if(limit<5)
{
return action[random(4)];
}
if(limit<7)
{
return action[random(6)];
}
if(limit<9)
{
return action[random(8)];
}
else
{
return action[random(10)];
}
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force",1)<3000)
        return notify_fail("���������������������צ�֡�\n");
        if((string)me->query_skill_mapped("force")!= "dragonforce")
        return notify_fail("ȼľ����������������������á�\n");
        if(ob=me->query_temp("weapon"))
        return notify_fail("��������������������צ�֡�\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/dragon-claw/" + action;
}

void attack(object me, object victim, object weapon, int damage)
{
switch(random(6))
{
          case 0:
                    damage = (str+cor+cps+kar+spi+int1)+120;
message_vision(sprintf(HIR"\n$N����צ��ȷȷʵʵ����$n��$n��ʱѪ�����أ��ж��仺��\n"NOR),me,victim);
                    victim->receive_damage("kee",damage);
                    victim->start_busy(1);
                    victim->apply_condition("bleeding",10);
                    COMBAT_D->report_status(victim);
                    break;

          case 1:
message_vision("$N���˵��Ｑ��������ȴ��$n���ƣ�ֻ������Ϊ�ء�\n",me,victim);
                    break;

          case 2:
                    damage = (str+cor+cps+kar+spi+int1)*2+50;
message_vision(sprintf(HIR"\n$N���������ھ�Ǳ��$n���ڣ�ֻ��$n��һ����һ��ף��ƺ��������ء�\n"NOR),me,victim);
                    victim->receive_damage("kee",damage);
                    victim->apply_condition("hurt",5);
                    COMBAT_D->report_status(victim);
                    break;

          case 3:
message_vision("$N��$n��Ϣ���ң�����������ȴ��$n���ƣ��޹�������\n",me,victim);
                    break;

          case 4:
                   damage=(cps+int1+str+cor+kar+spi)*2+50;
message_vision(HIW"\n$N������������צ���໥��ӳ�������ھ��ش�$n��ʹ$n��Ѫ���£��޷�������\n"NOR,me,victim);
if(victim->query("force",1)>0) victim->add("force",-(damage*5));
                   victim->receive_damage("gin",damage);
                   victim->receive_damage("kee",damage);
                   victim->receive_damage("sen",damage);
                   COMBAT_D->report_status(victim);
                   break;

          case 5:
message_vision("$N��ת������ȴ�޷���ʱ���ţ����ò��ݻ����ơ�\n",me,victim);
                    break;

       }
}
