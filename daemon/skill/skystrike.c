
//by poloer
// sky-strike(����ȭ)

inherit SKILL;
inherit SSERVER;
#include <ansi.h>
#include <combat.h>
void burn(object me, object victim, object  weapon, int damage);

mapping *action = ({
        ([      "action":                "$N���������������У�����ͻȻʹ��һ�������ޱȵ�"HIR"��ɥ��������"NOR"����Ϊʵ����$n��$l",
                "parry":                 -60,
                "dodge":                 -60,
                "force":                 250,
                "damage":                280,
                "post_action":               (: burn :),
                "damage_type":   "����"
        ]),
        ([      "action":                "$N�����ƺ�Ȼ���ģ���ʽ������Ȼ����ͻ��������ʹ��һ��"HIM"�������ҺΡ�"NOR"����$n$l",
                "parry":                 -60,
                "dodge":                 -60,
                "force":                 250,
                "damage":                270,
                "post_action":               (: burn :),
                "damage_type":   "����"
        ]),
        ([      "action":                "$N�����ֻ�Բ��������������ʹ��һ��"HIC"���޷����졯"NOR"��˫�ƻ���������Ӱ�׷׻���$n",
                "parry":                 -60,
                "dodge":                 -60,
                "force":                 250,
                "damage":                280,
                "post_action":               (: burn :),
                "damage_type":   "����"
        ]),
        ([      "action":               "$N�����������У���������һ��ʹ��"HIC"��ֻ�����졯"NOR"�����϶������͵ػ���$n��$l",
                "parry":                -60,
                "dodge":                -60,
                "force":                260,
                "damage":               280,
                "post_action":               (: burn :),
                "damage_type":  "����"
        ]),
        ([      "action":                "$N��׼$n��������һ��"HIR"���칷ʳ�ա�"NOR"���ҿ�������������Ю�ž������Ʒ�ȡ$n��Ҫ��",
                "parry":                 -60,
                "dodge":                 -60,
                "force":                 300,
                "damage":                280,
                "post_action":               (: burn :),
                "damage_type":   "����"
        ]),
        ([      "action":                "$N����Ծ��$n��˫��ƽ�ƣ�ʹ��һ��"HIB"���������ա�"NOR"˫����Ȼ���������ڱε������Ȼ�޹�ֱ����$n",
                "parry":                 -60,
                "dodge":                -60,
                "force":                 350,
                "damage":                280,
                "post_action":               (: burn :),
                "damage_type":   "����"
        ]),
        });

void burn(object me, object victim, object  weapon, int damage)
{
         int burn;
         burn=victim->query_condition("burn");
message_vision("$N��������Ϊһ��������$n�����ϲ���,ʹ��$n��������������ʧ\n",me,victim);
         victim->apply_condition("burn",burn+1);
         victim->receive_damage("kee",30);
         victim->add("force",-40);
         COMBAT_D->report_status(victim, 1);
 }


int valid_enable(string usage) { return (usage=="unarmed" || usage=="parry"); }
mapping query_action(object me, object weapon)
{
 int i,force,kee,burn;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 burn=victim->query_condition("burn");
 force=victim->query("force",1);
 kee=220;
        if( random(100) < 10){
             message_vision(HIC"
$N���˵�����ߣ������ʶ��ʶ���������ľ��У��µ���ȥ�ɣ���


"HIB"                 ���һ����      "NOR"


"HIG"           ****��������****      "NOR"
"HIR"$N���������˫������ǰ���ħ��ӡ��˲��һ�������������ȥ����Ȼ��
���ħ���ܲ���һ����ɫ��������$n��ȥ"NOR"
���$n�������У�ȫ����У����嶼���ܶ�����\n",me,victim);


             victim->receive_damage("kee",(int)kee,me);
             COMBAT_D->report_status(victim);
             message_vision("


"HIG"           ****���츲��****    "NOR"
"HIR"$N��Цһ����˫�ƺ�Ϊ������������պ͵���ָȥ����Ȼ���漰��ղ���
�仯��˲����ҡ�ض�������֮����֮��Ϊһ����$nϮȥ
"NOR"���$n������֮����ס�ζ���Ѩ�����彥���е�����\n",me,victim);
             victim->receive_damage("kee",220,me);
             me->start_busy(1);
             COMBAT_D->report_status(victim);

                             }
return action[random(sizeof(action))];
}

