#include <combat.h>
#include <ansi.h>
inherit SKILL;
void upforce(object me, object victim, object  weapon, int damage);
void god_att(object me, object victim, object  weapon, int damage);
void shooting_att(object me,object *victim,object weapon,int damage);
int remove_upforce(object me);

mapping *arrow_action = ({
// 1
        ([      "action":
HIR" $N"NOR" �����ת"CYN"��"NOR"����է��"CYN"��"NOR"��ʱ��"CYN"��"NOR
"$c����"HIB"$N"NOR"$PӦ�ּ���$w֮��"CYN"��"NOR"��������ȥ"CYN"��"NOR
"ɲʱ$c�Ѵ�"HIB"$N"NOR"֮�ַ��� "HIY"$n"NOR" ��$l"CYN"��"NOR,
                "dodge":       -10,
                "parry":       -30,
                "damage":       200,
                "force":        200,
                "damage_type": "����",
                ]),
// 2
        ([      "action":
HIR" $N"NOR" ʹ�����ŵ�ָ��"CYN"��"NOR"���������һ֧$c"CYN"��"NOR"����"HIB"$N"
NOR"$P���ֱ��ڿ���˦��һ����Բ"CYN"��"NOR"ֻ��$c����������� "HIY"$n"CYN" ��"
NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       200,
                "force":        200,
                "damage_type": "����",
                "post_action":  (:upforce:),
        ]),
// 3
        ([      "action":
HIR" $N"NOR" �߾���$w"CYN"��"NOR"������$c˳��$w�ڰ���л���һ�������Ļ���"CYN"��"
NOR"��ʽһ��"HIC"��"HIG"��İ�˻�"HIC"��"NOR"�� "HIY"$n"NOR" ��$l����ֱȥ"CYN
"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       200,
                "force":        200,
                "damage_type": "����",
        ]),
// 4
        ([      "action":
HIR" $N"NOR" ���ɵؽ�$c����$w֮��"HIW"��"NOR"ʹ�����Ǽ���������ʽ"HIC"��"HIM
" һйǧ�� "HIC"��"HIW"��"NOR"��ʱ�����籼����Ӽ�ȥ"HIW"��"NOR"�ݵض���"HIW
"��"NOR"ֱ�� "HIY"$n"NOR" ������"HIW"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       100,
                "force":        100,
                "damage_type": "����",
   "post_action":    (: upforce :),
        ]),
// 5
        ([        "action":
HIR" $N"NOR" �����������˲����Ϲ���$w��֮$c"HIW"��"NOR"ʹ�����Ǽ���������ʽ"
HIC"��"HIB" �������� "HIC"��"HIW"��"NOR"ֻ��$c�����������"HIC"��"NOR
"��������ɰ�س� "HIY"$n"NOR" ��$l�񱼻�ȥ"HIC"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       150,
                "force" :       150,
                "damage_type": "����",
                "post_action": (:god_att:),
]),
// 6
        ([      "action":
HIR" $N"NOR" ����Ӣ֮�ƻص�����"HIC"��"NOR"����̬֮ȡ��$c����$w"HIC"��"NOR
"��ָ֮��$c�����"HIC"��"NOR"���������Ǽ���������ʽ"HIW"��"HIY"�����"
HIW"��"HIC"��"NOR"���Ʋְ�����"HIC"��"NOR"ֱ�� "HIY"$n"NOR" ��$l��ȥ"HIC"��"NOR,
                "dodge":         -10,
                "parry":         -30,
                "damage":        150,
                "force":         150,
                "damage_type": "����",
                "post_action": (: upforce :),
        ]),
// 7
        ([      "action":
HIR" $N"NOR" ������"HIW"��"NOR"������������Ϣ֮����"HIW"��"NOR"$c�����ǿ����"
HIR"$n"NOR"��$l�񱼶�ȥ"HIW"��"NOR"������ʽ���Ǽ���������ʽ"BLU"��"HIB
"��������"BLU"��"NOR+HIW"��"NOR"$c���ư�ͦ����"HIW"��"NOR"�۷�ΰ��"HIW"��"NOR
"���� "HIY"$n"NOR" ��$l"HIW"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       170,
                "force":        170,
                "damage_type": "����",
                "post_action": (: shooting_att:),        
]),
// 8
        ([      "action":
HIR" $N"NOR" ��������"HIW"��"NOR"������־"HIW"��"NOR"��ִ$wֱ��"HIY"$n"NOR+HIW
"��"NOR"$c��������֮�Ʒ�й����"HIW"��"NOR"�����������Ǽ���������ʽ"GRN
"��"HIG"������ˮ"GRN"��"NOR+HIW"��"NOR"ֱ�� "HIY"$n"NOR" ��$l"HIW"��"NOR,
                "dodge":       -10,
                "parry":       -30,
                "damage":       200,
                "force":        200,
                "damage_type": "����",
        ]),
// 9
        ([      "action":
HIR" $N"NOR" ��ͣ��Ϣ"HIW"��"NOR"���������е�$c��"HIW"��"NOR"���ַ����μ�����"HIW
"��"NOR"�����������Ǽ���������ʽ"RED"��"HIR"����ٱ��"RED"��"NOR+HIW"��"NOR
"��������"HIW"��"NOR"������E"HIW"��"NOR"ֱ�� "HIY"$n"NOR" ��$l��ȥ"HIW"��"NOR,
                "dodge":       -10,
                "parry":      -30,
                "damage":       220,
                "foece":        220,
                "damage_type": "����",
                "post_action": (:god_att:),        
]),
// 10
        ([      "action":
HIR" $N"NOR" �Թ�����"HIY"��"NOR"����ӯѸ���ͽ�"HIY"��"NOR"ֱ�� "HIR"$n"NOR
" ��ǰ"HIY"��"NOR"�Թ���ֱ�� "HIY"$n"NOR" ��$l"HIY"��"NOR
"�����������Ǽ��������޼�ʽ"HIC"���������ա�"HIY"��"NOR"�����ͻ� "HIY"$n ��"
NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       250,
                "force":        250,
                "damage_type": "����",
        ]),
// 11
        ([      "action":
HIR" $N"NOR" ������$c"HIY"��"NOR"��� "HIY"$n"NOR" ����������"HIY"��"NOR"����"
HIC"���ľ�"NOR"��"HIW"��Ū����Ӱ"NOR"�ľ���"HIY"��"NOR"���ƻ�������"HIY"��"NOR
"����ֱ�� "HIY"$n"HIY" ��"NOR"����ֱ������"HIY"�����ء���ϡ�"NOR"��Ѩ"HIY"��"
NOR"��ʱ��ʹ���Ǽ���������ʽ"HIW"��"HIB"�ٲ�����"NOR+HIW"��"HIY"��"NOR
"�ɼ����ֱ�� "HIY"$n"NOR" ��$l"HIY"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       270,
                "force":        270,
                "damage_type": "����",
                "post_action":  (: god_att :),
        ]),
// 12
        ([      "action":
HIR" $N"NOR" �Գ� "HIY"$n"NOR" ��������$c"HIY"��"NOR"�������۵ж���"HIY"��"NOR
"��ʱ�ַ��ɼ�ǧ��ֻ"HIY"��"NOR"����"HIW"��������"HIY"��"NOR+HIW"�����ѵ�"HIY"��"NOR
"��ʱ"HIR" $N"NOR" ��ʩ�����Ǽ�������"YEL"��"HIY"������Ӱ"NOR+YEL"��"HIY"��"NOR
"����ֱ�� "HIY"$n"NOR" ��$l"HIY"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       300,
                "force":        300,
                "damage_type": "����",
                "post_action":  (: shooting_att :),
        ]),
// 13
        ([      "action":
HIR" $N"NOR+HIW" �Գ�$w"HIY"��"NOR+HIW"��Ȼ������"HIC"��"HIY
"�����£���Ū�������������������"HIC"��"HIY"��"NOR+HIW"��ʱ������ʼ��$c"HIY
"��"NOR+HIW"��Ȼ���"HIY"��"NOR+HIW"��Х���"HIY"��"NOR+HIW"������Զ"HIY"��"NOR
+HIW"�����������Ǽ�����������"HIG"��"HIC"�˷��ȥ"HIG"��"HIY"��"NOR+HIW"$c"HIW
"��Ӱ���ε�ֱ���� "HIY"$n"NOR+HIW" ��$lȥ"HIY"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       300,
                "force":        300,
                "damage_type": "����",
]),
// 14
        ([      "action":
HIR" $N"NOR" ֱ�� "HIY"$n"NOR" ֮����"HIY"��"NOR"���۷����������׼"HIY"��"NOR
"��������ֱ���ֱ�"HIY"���������ݳء�"NOR"��Ѩ"HIY"��"NOR"˳���ڹ��ķ�"HIY"��"
NOR"����"HIW"��ʯ���ƣ������Ѱ�������ǧ��ѩ"NOR"��֮����"HIY"��"NOR
"����֮$c�ɱ�����"HIY"��"HIR"�������ţ�������Х"HIY"��"NOR"$c�Ծ���֮��ֱ�� "
HIY"$n"NOR" ��$l��ȥ"HIY"��"NOR"�����������Ǽ�����������"HIW"��"HIR"ŭ"RED"��"
HIR"��"RED"ԭ"NOR+HIW"��"HIY"��"NOR"���ư�Ȼ���"HIY"��"NOR"ֱ���� "HIY"$n"NOR
" ��$l��"HIY"��"NOR,
                "dodge":        -10,
                "parry":        -30,
                "damage":       300,
                "force":        300,
                "damage_type": "����",
        ]),
// 15
        ([      "action":
HIR" $N"NOR+HIW" ������Ǽ����е�"HIB"����"HIY"��"NOR+HIW"��������$w"HIY"��"NOR
+HIW"˲ʱȡ����ʮ��ֻ"HIY"��"NOR+HIW"���������"HIC
"��һ���Ȼ����ǧ����շ硣��"HIW"ʹ����������ѧ����߼���"NOR" -- ",
                "dodge":        -10,
                "parry":        -30,
                "damage":       300,
                "force":        300,
                "damage_type": "����",
                "post_action": (: shooting_att :),        
]),
// 16
(["action":"�㲻�����ֲ������似�ܡ�",
"damage":10,
"damage_type": "�׳���",
]),
});

// ������û��ʱ�Ĺ�������

mapping *bow_action = ({
        ([      "action":               "$N����$w�ݺݵ���$n$l��ȥ",
                "damage":       10,
                "damage_type":  "����",

        ]),
        ([      "action":               "$N�����ػ���$w���Ŵ���$n",
                "damage":       10,
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
string perform_action_file(string action)
{
        return CLASS_D("marksman")+"/god-shooting/"+action;
}

mapping query_action(object me, object weapon)
{
  int skill;
  object wpn = me->query_temp("weapon");
  int i;
  i=wpn->query("arrow/amount");
  if( !userp(me) ) i++;
  if(i==1) {
  tell_object(me, "\n���" + wpn->query("arrow/name") + "�����ˣ�\n\n");
  wpn->set("arrow/id","none");
  wpn->set("arrow/name","�յ�");
  wpn->set("weapon_prop/damage",wpn->query("bow/attack"));
  }
  if( i <= 0) { return bow_action[random(sizeof(bow_action))]; }
  else {
        i--;
        wpn->set("arrow/amount",i);
        skill = (int)me->query_skill("god-shooting", 1);
if(me->query("family/family_name")!="������") return arrow_action[15];
        else if (skill < 7 )  return arrow_action[random(3)];
        else if (skill < 14 ) return arrow_action[random(4)];
        else if (skill < 21 ) return arrow_action[random(5)];
        else if (skill < 28 ) return arrow_action[random(6)];
        else if (skill < 35 ) return arrow_action[random(6)+1];
        else if (skill < 42 ) return arrow_action[random(7)+1];
        else if (skill < 49 ) return arrow_action[random(7)+2];
        else if (skill < 56 ) return arrow_action[random(8)+2];
        else if (skill < 63 ) return arrow_action[random(8)+3];
        else if (skill < 70 ) return arrow_action[random(9)+3];
        else if (skill < 77 ) return arrow_action[random(10)+3];
        else if (skill < 84 ) return arrow_action[random(11)+3];
        else if (skill < 91 ) return arrow_action[random(12)+3];
        else return arrow_action[random(12)+3];
        }
}

void upforce(object me, object victim, object  weapon, int damage)
{
     int skill = (int)me->query_skill("force")/10;
     int bell = (int)me->query("bellicosity")/100;
     if(bell>40) bell=40;
     if( bell < 20 ) return ;
     if(!me->query_temp("upforce") && !me->query_temp("berserk") && random(100)>50) {
     message_vision(RED"\n\n$n"HIR"�������Ѫ������"NOR+RED"$N"HIR"�ķ��ɱ��"HIY
     "��������"HIR"��ʱ"HIY"��"NOR+RED"$N��"HIB"��ɱ֮��"HIR
     "���ַ�Բʮ��֮��"HIY"��\n\n"NOR, me, victim);
     me->set_temp("oldforce",me->query("force_factor"));
     me->set("force_factor",bell+skill);
     me->set_temp("upforce",1);
     call_out("remove_upforce",10,me);
     }
}
int remove_upforce(object me)
{
    if(!me) return 1;
    me->set("force_factor",me->query_temp("oldforce"));
    me->delete_temp("oldforce");
    me->delete_temp("upforce");
    message_vision(HIW"\n$N"HIW"ɱ�⽥������"NOR"��"HIW
                   "���ϵ�ɱ��Ҳû֮ǰ�ĳ���"NOR"��\n", me);
    return 1;
}
void god_att(object me, object victim, object  weapon, int damage)
{
if(50>random(100)&&!me->query_temp("berserk"))
{
victim->start_busy(1);
message_vision(HIB"$N��ʹ���ľ�֮�����ھ�����$n���ھ������������á�\n"NOR, me, victim);
}
}

void shooting_att(object me,object *victim,object weapon,int damage)
{
     object *target;
     int i,j,k,l,m;
     int bellpower = (int)me->query("cor")/5;
     int exp= me->query("combat_exp");
     if(me->query("env/no_shooting") == "YES") return;
     if(exp >=0 && exp <=50000)
              l=1;
     if(exp > 50000 && exp <=100000)
              l=2;
     if(exp > 100000 && exp <= 500000)
              l=3;
     if(exp > 500000 && exp <=1000000)
              l=4;
     if(exp > 1000000 && exp <=1500000)
              l=5;
     if(exp > 1500000 && exp <=3000000)
              l=6;
     if(exp > 3000000 && exp <=4500000)
              l=7;
     if(exp > 4500000 && exp <=7000000)
              l=8;
     if(exp > 7000000 )
              l=9;
     m=random(5)+l;
     target=me->query_enemy();
     k=sizeof(target);
     if(random(100)<50 && !me->query_temp("berserk"))
     {
                me->set_temp("berserk", 1);
                for(i = 0;i < m; i++)
     {
                for(j=0;j<k;j++) {
                if(!target[j]) continue;
        message_vision(HIR"$N������֧��ʹ������$n�����ȥ \n"NOR,me,target[j]);
        COMBAT_D->do_attack(me,target[j],me->query_temp("weapon"), TYPE_QUICK);
                                 }
     }
     message_vision(HIW"һ����Һ�, $N�þ�����, �Ͻ��û���Ϣ \n"NOR,me);
     me->start_busy(1);
     me->delete_temp("berserk");
     }
}
