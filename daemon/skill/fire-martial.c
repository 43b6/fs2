inherit SKILL;
#include <ansi.h>
void sword(object me, object victim, object weapon, int damage);

mapping *action = ({
//1
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"��ȭ"HIG"]"NOR"
                       "HIR"_
                ������"HIR"("HIY"@"HIR")"HIR"
                       ^"NOR"
��ʱ���է��,һ��С�����$N�������������,����$n!\n",
        "dodge":-20,
        "parry":-30,
        "force":200,
        "damage":200,
        "damage_type":"����",
        ]),
//2
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"�������"HIG"]"NOR"
                  "HIG">"NOR+YEL"--------"HIR">"NOR"
                  "HIG">"NOR+YEL"------"HIY"@"NOR+YEL"-"HIR">"NOR"
                  "HIG">"NOR+YEL"--------"HIR">"NOR"
$N˫�ֵĻ���û�����ʮ֦�Ļ����,ÿһֻ������·�
������һ���,�׷׷���$n��\n",
        "dodge":-30,
        "parry":-50,
        "force":400,
        "damage":400,
        "damage_type":"����",
        ]),
//3
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"����"HIG"]"NOR"
                        ������ "HIR"��"NOR"
                   "HIW"����������"HIR"��"HIY"��"HIR"��"NOR"
                   "HIW"��������"HIR"��"HIY"��"HIC"��"HIY"��"HIR"��"NOR"           
                   "HIW"��������  "HIR"��"HIY"��"HIR"��"NOR"
                               "HIR"=="NOR"
$N����·�һ�ž޴�Ļ����Χ��
ͻȻ��,����Ʈ����$N�����弱�ٵĳ���$n!!\n",
        "dodge":-50,
        "parry":-50,
        "force":800,
        "damage":800,
        "damage_type":"����",
        ]),
//4
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"����"HIG"]"NOR"
                                 "HIR"����"NOR"
                        "RED"������ "HIR"��"HIY"����"HIR"�� "NOR+RED"������"NOR"
                        "RED"������"HIR"��"HIY"��"HIC"���"HIY"��"HIR"��"NOR+RED"������"NOR"
                        "RED"������"HIR"��"HIY"��"HIC"���"HIY"��"HIR"��"NOR+RED"������"NOR"
                        "RED"������ "HIR"��"HIY"����"HIR"�� "NOR+RED"������"NOR"
                                "HIR" ����"NOR"
$N��˫��ð�����ܵĻ���,һ�ɻ��溣�˳��$N��˫��������$n!!\n",
        "dodge":-50,
        "parry":-80,
        "force":1000,
        "damage":1000,
        "damage_type":"����",
        ]),
//5
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"���ǽ��"HIG"]"NOR"
                                "HIR"��
                        ��������"HIY"��"HIR"��
                        �����"HIY"����"HIR"���
                        ������"HIY"����"HIR"��
                        ���� ��"HIY"���"HIR"�� ��      
                                ��"NOR"
$N��˫���ڿ��л滭��һ���޴������ͼ,�·�һ�ž޴��ȼ��֮��
һ��,��ҫ�����۵Ļ��,Χ����$n������!!\n",
        "dodge":-100,
        "parry":-100,
        "force":1500,
        "damage":1500,
        "damage_type":"����",
        ]),
//6
        (["action":"
        $N�ֽ�"HIW"��"HIR"����ӡ"HIW"��"NOR",����Ѹ�ٵķ���
           ������ʮ�����Ƹ��Խ����ӡ

             "HIW"$N��һ��---"HIG"["HIR"�����ؽ�"HIG"]"NOR"

                ��"HIG"��"HIW"�ߣߣߣߣߣߣߣߣߣߣߣߣߣ�
        "HIW"�S"HIR"��������"HIG"��"HIM"���������������������������� ...
        "HIY"��"HIR"�̩k�k�k"HIG"��"HIM"�ƦӦƦӦƦӦƦӦƦӦƦӦƦ�
                ��"HIG"��"NOR"
$N����������,�����ĸ���һ�ѻ���֮��...\n",
        "dodge":-100,
        "parry":-100,
        "force":1500,
        "damage":1500,
        "post_action":  (:sword:),
        "damage_type":"����",
        ]),
});

void sword(object me,object victom,object weapon,int damage)
{
int sk=(int)me->query_skill("fire-martial");
        message_vision(HIR"$N���ս�������������ð����ħ������������Ŀ���$n\n\n"NOR,me,victom);
        message_vision(HIY"$NͻȻ֮��ʹ��"HIG"��"HIW"��ն"HIG"��"HIY"��Ѹ�ײ����ڶ�֮����$n���Ͽ�ȥ��\n\n"NOR,me,victom);
        if( random(sk) > random(victom->query_skill("dodge")/5) )
        {
                message_vision(HIM "$N��"HIG"["HIR"�����ؽ�"HIG"]"HIM"�Ѿ���$n���ؿڴ���һ����ɼ��ǵ��˿ڣ�\n\n" NOR,me,victom);
                victom->receive_wound("kee",sk);
                COMBAT_D->report_status(victom, 1);
                COMBAT_D->report_status(victom, 1);
                COMBAT_D->report_status(victom, 1);
                for( int i = 1 ; i < 4 ; i++ )
                {
                        message_vision(HIW"����һ��, "HIG"["HIR"�����ؽ�"HIG"]"HIW"���ŷɽ�����Ѫ����, ˳�ƺ���һ��\n"NOR,victom);
                        victom->receive_wound("kee",sk/i);
                        COMBAT_D->report_status(victom, 1);
                        COMBAT_D->report_status(victom, 1);
                        COMBAT_D->report_status(victom, 1);
                }
        message_vision(HIC"\n���ݡ���һ��, $NѸ�ٵĽ�"HIG"["HIR"�����ؽ�"HIG"]"HIC"�ջ�������!!\n"NOR,me);
        me->start_busy(1);
        }
   else
    {
        message_vision(
        HIC "$Nһ�������쳣����ææ��������, �㿪����������һ����\n" NOR,victom);
        me->start_busy(2);
     }
}

int practice_skill(object me)
{
        return notify_fail("����ѧ�޷�������ϰ��\n");
}

mapping query_action()
{
        return action[random(sizeof(action))];
}

int valid_enable(string usage)
{
        return (usage=="unarmed"||usage=="parry");
}

int valid_learn(object me)
{
        return notify_fail("��������޷�ѧϰ��\n");
}

