//��ԭ�ٻ� by bss
#include <ansi.h>
#include <combat.h>
void sp_attack(object me,object victim,object weapon,int damage);
void sp1(object me,object victim,object weapon,int damage);
void sp2(object me,object victim,object weapon,int damage);
inherit SKILL;

string *parry_msg=({
        "$n����һ��, ����$w��$N�Ĺ��ƾ���ҷ�˿�ȥ��\n",
        "$n�����е�$w���Բ��, ��$N�Ĺ��ƾ�������������\n",
        "$n�Ծ��ƶ�, ƽ������$w, ����ʤ����, ������$N�Ĺ���!\n",
        });

mapping *action = ({
        ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ���"NOR"����ʽ"HIY"������է�֡�"NOR"������$w��$n��ȥ��ǹͷ�����������
����һ�������ǳ�м����ר���ڼһ������������������Σ������ǳ�\n",
                "dodge"      :                -500,
                "damage"     :                750,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ�"NOR"�е�"HIC"������ǧ�ء�"NOR"������$wӿ������ǹ�ˣ��������ң�
��������������$n\n",
                "dodge"      :                -500,
                "damage"     :                145,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ�֮"HIM"���޶�����"NOR"������$w�ζ����ѣ�ʹ$n��ȫ��
֪��$w�������Լ����������$n�ڷ��ĵ�ʱ�̣�$w��Ȼ�����
������$n��$l\n",
                "dodge"      :               -500,
                "damage"     :                165,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ�"NOR"֮"HIC"���籩���"NOR"������$w�Լ�����ٶȻζ���ǹӰ
���¼䣬ʹ$n�������кܶ��$wͬʱ�ڹ����Լ��Ĵ����ʹ��$n��
����֪������η�����\n",
                "dodge"      :                -500,
                "damage"     :                200,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "����֮��",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ�"NOR"֮"HIB"����ǹ�ơ�"NOR"��$N��Ȼ������$w�ص���������ǹ�����ǹ��
ʹ$n��ȫ���ղ���$w��һ���ı仯������$n�㲻���״����ʱ��$w
��Ȼ��$N�����Ա��������$n��$l\n",
                "dodge"      :                -500,
                "damage"     :                220,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "����",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$Nʹ��"HIR"��ԭ�ٻ�"NOR"֮"HIY"���辢����"NOR"������$w��ǰ���̣�$n����һ��ȴ����$N
���ɽ��������������$n��������ȫ���ɣ���������ǹβ����ǰ���Ѹ�
$N��ת��$w������$N����������ǹβ�ͳ�����$nӭ��ǹβ��ʱ�򣬵���ͬ
ʱ�ܵ��Լ���$N�ľ���������$n��ε��ܵ���?\n",
                "dodge"      :                -500,
                "damage"     :                350,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "����",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$Nһ����Х��ʹ��"HIR"��ԭ�ٻ�"NOR"֮"BLINK+HIG"���������¡�"NOR"��һʱ��$N��ǰ�����ռ䣬ǹӰ
���ڹ��������������������ڣ�$N�������һ��ǹ�����$n���ٵ���ȥ��
$N�˻�δ��������ʽ���������������һ���Ĺ���$n\n",
                "dodge"      :                -500,
                "damage"     :                550,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "����",
                "post_action":  (:sp2:),

         ]),
        ([
                "action"     :
"$N������$wһ��\��ʹ��"HIR"��ԭ�ٻ�"NOR"֮"HBRED+HIY"����ɨǧ����"NOR"������$w��һ���޻أ�
������������Ƴ�$nɨȥ��ǹ�����粨����ӿ�ľ��ˣ������\�ص���
$nϮȥ\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":               "����",
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N���о���һ����ʹ��"HIR"��ԭǹ��"NOR"�е�"YEL"��б���ơ�"NOR"��ǹӰ��ɢ��
��׾ʵ�ɵ�������������$w֮��������$n������\n",
                "dodge"      :               -500,
                "damage"     :                700,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N��Ҳ������ʩ��"HIR"��ԭǹ��"NOR"֮"HIY"���������¡�"NOR"����$wǹͷɨ��$n��$l��ʱ��
ǹβҲ˳�ƻ���$n��ʹ$n�������Ļ���Ҳû��\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N���һ��������һ�ͣ�ʹ��"HIR"����ԭ�ٻ���"NOR"�е�"BLINK+HIC"���������"NOR"��$w
����һ�����磬׷��$n����ž������һ��$n��Ե����ǹ�洦����ʱ
��ɢ��ɣ�ԭ���ƴ���������������ǹ���������ϵ�ȥ��ԭ��
���С�����ĳ�����ֻ���������ƣ�ֻ�����ٶ����ơ������ƿ�֮��
����˭����������ǹ����������������ȫ�����񣬶�������ʹ�Լ�����
�����Ĵ���\n",
                "dodge"      :                -500,
                "damage"     :                0,
                "damage_type":               "����",
                "post_action":  (:sp_attack:),
        ]),
        ([
                "action"     :
"$Nʹ��"HIR"��ԭǹ��"NOR"�ڹ���֮����"BLINK+HIM"��ƽ�ط�����"NOR"���Ŷ�ǹβ����ǹ����
�������˽Ƕȡ��˾�һ����$w��ʱ�ɵ��ϼ���б�ϣ�����$n��\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "damage_type":               "����֮��",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp1:),
        ]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="lance");
}
mapping query_action(object me, object weapon)
{
                return action[random(sizeof(action))];
}
string perform_function_file(string func)
{
        return "/u/b/bss/" + func;
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 if(!me->query_temp("conti")){
  message_vision(HIY"\n$N��Ϊ�ķ���̫��������ڵ����ϣ�һʱ���޷������������׸\n"NOR,victim);
  victim->start_busy(5);
  call_out("berserk",0,me,victim,weapon);
  }
}
void sp1(object me, object victim, object  weapon, int damage)
{
   message_vision(HIR"����������������������"NOR"��һ���ҽ�\n",victim);
   message_vision("$N��$n���������$n���ڵ���ʱ���ڲ�ס�Ļζ�\n",victim,weapon);
   victim->receive_damage("kee",(victim->query("kee")+1),me);
   victim->receive_wound("kee",(victim->query("kee")+1),me);
}
void sp2(object me, object victim, object  weapon, int damage)
{
 int skill_level=me->query_skill("fire-lance",1),bound;
 bound = victim->query("max_kee");
 bound = (bound/100)*5;
  if( (random(170) < 27 && me->query("force",1) > 100) || me->query_temp("super_lance") )
  {
    if(!me->query_temp("berserk2"))
    {
    if(weapon->query("id")=="red lance")
     {
       message_vision(
         sprintf(HIW"\n$N��Ȼ�۷ž��⣬���һ������������ǹ����ɲ�Ǽ�����ӿ��һ�����ƣ�ʹ$n��ȫʧȥ$N����Ӱ!!\n\n"NOR),me ,victim);
       message_vision(
         sprintf(HIW"\n$N�Դ���֮����$n˵��:�����аɡ�����ʽ����㳯$nϮ��!!\n\n"NOR),me ,victim);
       message_vision(
 sprintf(HIW"\n��������ǹ��һʽ"HIB"��������ˮ��"HIW"��"HIR"�ɶ���ǹ"HIW"������ˮ�㳯$n��ȥ��ʹ��Ŀ��Ͼ��\n"NOR),me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ�ڶ�ʽ"HIB"�����Ǵ��¡�"HIW"��"HIR"�ɶ���ǹ"HIW"��Ȼ��$nֱ�̹�ȥ��������$n���ϼ���ҪѨ\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ����ʽ"HIB"�����Ƹ��ꡯ"HIW"��"HIR"�ɶ���ǹ"HIW"��糵����$N����ת��������$n��ǹ����������\n\n�����������֣���������\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ����ʽ"HIB"����ɽ������"HIW"��$N��"HIR"�ɶ���ǹ"HIW"�������أ���������������"HIR"�ɶ���ǹ"HIW"���������ʯ\n\n������$n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ����ʽ"HIB"������������"HIW"��$N������"HIR"�ɶ���ǹ"HIW"��$n���ϻ���ʮ����СԲȦ��$n\n\n��Ȼ����һ�𣬶�������\n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
 sprintf(HIW"\n��������ǹ����ʽ"HIB"������¥��"HIW"��$N�������ǹ����ת����һ�������㳯$n��ȥ\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ����ʽ"HIB"����籩�ꡯ"HIW"��ǹ�����಻���ĳ�$n��ȥ��ʹ$n�����ش�\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ�ڰ�ʽ"HIB"�����ŭ����"HIW"��"HIR"�ɶ���ǹ"HIW"�ڿռ��п��ٵĿ�����ʹ���ܲ����˾޴���ƿ���\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ�ھ�ʽ"HIB"��˺�����ơ�"HIW"��"HIR"�ɶ���ǹ"HIW"Ѹ�ٵ������Ҹ��������£�ǹ�����ٵع���$n\n"NOR), me ,victim,weapon);
 victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ��ʮʽ"HIB"���ƺ����Ρ�"HIW"��ǹ������˿�ӿ������$n�����ܵĻ���Ҳû��\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������ǹ��ʮһʽ"HIB"��������筡�"HIW"��$NԾ�����У�����"HIR"�ɶ���ǹ"HIW"��$nֱ����ȥ��ǹ��������������ռ�\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
     message_vision(
 sprintf(HIW"\n$Nʹ��ǹ��һʮһʽ����Χ�ĺ��ƽ�������ɢ�ˡ�\n\n"NOR), me ,victim);

}
}
}
}
int berserk(object me,object victim,object weapon)
{
        int i,j;
    if(!victim) return 1;
    if(!me->is_fighting() || !victim->is_fighting())   return 1;
 if(!me->query_temp("conti")){
  message_vision(HIC"$N�ۼ�$n�޷�������ץס���ᣬʹ���ǳ�������֮������!!!\n"NOR,me,victim);
  me->set_temp("conti",1);
  switch(random(5)){
        case 1:
                j=2;
                break;
        case 2:
                j=3;
                break;
        case 3:
                j=4;
                break;
        case 4:
                j=5;
                break;
        case 5:
                j=6;
                break;
        default:
                j=4;
                break;
     }
   for(i=0;i<j;i++)

    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

    me->delete_temp("conti");
    me->add("force",-(j*500));
    me->start_busy(1);
                     }
}
