// �������� snow ��ǿ���� by swy
// ȫ�¸����޸� by swy 2001/7/22
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void diy(object me, object victim, object weapon, int damage);
void ice(object me, object victim, object weapon, int damage);
mapping *action = ({
//1
 (["action":"$Nʹ��ѩ����ѧ�е�"HIG"�������ơ�"NOR"��˫��һ�ƣ����缲�籩����һ�ɿ��Ϯ��$n����ǰ",

                "dodge":                -30,
                "parry":                -20,
                "force":                 500,
                "damage":                500,
                "damage_type": "����",

       ]),
//2
(["action":"$N���˵��һ��"HIM"�������ơ�"NOR"չ������������Ӱ��$n������ȥ",

                  "dodge":     -20,
                  "parry":     -30,
                  "force":      500,
                  "damage":     500,
                  "damage_type":     "����",

                 ]),
//3
(["action":"$N���ƾ�������,ʹ��ѩ����ѧ֮��"HIW"������"NOR"����˲ʱ��$n�Ĺ��������ư�йȥ������$n����ǰ��������һ��",
                  "dodge":     -20,
                  "parry":     -10,
                  "force":      500,
                  "damage":     500,
                  "damage_type":     "����",
                  "post_action":               (: diy:),

                 ]),
//4
(["action":"����һ�ͣ�һ�С�"HIW"��ˮ��"NOR"��˫ȭ����������ˮ�������̺����ھ����¶�����$nͷ�������ȥ",
                  "dodge":     -20,
                  "parry":     -30,
                  "force":      500,
                  "damage":     500,
                  "damage_type":     "����",
                 ]),
//5
(["action":"$N���һ��,һ��ѩ����ѧ֮"HIW"��ɨѩʽ��"NOR"����ӥ�˾������ɱ�ѩ�����$n",
                  "dodge":     -30,
                  "parry":     -30,
                  "force":      500,
                  "damage":     500,
                  "damage_type":     "����",

                 ]),

//6
 (["action":"$Nʩչ�����Ӱ��ת��$n����󣬷���ץס$nʹ��ѩ����ѧ�е�"HIC"������׹��"NOR"����$n���ص�ˤ�����",
                  "dodge":     -30,
                  "parry":     -45,
                  "force":     500,
                  "damage":    500,
                  "damage_type":     "ˤ��",
                  "post_action":               (: diy:),

                 ]),
//7
(["action":"$N�ƾ�һ�أ�ʹ��һ��"HIC"������������"NOR"��˲ʱ��$n����ʽ������ס������ѩ���ھ�Ӳ��$n������",
                  "dodge":     -40,
                  "parry":     -70,
                  "force":      500,
                  "damage":     500,
                  "damage_type":    "����",

            ]),
//8
 (["action":"$N�������Ӱ����ʹ��"HIW"����·��Ӱ��"NOR"����Ӱ��$n׽����������Ȼ����һ�ͣ����������һ���Ż���$n��$l��ȥ",

                  "dodge":     -70,
                  "parry":     -40,
                  "force":     500,
                  "damage":    500,
                  "damage_type":     "����",

                 ]),
//9
(["action":"$N����ƽ�ƶ�ȥ��ʹ��ѩ����ѧ�ľ�����"HIB"������"NOR"�����ƾ�����ʯм�׷ɣ�ֻ��$n��ǿ����ھ�ѹ�Ĵ�������",

                  "dodge":     -50,
                  "parry":     -40,
                  "force":     500,
                  "damage":    500,
                  "damage_type":     "����",
                  "post_action":               (: diy:),

                 ]),
//10
 (["action":"$Nʹ��ѩ���ɵĹ�Ӱ�ţ�һ��"HIM"��������ꡯ"NOR"��$n�����������ţ�$n��ʱ���۹��ѣ���Ѫ����",

                "dodge":                -65,
                "parry":                -50,
                "force":                500,
                "damage":               500,
                "damage_type":  "����",
                 ]),
//11
 (["action":"$Nʹ����Ӱ���еľ���"HIR"�������ơ�"NOR"���μ������ҽ�����������$n��$l��ȥ",
                     "dodge":     -65,
                     "parry":     -60,
                     "force":     500,
                     "damage":    500,
                     "damage_type":    "����",

       ]),
//12
 (["action":"$Nʹ����Ӱ���еľ��衮"GRN"��÷����"NOR"�����ƺ��䣬����������Ӱ���ζ���$nֻ�е���������Ϯ��������һ��",

                     "dodge":     -65,
                     "parry":     -45,
                     "force":     500,
                     "damage_type":    "����",
                     "damage":    500,
                     "post_action":               (: diy:),

       ]),
//13
 (["action":"$N���Ʊ����߳�һ�С�"HIB"�˾�ǧ��"NOR"��������������ɵ����Ӳ���ֱ��$n�Ƶ�������ʮ��",

                     "dodge":     -75,
                     "parry":     -75,
                     "force":     500,
                     "damage_type":    "����",
                     "damage":    500,

       ]),
//14
 (["action":"$N��������Ը��Ƶͣ����ѩ����ѧ֮������"HIC"��ѩ����"NOR"����ʱֻ������ǿ����Ӱ��ѩ���׷ɰ�ѹ��$n",

                     "dodge":     -80,
                     "parry":     -75,
                     "force":     500,
                     "damage":    500,
                     "damage_type":    "����",
                     "post_action":               (: ice:),

       ]),
//15
 (["action":"$Nʹ��ѩ����ѧ֮������"HIW"������"NOR"����ɲ�Ǽ�$N�����ܺ���Ϯ�ˣ��ֱ��ϸ���һ����Ю�ź������ƻ���$n",

                     "dodge":     -60,
                     "parry":     -70,
                     "force":     500,
                     "damage":    500,
                     "damage_type":    "����",
                     "post_action":               (: ice:),
       ]),

});

void diy(object me, object victim, object weapon, int damage)
{
 int bound,dam;
 bound=(int)me->query_skill("snowforce",1);
 dam=victim->query("max_kee",1)/30;
// if(bound > 250) bound=250;
      if( me->query("force_factor") >= 5 && random(100) > 50)
      {
        if (me->query("force") > bound*2) {

message_vision(HIB"��ѩ�Ժ�����"NOR"
"HIC"            $N�ĺ���һ�ᣬʹ��ѩ��������֮"NOR"
"BLINK+HIC"                ���� �� ˪ �� ����"NOR"
"HIC"        ȭ�ƽ�$n���֣���Χ����˲���½�����$n���ᡣ\n"NOR,me,victim);
              victim->receive_damage("kee",(bound+50),me);
              COMBAT_D->report_status(victim);

message_vision(HIC"��ѩ�Ա�����"NOR"
"HIY"           $N���ھ����������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIG"                 ���� �� �� �� ����"NOR"
"HIY"        ���Ͼ���˲ʱ�������������ȵ��ƾ���$nϮ���ȥ��\n"NOR,me,victim);
              victim->receive_wound("kee",(bound+50),me);
              COMBAT_D->report_status(victim);
              me->add("force",-bound*2);

         }
       }
}

void ice(object me, object victim, object weapon, int damage)
{
int bound,age,me_exp;
bound=(int)me->query_skill("snowforce",1);
//if(bound > 250) bound=250;
        if( me->query("force",1) >= 500  &&
        random(100)>50)
           {
message_vision(HIW"\n$N�ĺ�����ʹ��$n�����Ͻ��һ�㱡����������ض��ˣ����������\n\n"NOR,me,victim);
              victim->apply_condition("cold",random(15)+1);
              victim->receive_wound("kee",(bound+350),me);
              victim->add("force",-140);
              COMBAT_D->report_status(victim);
              me->add("force",-200);
           }
}


int valid_learn(object me)
{

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") ) {
               write("ѧѩ����ѧ������֡�\n");
               return 0;
        }
        if(me->query("max_force")<50) {
                write("ι! С��, ��������Ҫ 50 ร����㳤���������\n");
                return 0;
        }
        if(me->query_skill("snowforce",1)<10) {
                write("���ѩ�����ڹ���򲻹���������ѩ����ѧ��\n");
                return 0;
        }
        if(me->query("family/family_name") != "ѩ����")
        {
               write("ֻ��ѩ�Ե��ӿ���ѧ!!!!\n");
               return 0;
           }

        return 1;
}

int valid_enable(string  usage)  {

            return usage=="unarmed";
}

mapping query_action(object me, object weapon)
{
 int i,j,k,force,kee,star,skill,bound,dam;
 object victim,*enemy;
 victim = offensive_target(me);
 dam=victim->query("max_kee",1)/50;
 if(dam > 2500) dam=2500;
 skill=me->query_skill("snow-martial",1);
 bound=skill;
 k=random(100);
//�����ع��Ĳ���..by chan
weapon=me->query_temp("weapon");
// �����Ǻϼ���ʹ�ù��ļƺź����� by swy
if(random(100)>80 && me->query_temp("use-two-power")) {
me->delete_temp("use-two-power");
}
if(weapon)
{
if(me->query("family/family_name")=="ѩ����" && weapon->query("id")=="figring")
{
 if((skill>90)&&(k>80)&&me->query_skill_mapped("force")=="snowforce" && victim)
  {
message_vision(HIW"$N���ϵ�"HIC"���ָ��"HIW"��$N��ѩ�Ժ�������,$Nȫ����������ã,���һֻ���͵�ѩ��!!\n"NOR,me,victim);
message_vision(HIW+@LONG

                       _ __..-;''`--/'/ /.',-`-.
                   (`/' ` |  \ \ \\ / / / / .-'/`,_
                  /'`\ \   |  \ | \| // // / -.,/_,'-,
                 /<7' ;  \ \  | ; ||/ /| | \/    |`-/,/-.,_,/')
                /  _.-, `,-\,__|  _-| / \ \/|_/  |    '-/.;.\'
                `-`  f/ ;      / __/ \__ `/ |__/ |
                     `-'      |  -| =|\_  \  |-' |
                           __/   /_..-' `  ),'  //
                          ((__.-'((___..-'' \__.'

LONG+NOR,me);
message_vision(HIC"�б��ľ޴�ѩ��,�����޴�Х��!!,��$nչ�����ҵĹ���!!!\n"NOR,me,victim);
message_vision(HIW"ѩ�����ٵĻ���������צ��,$n���㲻��ȫ��Ƥ������!!\n"NOR,me,victim);
victim->receive_damage("kee",100,me);
COMBAT_D->report_status(victim);
message_vision(HIW"һ�������������ƿն���,$n��ѩ����β��ɨ��,�о�ȫ��˺��!!\n"NOR,me,victim);
victim->receive_damage("kee",100,me);
COMBAT_D->report_status(victim);
message_vision(HIW"ѩ������������ҧס��$n������,ǿ�ҵĺ�����ѩ�����Ϸ�����$n�о���������!!\n"NOR,me,victim);
victim->apply_condition("cold",random(15)+1);
victim->receive_damage("kee",100,me);
COMBAT_D->report_status(victim);
message_vision(HIY"���صĹ�ã�����͵�ѩ�����Ϸ���,ǿ�����$N�����������!!\n"NOR,me);
me->add("force",-250);
}
}
}
if(me->query("force_factor")<80) {
if((me->query("quests/read_snow")==1) && skill >= 70 &&
me->query("family/family_name")=="ѩ����"&&me->query("force",1) > 500){
if(random(100) > 80 && victim) {
   bound=bound+100;
   message_vision(HIM"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� �� �� �� �� ��!!\n"NOR,me,victim);
   victim->apply_condition("cold",random(15)+1);
message_vision(HIC"\n\n$Nʹ��"HIW"�������Ƶ�һ��"HIG"�������Ϯ��"HIC"��˫��һ�ƣ����缲�籩����һ�ɿ��Ϯ��$n����ǰ\n"NOR,me,victim);
         victim->receive_damage("kee",bound,me);
         COMBAT_D->report_status(victim);
      bound=bound+100;
message_vision(HIC"\n\n$N���˵��ʹ��"HIW"�������Ƶڶ���"HIM"��������ѩ��"HIC"չ������������Ӱ��$n������ȥ\n"NOR,me,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim);
      bound=bound+100;
message_vision(HIC"\n\n$N���ƾ������ƣ�ʹ��ѩ��"HIW"�����������һ�С�"HIC"��"HIW"��"HIC"��"NOR"��"HIC"��˲ʱ��$n�Ĺ������ư�йȥ������$n����ǰ��������һ��\n"NOR,me,victim);
   victim->receive_wound("kee",dam,me);
         me->add("force",-240);
         COMBAT_D->report_status(victim);
  }
 }

if((me->query("quests/read_snow")==2) && skill >= 70 &&
me->query("family/family_name")=="ѩ����"&&me->query("force",1) > 500){
  if(random(100) > 80 && victim) {
 message_vision(HIG"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� �� �� �� Ӱ �� ��!!\n"NOR,me,victim);
 victim->apply_condition("cold",random(15)+1);
   for(j=1;j<=9;j++)
   {
  switch(1+random(4))
   {
case 1:
message_vision(HIR"                 ��������Ӱ�ţ���"NOR"
"HIW"    $N������һת������ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIR"                     ���� �� �� �� ����"NOR"
"HIW"             $N�Ľŷ������Ľ�����$n��Ϯ��ȥ��\n"NOR,me,victim);
               victim->receive_damage("kee",bound,me);
         me->add("force",-30);
         COMBAT_D->report_status(victim);
break;
case 2:
message_vision(GRN"                 �����ҷ���Ӱ�ţ���"NOR"
"HIC"    $N������һ�ţ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+GRN"                    ���� �� �� �� ����"NOR"
"HIC"             $N�Ľ��������Ľ�����$n���߶�ȥ��\n"NOR,me,victim);
         victim->receive_damage("kee",bound,me);
         me->add("force",-30);
         COMBAT_D->report_status(victim);
break;
case 3:
message_vision(HIB"                 ���������Ӱ�ţ���"NOR"
"HIC"    $N������һ�գ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIB"                    ���� �� �� �� ����"NOR"
"HIC"             $N����˳��һת����������$n���߶�ȥ��\n"NOR,me,victim);
         victim->receive_wound("kee",bound,me);
         me->add("force",-30);
         COMBAT_D->report_status(victim);
break;
case 4:
message_vision(HIY"                 ����������Ӱ�ţ���"NOR"
"HIC"    $N���ھ����䣬����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIY"                    ���� �� �� �� ����"NOR"
"HIC"             $Nǿ�������Ю�����Ʒ�֮����$n���߶�ȥ��\n"NOR,me,victim);
           victim->receive_wound("kee",dam,me);
         me->add("force",-30);
         COMBAT_D->report_status(victim);
break;
}
   }
                       }
                       }
if((me->query("quests/read_snow")==3) && skill >= 70 &&
(me->query("family/family_name")=="ѩ����") && (me->query("force",1) > 500)){
     if(random(100) > 80 && victim){
message_vision(HIW"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� "HIY"��"HIB" Ҷ"HIM"��"HIG" ��"HIW" �� ��"NOR"!!

            "HIC"$N���ڵĺ�����Ȼ��������Ȼ��һ����״֮�������ٷ���$n
            ɲ�Ǽ�$n����ǰ���̳�����һ���Ϻ�ɫ���˺ۣ�ȫ��������!
\n\n"NOR,me,victim);
     victim->receive_wound("kee",(100+bound*7),me);
     victim->apply_condition("star-stial",random(15)+1);
     me->add("force",-200);
     COMBAT_D->report_status(victim);
                         }
                         }
} else {
if(me->query("family/family_name")=="ѩ����"&&skill==100&&me->query("force")>1000) {
if(random(100)>85&&victim) {
message_vision(HIW"\n$N��$nʹ����ѩ����ѧ֮���� ---�� �� ѧ �� �� �� ��---\n\n"NOR,me,victim);
for(i=1;i<=8;i++) {
switch(i) {
case 1:
message_vision(HIY"            ---�������Ϯ��---"NOR"
"HIC"    $N˫��һ�ƣ����缲�籩����һ�ɿ��Ϯ��$n����ǰ��\n"NOR,me,victim);
               victim->receive_damage("kee",180,me);
               me->add("force",-100);
               COMBAT_D->report_status(victim);
break;
case 2:
message_vision(HIM"            ---��������ѩ��---"NOR"
"HIC"    $Nչ������������Ӱ��$n������ȥ��\n"NOR,me,victim);
               victim->receive_wound("kee",240,me);
               me->add("force",-100);
               COMBAT_D->report_status(victim);
break;
case 3:
message_vision(HIW"            ---��"HIC"��"HIW"��"HIC"��"NOR"��---"NOR"
"HIC"    $N˲ʱ��$n�Ĺ������ư�йȥ������$n����ǰ��������һ�ơ�\n"NOR,me,victim);
               victim->receive_wound("kee",dam,me);
               me->add("force",-100);
               COMBAT_D->report_status(victim);
break;
case 4:
message_vision(HIR"            ---������Ӱ�š�---"NOR"
"HIW"    $N������һת������ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIR"                     ���� �� �� �� ����"NOR"
"HIW"             $N�Ľŷ������Ľ�����$n��Ϯ��ȥ��\n"NOR,me,victim);
               victim->receive_damage("kee",180,me);
               me->add("force",-100);
               COMBAT_D->report_status(victim);
break;
case 5:
message_vision(GRN"            ---���ҷ���Ӱ�š�---"NOR"
"HIC"    $N������һ�ţ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+GRN"                    ���� �� �� �� ����"NOR"
"HIC"             $N�Ľ��������Ľ�����$n���߶�ȥ��\n"NOR,me,victim);
         victim->receive_wound("kee",240,me);
         me->add("force",-100);
         COMBAT_D->report_status(victim);
break;
case 6:
message_vision(HIB"            ---�������Ӱ�š�---"NOR"
"HIC"    $N������һ�գ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIB"                    ���� �� �� �� ����"NOR"
"HIC"             $N����˳��һת����������$n���߶�ȥ��\n"NOR,me,victim);
         victim->receive_damage("kee",180,me);
         me->add("force",-100);
         COMBAT_D->report_status(victim);
break;
case 7:
message_vision(HIY"            ---��������Ӱ�š�---"NOR"
"HIC"    $N���ھ����䣬����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIY"                    ���� �� �� �� ����"NOR"
"HIC"             $Nǿ�������Ю�����Ʒ�֮����$n���߶�ȥ��\n"NOR,me,victim);
           victim->receive_wound("kee",dam,me);
           me->add("force",-100);
           COMBAT_D->report_status(victim);
break;
case 8:
message_vision(HIW"            ---�� "HIY"��"HIB" Ҷ"HIM"��"HIG" ��"HIW" �� ��---"NOR"
"HIC"    $N���ڵĺ�����Ȼ��������Ȼ��һ����״֮�������ٷ���$n"NOR"
"HIC"    ɲ�Ǽ�$n����ǰ���̳�����һ���Ϻ�ɫ���˺ۣ�ȫ�������ѡ�\n\n"NOR,me,victim);
     victim->receive_wound("kee",dam*2,me);
     victim->apply_condition("star-stial",random(20)+1);
     victim->apply_condition("cold",random(20)+1);
     me->add("force",-150);
     COMBAT_D->report_status(victim);
break;
}
}
}
}
}
   if( skill < 20)
      return action[random(3)];
   else if( skill < 40)
      return action[random(5)];
   else if( skill < 50)
      return action[random(7)];
   else if( skill < 60)
      return action[random(6)+3];
   else if( skill < 80)
      return action[random(8)+3];
  else if( skill < 90)
      return action[random(8)+5];
   else
      return action[random(8)+7];
}
int practice_skill(object me)
{

        if( (int)me->query("kee") < 30 )
                      return  notify_fail("������������޷���ϰѩ����ѧ��\n");
        if( (int)me->query("force") < 5 )
                   return  notify_fail("�������������������ϰѩ����ѧ��\n");
        me->receive_damage("kee", 30);
        me->add("force", -5);
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("fighter")+"/snow-martial/"+action;
}

