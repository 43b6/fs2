//�ѩ�� by bss
#include <ansi.h>
#include <combat.h>

void berserk2(object me, object victim, object  weapon, int damage);
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
void sp3(object me, object victim, object  weapon, int damage);
//void sp4(object me, object victim, object  weapon, int damage);
string *parry_msg=({
        "$n����$w��Ȼ����һ��������һ��"+HIY+"�������ǡ�"+NOR+"����̼佣��������ת���ɾ��޷�����$N�Ĺ��ƾ�������������\n",
        "$n����һ��, ����$w��$N�Ĺ��ƾ���ҷ�˿�ȥ��\n",
        "$n�����е�$w���Բ��, ��$N�Ĺ��ƾ�������������\n",
        "$n�Ծ��ƶ�, ƽ������$w, ����ʤ����, ������$N�Ĺ���!\n",
        });

mapping *action = ({
        ([
                "action"     :
"$Nʩչ��佻����ɾ���"HIY"�����ɽ���"NOR"��ͻȻ��ת����������������৵�һ����
��$n��ǰֱ�̣��ٶȷɿ죬�ۿ�$n��Ҫ�����ˡ�",
                "dodge"      :                -500,
                "damage"     :                750,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
        ]),
        ([
                "action"     :
"$N������ʹ������һ��"+HIY+"����Х���족"+NOR+", ����$w���¶��ϵĿ���$n�������������γɵ�������������㹥��$n��",
                "dodge"      :                -500,
                "damage"     :                145,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp1:),
        ]),
        ([
                "action"     :
"$N��Ȼ������$w���ڱ�������һ��"+HIB+"���޽��ơ�"+NOR+",����$n�㲻���״����ʱ��$w\n��Ȼ��$N�����Դ̳�������$n��",
                "dodge"      :               -500,
                "damage"     :                165,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
        ]),
        ([
                "action"     :

"$N��$w������У�$n��������ʧ��Ѹ�ٵ���$N����,$N��Ȼ�۷ž��⣬����Ծ�����н�\n����˳������������һ��"+HIC+"��ŭն���ݡ�"+NOR+" ��ǧ����������Ž��ƹ���$n��",
                "dodge"      :                -500,
                "damage"     :                200,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":                (: sp2 :),
                "damage_type":                "����",
         ]),
         ([
                "action"     :
"$N��Ȼ��ǰ���һ����һ���Ӵ��ɱ����$N����ӿ����$N���һ��"+HIR+"��ɱ�������"+NOR+"������������𣬽�����ת������㳯$n�͹���",
                "dodge"      :                -500,
                "damage"     :                220,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "����",
         ]),
         ([
                "action"     :
"$N��$wб���ڵأ����μ�ת�����һ��"+HIY+"��Ǳ�����족"+NOR+"������$w������һ�������������·�Ҫ�����ܵ�һ��ȫ���������Ƶ�",
                "dodge"      :                -500,
                "damage"     :                350,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp3:),
                "damage_type":                "����",
         ]),
         ([
                "action"     :
"$N����$w������$w�Ľ����������һ�����$n���������������������������$n��������ʹ������ʹ�޵ľ���\n"+
"            "+HIY+"   ����������     ��     ��  ������ "+NOR+"����",
                "dodge"      :                -500,
                "damage"     :                550,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
                "damage_type":                "����",

         ]),
        ([
                "action"     :
"ֻ��$N����ױ���һ�������Ѽ������ϣ���̼佣�����ų�������⣬��Ȼ�ڰ���д̳�һ�������"+HIY+"������"+NOR+"�֣������\�ص���$nѹȥ����������������۵�---- \n"+
"            "+HIC+"   ����������     ��     ��  ������ "+NOR+"����",
                "dodge"      :                -500,
                "damage"     :                800,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
                "damage_type":               "����",
        ]),
        ([
                "action"     :
"$N���ֳֽ����������������˫�ֳɻ�������̧������[1;37m����������ʽ[0m������ʽ��",
                "dodge"      :                -500,
                "damage"     :                700,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:berserk2:),
        ]),
        ([
                "action"     :
"$N�߾����е�$w��Ѹ�ٵ�����ǰ�������һ���ܴ��"+HIC+"��"+NOR+"�֣�����ʥ�齣��֮"+HIR+"�����ˡ�"+NOR+"�����������˺ܴ���ƿ�����ֱ��$n��ȥ��",
                "dodge"      :                -500,
                "damage"     :                800,
                "damage_type":               "����",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp1:),
        ]),
        ([
                "action"     :
"$Nʩ���������������еļ���"+HIR+"����ʹĪ����"+NOR+"��������֯����$n��ȥ��ʹ��$n����Ϊ��$N��ʽ���Ǳ��˵Ľ������ж���",
                "dodge"      :                -500,
                "damage"     :                700,
                "damage_type":               "����",
               "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),

});

mapping query_action(object me, object weapon)
{
   int skill_level, limit;
   skill_level = (int)(me->query_skill("bss-sword", 1));
   limit= (int)( skill_level/ 10);
      if (limit < 2 )
         return action[random(4 )];
      else if (limit < 3 )
         return action[random(5 )];
      else if (limit < 4 )
         return action[random(6 )];
      else if (limit < 5 )
         return action[random(7 )];
      else if (limit < 6 )
         return action[random(8 )];
      else if (limit < 7 )
         return action[random(9 )];
      else if (limit < 8 )
         return action[random(10 )];
         return action[random(11)];
}


void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("bss-sword", 1);
   message_vision("$N�ܵ�����������Ӱ�죬���Ϻ�����ף��������ܵ���������\n",victim);
   victim->add("kee", -(skill* 3));
   victim->apply_condition("hart",random(5)+((int)me->query_skill("dragonsword",1)/5));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill = me->query_skill("bss-sword", 1);
   message_vision("$N�Ľ�����$n�����Ĵ���ײ��������ص�����\n",weapon,victim);
   victim->add("kee",-(skill* 3));
   victim->apply_condition("hart",random(5)+((int)me->query_skill("dragonsword",1)/5));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp3(object me, object victim, object  weapon, int damage)
{
   int skill = me->query_skill("bss-sword", 1);
   message_vision("$N��$n������������������������в���˺�ѿ���\n",victim,weapon);
   victim->add("kee",-(skill* 3));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}


void berserk2(object me, object victim, object  weapon, int damage)
{
 int skill_level=me->query_skill("bss-sword",1),bound;
 bound = victim->query("max_kee");
 bound = (bound/100)*5;
  if( random(170) > 27 && me->query("force",1) > 100 )
  {
    if(!me->query_temp("berserk2"))
    {
    if(weapon->query("id")=="dragon sword")
     {
       message_vision(
         sprintf(HIW"\n$N��Ȼ�۷ž��⣬���һ������������������ɲ�Ǽ�����ӿ��һ�����ƣ�ʹ$n��ȫʧȥ$N����Ӱ!!\n\n"NOR),me ,victim);
       message_vision(
         sprintf(HIW"\n$N�Դ���֮����$n˵��:�����аɡ�����ʽ����㳯$nϮ��!!\n\n"NOR),me ,victim);
       message_vision(
 sprintf(HIW"\n������������һʽ"HIB"��������ˮ��"HIW"��"HIY"������"HIW"������ˮ�㳯$n��ȥ��ʹ��Ŀ��Ͼ��\n"NOR),me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n�����������ڶ�ʽ"HIB"�����Ǵ��¡�"HIW"��"HIY"������"HIW"��Ȼ��$nֱ�̹�ȥ��������$n���ϼ���ҪѨ\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������������ʽ"HIB"�����Ƹ��ꡯ"HIW"��"HIY"������"HIW"��糵����$N����ת��������$n��������������\n\n�����������֣���������\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������������ʽ"HIB"����ɽ������"HIW"��$N��"HIY"������"HIW"�������أ���������������"HIY"������"HIW"���������ʯ\n\n������$n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������������ʽ"HIB"������������"HIW"��$N������"HIY"������"HIW"��$n���ϻ���ʮ����СԲȦ��$n\n\n��Ȼ����һ�𣬶�������\n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
 sprintf(HIW"\n��������������ʽ"HIB"������¥��"HIW"��$N������𣬽�����ת����һ�������㳯$n��ȥ\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n��������������ʽ"HIB"����籩�ꡯ"HIW"���������಻���ĳ�$n��ȥ��ʹ$n�����ش�\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n�����������ڰ�ʽ"HIB"�����ŭ����"HIW"��"HIY"������"HIW"�ڿռ��п��ٵĿ�����ʹ���ܲ����˾޴���ƿ���\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n�����������ھ�ʽ"HIB"��˺�����ơ�"HIW"��"HIY"������"HIW"Ѹ�ٵ������Ҹ��������£��������ٵع���$n\n"NOR), me ,victim,weapon);
 victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n������������ʮʽ"HIB"���ƺ����Ρ�"HIW"����������˿�ӿ������$n�����ܵĻ���Ҳû��\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n������������ʮһʽ"HIB"��������筡�"HIW"��$NԾ�����У�����"HIY"������"HIW"��$nֱ����ȥ������������������ռ�\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
     message_vision(
 sprintf(HIW"\n$Nʹ�꽣��һʮһʽ����Χ�ĺ��ƽ�������ɢ�ˡ�\n\n"NOR), me ,victim);

}
}
}
}
int valid_learn(object me)
{
   object ob;
//   if( !(ob = me->query_temp("weapon")) || (string)ob->query("skill_type") !="sword")
//      return   notify_fail("���˰ѽ��������ֲ�˳�ֵ�, �����ðѽ��������ɡ�\n");
   return   1;
}

int valid_enable(string usage)
{
   return ( usage=="sword") || ( usage=="parry" );
}

int practice_skill(object me)
{
  if( (int)me->query("kee") < 25 )
     return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
  if( (int)me->query("gin") < 5 )
     return notify_fail("��ľ��������ˣ���Ϣһ�������ɡ�\n");
  if( (int)me->query("force") < 1 )
     return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
  me->receive_damage("kee", 25);
  me->receive_damage("gin", 5);
  me->add("force", -1);
  return 1;
}

string perform_action_file(string action)
{
   return CLASS_D("swordsman")+"/dragonsword/"+action;
}

string query_parry_msg(string limb)
{
   return parry_msg[ random( sizeof( parry_msg))];
}

void skill_improved(object me)
{
tell_object(me,"[1;34m������Ǳ��ѧϰ����������������Ӵ����ˣ���[0m\n");
}




