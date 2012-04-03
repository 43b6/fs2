// enable-archery.c
// by airke
// By Swy ������� QC 98/6/23
#include <combat.h>
#include <ansi.h>
inherit SKILL;

void god_att(object me, object victim, object  weapon, int damage);
void shooting_att(object me,object victim, object weapon,int damage);

// �м�ʱ������ $w�ǹ� $c �Ǽ�
//Ӧ���Ҫ��.�������� by poloer
mapping *arrow_action = ({
        ([      "action":
"$N����һ����Ѹ�ٽ�$c����$w֮�ϣ�ʹ�����Ǽ�����һʽ"HIC"��һйǧ�"NOR"���������ˮ��й�㳯$n$l�����ȥ",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
        ]),
([        "action":
"$N������$cѸ�ٴ���$w��Ϊ���������ʹ�����Ǽ����ڶ�ʽ"HIG"��˫��������"NOR"�������֮$c��˫�����ɰ㳯$n��ȥ",
                "dodge":        -100,
                "damage":       130,
                "force" :       130,
                "damage_type": "����",
                "parry":        -100,
        ]),
        ([      "action":
"$N����ͻ�ǣ�������$cѸ�ٴ���$w�����뷢��ʹ�����Ǽ�������ʽ"HIB"�����ֶ��㡱"NOR"�������$c�ƺ���������֮������������$n�����ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":         130,
                "parry":        -100,
                "damage_type": "����",
        ]),
        ([      "action":
"$N��$n���������ţ�������$cѸ�ٴ���$w֮�Ϸ����ļ���ʹ�����Ǽ�������ʽ"HIY"��������衱"NOR"�������$c�������԰���$nǰ��������������ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
        ([      "action":
"$N����ɱ��ͻ�ǣ�������$cѸ�ٴ���$w��������䣬ɱ���ں���$cʹ�����Ǽ�������ʽ"HIW"�������ʬ��"NOR"��$c��$nͷ��˫��˫�������ȥ",
                "dodge":        -100,
                "damage":       110,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
        ([      "action":
"$N������$cѸ�ٴ���$w�����֮��������ת����ʹ�����Ǽ�������ʽ"HIG"�������ֻء�"NOR"��$c������ת����$n�����ȥ",
                "dodge":        -100,
                "damage":       115,
                "foece":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
        ([      "action":
"$N������$cѸ�ٴ���$w��������߼���ʹ�����Ǽ�������ʽ"HIM"���������ߡ�"NOR"��$c�߼�һ������һ���γ�һ�߳�$n�����ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
        ([      "action":
"$N������$cѸ�ٴ���$w���������ʹ�����Ǽ����ڰ�ʽ"HIC"�����ɹ�����"NOR"��$c��ͬ���˹�������翰���$n��֪����",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
                "post_action":  (: god_att :),
        ]),
        ([      "action":
"$N������$cѸ�ٴ���$w��������ż���ʹ�����Ǽ����ھ�ʽ"HIR"���žŹ�Ԫ��"NOR"������ż���һ����$n�޷��м�",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
                "post_action":  (: shooting_att :),
        ]),

});

// ������û��ʱ�Ĺ�������

mapping *bow_action = ({
        ([      "action":               "$N����$w�ݺݵ���$n$l��ȥ",
                "dodge":        -10,
                "damage":       10,
                "parry":        -10,
                "damage_type":  "����",

        ]),
        ([      "action":               "$N�����ػ���$w���Ŵ���$n",
                "dodge":        -5,
                "damage":       15,
                "parry":        -10,
                "damage_type":    "����",

        ]),
});

int valid_learn(object me)
{
        object ob;

if(me->query_skill("archery",1)<15)
                return notify_fail("Ҫ�����Ǽ���Ҫ�����൱�Ĺ���������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type")!="archery")
                return notify_fail("������Ҫ�й������������Ǽ�����\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="archery" || usage=="parry";
}


mapping query_action(object me, object weapon)
{
  int skill_level, limit;
  object wpn = me->query_temp("weapon");
  int i;
//���¼��ж��Ǳ����..
//-----------------------------------------------------
//
// i = Ŀǰ���ϵļ���
  i=wpn->query("arrow/amount");
if ( !userp(me) )
        i ++;

//ս��������Ҳ���뽫����ʼ��
// 1��ʱ��Ϳ��Գ�ʼ��....��Ϊ��ʼ���껹�ṥ��һ��

 if(i==1) {
        tell_object(me, "\n���" + wpn->query("arrow/name") + "�����ˣ�\n\n");
        wpn->set("arrow/id","none");
        wpn->set("arrow/name","�յ�");
        wpn->set("weapon_prop/damage",wpn->query("bow/attack"));

  }
  if (i > 0) {
        i--;
        wpn->set("arrow/amount",i);
                // �����м�ʱ������
        return arrow_action[random(sizeof(arrow_action))];
  }

  if( i <= 0) {
                //����û���Ĺ�������
        return bow_action[random(sizeof(bow_action))];
  }
//----- under by poloer from --------------------------------------------


        skill_level=(int)me->query_skill("god-shooting", 1);
       if (skill_level < 10)
                return arrow_action[random(2)];
        else if (skill_level < 20 )
                return arrow_action[random(3)];
        else if (skill_level < 30 )
               return arrow_action[random(4)];
                else if (skill_level < 50 )
                return arrow_action[random(5)];
               else if (skill_level < 70 )
                       return arrow_action[random(6)];
               else if (skill_level < 80 )
                      return arrow_action[random(6)+1];
        else if(skill_level<90)
return arrow_action[random(6)+2];
        else
return arrow_action[random(6)+3];


}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return notify_fail("��������������������������Ǽ�����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("marksman")+"/god-shooting/"+action;
}

void god_att(object me, object victim, object  weapon, int damage)
{
if((random(80)<me->query_skill("iceforce",1))&&!me->set_temp("break"))
{
victim->start_busy(1);
message_vision(HIB"$N��ʹ���ľ�֮�����ھ�����$n���ھ������������á�\n"NOR, me, victim);

}
}

void shooting_att(object me, object victim, object  weapon, int damage)
{
        int lose, i;
int bellpower = (int)me->query("cps")/3;
        // modify by oda
        // combat_exp ֮�Ƚ�������֮ exp ���� random
        // lose = skill/10 + 1 ��Ϊ random(skill/10) + 3
        // ����������� busy һ�غ�
if(random(100)<70)
        {
        if(bellpower > 5) bellpower=5;
        lose=random(10);
                me->set_temp("berserk", 1);
                for(i = 0;i < lose; i++)
                {
       message_vision(HIR"$N������֧��ʹ������$n�����ȥ��\n"NOR, me,victim);
                       }
                victim->add("kee",-50);
                me->delete_temp("berserk");
                message_vision(HIW"һ����Һ�$N�þ����ȣ��Ͻ��û���Ϣ��\n"NOR,me);

        }
}
