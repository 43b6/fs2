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
                "force":                 50,
                "damage":                50,
                "damage_type": "����",

       ]),
//2
(["action":"$N���˵��һ��"HIM"�������ơ�"NOR"չ������������Ӱ��$n������ȥ",

                  "dodge":     -20,
                  "parry":     -30,
                  "force":      70,
                  "damage":     70,
                  "damage_type":     "����",

                 ]),
//3 
(["action":"$N���ƾ�������,ʹ��ѩ����ѧ֮��"HIW"������"NOR"����˲ʱ��$n�Ĺ��������ư�йȥ������$n����ǰ��������һ��",
                  "dodge":     -20,
                  "parry":     -10,
                  "force":      90,
                  "damage":     90,
                  "damage_type":     "����",

                 ]),
//4
(["action":"����һ�ͣ�һ�С�"HIW"��ˮ��"NOR"��˫ȭ����������ˮ�������̺����ھ����¶�����$nͷ�������ȥ",
                  "dodge":     -20,
                  "parry":     -30,
                  "force":      120,
                  "damage":     120,
                  "damage_type":     "����",
                 ]),
//5
(["action":"$N���һ��,һ��ѩ����ѧ֮"HIW"��ɨѩʽ��"NOR"����ӥ�˾������ɱ�ѩ�����$n",
                  "dodge":     -30,
                  "parry":     -30,
                  "force":      150,
                  "damage":     150,
                  "damage_type":     "����",

                 ]),

//6
 (["action":"$Nʩչ�����Ӱ����ת��$n�����󣬷���ץס$nʹ��ѩ����ѧ�е�"HIC"������׹��"NOR"����$n���ص�ˤ�����",
                  "dodge":     -30,
                  "parry":     -45,
                  "force":     170,
                  "damage":    170,
                  "damage_type":     "ˤ��",

                 ]),
//7
(["action":"$N�ƾ�һ�أ�ʹ��һ��"HIC"������������"NOR"��˲ʱ��$n����ʽ������ס������ѩ���ھ�Ӳ��$n������",
                  "dodge":     -40,
                  "parry":     -70,
                  "force":      200,
                  "damage":     200,
                  "damage_type":    "����",
                  "post_action":               (: diy:),

            ]),
//8
 (["action":"$N�������Ӱ������ʹ��"HIW"����·��Ӱ��"NOR"����Ӱ��$n׽����������Ȼ����һ�ͣ����������һ���Ż���$n��$l��ȥ",

                  "dodge":     -70,
                  "parry":     -40,
                  "force":     250,
                  "damage":    250,
                  "damage_type":     "����",

                 ]),
//9
(["action":"$N����ƽ�ƶ�ȥ��ʹ��ѩ����ѧ�ľ�����"HIB"������"NOR"�����ƾ�����ʯм�׷ɣ�ֻ��$n��ǿ����ھ�ѹ�Ĵ�������",

                  "dodge":     -50,
                  "parry":     -40,
                  "force":     280,
                  "damage":    280,
                  "damage_type":     "����",

                 ]),
//10
 (["action":"$Nʹ��ѩ���ɵĹ�Ӱ�ţ�һ��"HIM"��������ꡯ"NOR"��$n�����������ţ�$n��ʱ���۹��ѣ���Ѫ����",

                "dodge":                -65,
                "parry":                -50,
                "force":                310,
                "damage":               310,
                "damage_type":  "����",
                 ]),
//11
 (["action":"$Nʹ����Ӱ���еľ���"HIR"��������ơ�"NOR"���μ������ҽ�����������$n��$l��ȥ",
                     "dodge":     -65,
                     "parry":     -60,
                     "force":     350,
                     "damage":    350,
                     "damage_type":    "����",

       ]),
//12
 (["action":"$Nʹ����Ӱ���еľ��衮"GRN"��÷����"NOR"�����ƺ��䣬����������Ӱ���ζ���$nֻ�е���������Ϯ��������һ��",

                     "dodge":     -65,
                     "parry":     -45,
                     "force":     400,
                     "damage_type":    "����",
                     "damage":    400,

       ]),
//13
 (["action":"$N���Ʊ����߳�һ�С�"HIB"�˾�ǧ��"NOR"��������������ɵ����Ӳ���ֱ��$n�Ƶ�������ʮ��",

                     "dodge":     -75,
                     "parry":     -75,
                     "force":     430,
                     "damage_type":    "����",
                     "damage":    430,

       ]),
//14
 (["action":"$N���������Ը��Ƶͣ����ѩ����ѧ֮������"HIC"��ѩ����"NOR"����ʱֻ������ǿ����Ӱ��ѩ���׷ɰ�ѹ��$n",

                     "dodge":     -80,
                     "parry":     -75,
                     "force":     470,
                     "damage":    470,
                     "damage_type":    "����",

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
 int bound;
 bound=(int)me->query_skill("snowforce",1)*0.5;
if(bound > 200) bound=200;
      if( me->query("force_factor") >= 10 && random(100) > 50)
      {
        if (me->query("force") > bound*2) {


message_vision(HIB"��ѩ�Ժ�����"NOR"
"HIC"            $N�ĺ���һ�ᣬʹ��ѩ��������֮"NOR"
"BLINK+HIC"                ���� �� ˪ �� ����"NOR"
"HIC"        ȭ�ƽ�$n���֣���Χ����˲���½�����$n���ᡣ\n"NOR,me,victim);
              victim->receive_damage("kee",(bound+1),me);
              COMBAT_D->report_status(victim, 1);

message_vision(HIC"��ѩ�Ա�����"NOR"
"HIY"           $N���ھ����������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIG"                 ���� �� �� �� ����"NOR"
"HIY"        ���Ͼ���˲ʱ�������������ȵ��ƾ���$nϮ����ȥ��\n"NOR,me,victim);
              victim->receive_damage("kee",(bound+1),me);
              COMBAT_D->report_status(victim, 1);
              me->add("force",-bound*2);


         }
       }
}

void ice(object me, object victim, object weapon, int damage)
{
int bound,age,me_exp;
bound=(int)me->query_skill("snowforce",1)*0.8;
// ���� By Swy
if(bound > 370) bound=370;
if(me->query("family/family_name") != "ѩ����")
return 0;
        if( me->query("force",1) >= 500  &&
        random(100)>50)
           {
message_vision(HIW"\n$N�ĺ�����ʹ��$n�����Ͻ��һ�㱡����������ض��ˣ�����������޷�������\n\n"NOR,me,victim);
           // ����condition ���������ȿ�������
victim->apply_condition("cold",random(5+(int)me->query_skill("snowforce", 1)/10));
              victim->add("kee",-(bound+30),me);
              victim->add("force",-140);
              COMBAT_D->report_status(victim, 1);
              victim->start_busy(1);
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
 int i,j,k,force,kee,star,skill,bound;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 star=victim->query_condition("star-stial");
 force=victim->query("force",1);
 skill=me->query_skill("snow-martial",1);
 bound=skill*0.9;
 k=random(100);
//�����ع��Ĳ���..by chan
weapon=me->query_temp("weapon");
if(weapon)
{
if(me->query("family/family_name")=="ѩ����" && weapon->query("id")=="figring")
{
 if((skill>90)&&(k>80)&&me->query_skill_mapped("force")=="snowforce")
  {
message_vision(HIW"$N���ϵ�"HIC"���ָ��"HIW"��$N��ѩ�Ժ�������,$Nȫ������������ã,���һֻ���͵�ѩ��!!\n"NOR,me,victim);
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
COMBAT_D->report_status(victim, 1);
message_vision(HIW"ѩ�����ٵĻ���������צ��,$n���㲻��ȫ��Ƥ������!!\n"NOR,me,victim);
victim->add("kee",-100);
COMBAT_D->report_status(victim, 1);
message_vision(HIW"һ�������������ƿն���,$n��ѩ����β��ɨ��,�о�ȫ����˺��!!\n"NOR,me,victim);
victim->add("kee",-100);
COMBAT_D->report_status(victim, 1);
message_vision(HIW"ѩ������������ҧס��$n������,ǿ�ҵĺ�����ѩ�����Ϸ�����$n�о���������!!\n"NOR,me,victim);
victim->apply_condition("cold",random(5+(int)me->query_skill("snowforce",1)/10));
victim->add("kee",-100);
COMBAT_D->report_status(victim, 1);
message_vision(HIY"���صĹ�ã�����͵�ѩ�����Ϸ���,ǿ�����$N�����������!!\n"NOR,me);
me->add("force",-250);
}
}
}
if(me->query("force") > 500)
{
 if((me->query("quests/read_snow")==1) && skill >= 70 && 
(me->query("family/family_name")=="ѩ����")){
if(random(100) > 65) {
    bound=bound+10;
   message_vision(HIM"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� �� �� �� �� ��!!\n"NOR,me,victim);
   message_vision(HIC"\n\n$Nʹ��"HIW"�������Ƶ�һ��"HIG"�������Ϯ��"HIC"��˫��һ�ƣ����缲�籩����һ�ɿ��Ϯ��$n����ǰ\n"NOR,me,victim);
         victim->add("kee",-bound);
         COMBAT_D->report_status(victim, 1);
      bound=bound+10;
     message_vision(HIC"\n\n$N���˵��ʹ��"HIW"�������Ƶڶ���"HIM"��������ѩ��"HIC"չ������������Ӱ��$n������ȥ\n"NOR,me,victim);
         victim->add("kee",-bound);
         COMBAT_D->report_status(victim, 1);
      bound=bound+10;
     message_vision(HIC"\n\n$N���ƾ������ƣ�ʹ��ѩ��"HIW"�����������һ�С�"HIC"��"HIW"��"HIC"��"NOR"��"HIC"��˲ʱ��$n�Ĺ������ư�йȥ������$n����ǰ��������һ��
\n"NOR,me,victim);
   victim->receive_wound("kee",bound,me);
         me->add("force",-240);
         COMBAT_D->report_status(victim, 1);
/* ������������ busy By Swy
message_vision(HIR"$Nʹ���������ƺ�,������������,������Ϣ����,�Ͻ��˹�����!!\n"NOR,me,victim);
me->start_busy(1);
*/
  }

 }



if((me->query("quests/read_snow")==2) && skill >= 70 && 
(me->query("family/family_name")=="ѩ����")){
  if(random(100) > 75) {
 message_vision(HIG"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� �� �� �� Ӱ �� ��!!\n"NOR,me,victim);
victim->apply_condition("cold",random((int)me->query_skill("snowforce",1)/10));
   for(j=1;j<=8;j++)
   {
     switch(1+random(3))
   {
case 1:
message_vision(HIR"                 ��������Ӱ�ţ���"NOR"
"HIW"    $N������һת������ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIR"                     ���� �� �� �� ����"NOR"
"HIW"             $N�Ľŷ������Ľ�����$n��Ϯ��ȥ��\n"NOR,me,victim);
               victim->add("kee",-bound);
         me->add("force",-30);
         COMBAT_D->report_status(victim, 1);
break;
case 2:
message_vision(GRN"                 �����ҷ���Ӱ�ţ���"NOR"
"HIC"    $N������һ�ţ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+GRN"                    ���� �� �� �� ����"NOR"
"HIC"             $N�Ľ��������Ľ�����$n���߶�ȥ��\n"NOR,me,victim);
         victim->add("kee",-bound);
         me->add("force",-30);
         COMBAT_D->report_status(victim, 1);
break;
case 3:
message_vision(HIB"                 ���������Ӱ�ţ���"NOR"
"HIC"    $N������һ�գ�����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIB"                    ���� �� �� �� ����"NOR"
"HIC"             $N����˳��һת����������$n���߶�ȥ��\n"NOR,me,victim);
         victim->add("kee",-bound);
         me->add("force",-30);
         COMBAT_D->report_status(victim, 1);
break;
case 4:
message_vision(HIY"                 ����������Ӱ�ţ���"NOR"
"HIC"    $N���ھ����䣬����ԴԴ���ϵ���������ۣ�ʹ��ѩ������֮"NOR"
"BLINK+HIY"                    ���� �� �� �� ����"NOR"
"HIC"             $Nǿ�������Ю�����Ʒ�֮����$n���߶�ȥ��\n"NOR,me,victim);
           victim->add("kee",-bound);
         me->add("force",-30);
         COMBAT_D->report_status(victim, 1);
break;
default:
break;
}
   }
message_vision(HIR"$Nʹ�������Ӱ�ź�,������Ĺ���,�Ͻ��˹���Ϣ\n"NOR,me,victim);
       me->start_busy(1);

                       }
                       }

}
if((me->query("quests/read_snow")==3) && skill >= 70 && 
(me->query("family/family_name")=="ѩ����") && (me->query("force",1) > 300)){
     if(random(100) > 85){
      bound=bound*2;
message_vision(HIW"\n\n$N��$nʹ����ѩ����ѧ֮���� ---�� "HIY"��"HIB" Ҷ"HIM"��"HIG" ��"HIW" �� ��"NOR"!!

            "HIC"$N���ڵĺ�����Ȼ��������Ȼ��һ����״֮�������ٷ���$n
            ɲ�Ǽ�$n����ǰ���̳�����һ���Ϻ�ɫ���˺ۣ�ȫ���������!
\n\n"NOR,me,victim);
     victim->add("kee",-bound*2);
victim->apply_condition("star-stial",star+random(skill/10));
     victim->start_busy(1);
    me->add("force",-200);
     COMBAT_D->report_status(victim, 1);
                         }
                         }

   if( skill < 20)
      return action[random(3)];
   else if( skill < 40)
      return action[random(5)];
   else if( skill < 50)
      return action[random(6)];
   else if( skill < 60)
      return action[random(6)+3];
   else if( skill < 80)
      return action[random(8)+3];
  else if( skill < 90)
      return action[random(10)+3];
   else
      return action[random(9)+6];
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
