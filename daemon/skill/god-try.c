// enable-archery.c
// by airke
// By Swy ������� QC 98/6/23
#include <combat.h>
#include <ansi.h>
inherit SKILL;

void god_att(object me, object victim, object  weapon, int damage);
void shooting_att(object me,object victim, object weapon,int damage);
void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
int cps=this_player()->query("cps",1);
int sp_value;

string *lan_yan = ({
"$Nʹ�����Ǽ�����һʽ��һйǧ��������$w����һ����â��Ю������ɳ�ˣ�һʱ���̳�����\n",

"$Nʹ�����Ǽ����ڶ�ʽ��˫���������������$w����������â��һ��һ�ң���˫�������\n",

"$Nʹ�����Ǽ�������ʽ�����ֶ��㡯�������$w����������â�������������㣬��ͷ �� �����������ȥ\n",

"$Nʹ�����Ǽ�������ʽ��������衯�������$w�����ĵ���â���������ԣ��������Ĵ��ؽڼ����ȥ\n",

"$Nʹ�����Ǽ�������ʽ�������ʬ���������$w���������â���������ԣ���ͷ����֫�����ȥ\n",

"$Nʹ�����Ǽ�������ʽ�������ֻء��������$w����������â��������â���ϵ���ת�ų�ǰ���ٷ�ȥ\n",

"$Nʹ�����Ǽ�������ʽ���������ߡ��������$w�����ߵ���â���ߵ���â�ų�һ�߼��ɶ�ȥ\n",

"$Nʹ�����Ǽ����ڰ�ʽ�����ɹ������������$w���ɰ˵���â���˵���âȥ�ƺ�����ң���翲���\n",

"$Nʹ�����Ǽ����ھ�ʽ���žŹ�Ԫ���������$w���ɾŵ���â���ŵ���â�ֺ϶�Ϊһ��ȥ��ʮ������\n",
});

// �м�ʱ������ $w�ǹ� $c �Ǽ�
//Ӧ���Ҫ��.�������� by poloer
mapping *arrow_action = ({
//1
        ([      "action":
"$N����$n�����Ѿ���Ѹ�ٽ�$c����$w֮�ϣ�ʹ�����Ǽ�����һʽ��һйǧ����������ˮ��й�㳯$n$l�����ȥ[m",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
        ]),
//2
([        "action":
"$N������$cѸ�ٴ���$w��Ϊ���������ʹ�����Ǽ����ڶ�ʽ"HIG"��˫��������"NOR"�������֮$c��˫�����ɰ㳯$n��ȥ",
                "dodge":        -100,
                "damage":       130,
                "force" :       130,
                "damage_type": "����",
                "parry":        -100,
        ]),
//3
        ([      "action":
"$N����ͻ�ǣ�������$cѸ�ٴ���$w�����뷢��ʹ�����Ǽ�������ʽ"HIB"�����ֶ��㡱"NOR"�������$c�ƺ���������֮������������$n�����ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":         130,
                "parry":        -100,
                "damage_type": "����",
        ]),
//4
        ([      "action":
"$N��$n���������ţ�������$cѸ�ٴ���$w֮�Ϸ����ļ���ʹ�����Ǽ�������ʽ"HIY"��������衱"NOR"�������$c�������԰���$nǰ��������������ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
//5
        ([      "action":
"$N����ɱ��ͻ�ǣ�������$cѸ�ٴ���$w��������䣬ɱ���ں���$cʹ�����Ǽ�������ʽ"HIW"�������ʬ��"NOR"��$c��$nͷ��˫��˫�������ȥ",
                "dodge":        -100,
                "damage":       110,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
//6
        ([      "action":
"$N������$cѸ�ٴ���$w�����֮��������ת����ʹ�����Ǽ�������ʽ"HIG"�������ֻء�"NOR"��$c������ת����$n�����ȥ",
                "dodge":        -100,
                "damage":       115,
                "foece":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
//7
        ([      "action":
"$N������$cѸ�ٴ���$w��������߼���ʹ�����Ǽ�������ʽ"HIM"���������ߡ�"NOR"��$c�߼�һ������һ���γ�һ�߳�$n�����ȥ",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
        ]),
//8
        ([      "action":
"$N������$cѸ�ٴ���$w���������ʹ�����Ǽ����ڰ�ʽ"HIC"�����ɹ�����"NOR"��$c��ͬ���˹�������翰���$n��֪����",
                "dodge":        -100,
                "damage":       130,
                "force":        130,
                "parry":        -100,
                "damage_type": "����",
                "post_action":  (: god_att :),
        ]),
//9
        ([      "action":
"$N������$cѸ�ٴ���$w��������ż���ʹ�����Ǽ����ھ�ʽ"HIR"���žŹ�Ԫ��"NOR"������ż���һ����$n�޷��м�",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
                "post_action":  (: shooting_att :),
        ]),
//10
        ([      "action":
"        $N�������Ǽ���֮��ʽ�������ʽ��������ʹ������Ϊһʽ\n"
"            ����������������衫�����š������졫��������      \n"
"        ��ʽ��������ͬʱ����㣬$c��Ϊ�������ǳ���$n$l������ȥ",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
                "post_action":  (: sp_attack1 :),
        ]),
//11
        ([      "action":
"        $N�����ľ�֮�ھ�������$c�ϣ�������$c����$w�������Ϊһʽ\n "
"            ����������ʮ�������򡫡����𡫡���������������      \n"
"        ���ƿ�������������$cȥ����翲����ĳ���$n���弲�ٷ�ȥ��    ",
                "dodge":        -100,
                "damage":       130,
                "parry":        -100,
                "force":        130,
                "damage_type": "����",
                "post_action":  (: sp_attack2 :),
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

void sp_attack1(object me, object victim, object  weapon, int damage)
{
  string do_action;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string actionn;
  int i,j,force;

  force=me->query("force",1);
  enemy = me->query_enemy();
  i=random(sizeof(enemy));

//������ 1/2*1/7=~7%
if( me->query("family/family_name")=="������"){
message_vision(HIY"
giggle
\n"NOR,me,victim);

  if( me->query("max_force") > 1000) {
    for(j=0; j < 9; j++) {
       do_action = lan_yan[j];
       actionn = "\n";
       actionn += do_action;

       if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
       message_vision(actionn, me, enemy[i]);
          if( random(me->query("combat_exp")) >
        random(enemy[i]->query("combat_exp"))/6 ) {
        message_vision("\n����$N���㲻�������ϲ���һֻֻ��������\n" ,enemy[i]);
        enemy[i]->receive_damage("kee",50,me);
        me->add("force",-30);
        COMBAT_D->report_status(enemy[i]);
                                                  }
   else message_vision("\n$N��׼�������ƣ����Ų�æ���������ܡ�\n" ,enemy[i]);
     if( random(me->query("cps")) < 10 && random(me->query("combat_exp",1)) < 1000000) {
        me->add("force",-100);

message_vision("\n$Nʹ��"HIR"�����������硫�����衫�����š������졫��������"NOR"�����ڶ������鲻�㣬��������һʱ����Ϊ��\n",me);
        me->start_busy(1);
                                        }
                                                  }
                                             }

}
}
