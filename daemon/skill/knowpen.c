#include <combat.h>
#include <ansi.h>
inherit SKILL;

void special_attact1(object me, object victim, object weapon, int damage);
void special_attact2(object me, object victim, object weapon, int damage);
void sp_att1(object me, object victim, object weapon, int damage);
void sp_att2(object me, object victim, object weapon, int damage);
void sp_att3(object me, object victim, object weapon, int damage);
mapping *action = ({
      ([
        "action"     :
"$N����$wһ����һ��"HIW"��"NOR"������"HIB"ˮ"HIW"��"NOR"�����$w��һ��������ת����$n$l��ȥ",
        "dodge"      :               -10,
        "parry"      :               -10,
        "damage"     :                50,
        "force"      :                100,
        "damage_type":  "����",
      ]),
      ([
        "action"     :
"$N������ת�������߲�������$wһ��"HIW"��"HIG"�߲���"HIC"ʫ"HIW"��"NOR"��$n��ȥ",
        "dodge"      :                0,
        "parry"      :                0,
        "damage"     :                50,
        "force"      :                100,
        "damage_type":  "����",
      ]),
      ([
        "action"     :
"$N����$wҡ�Σ�����΢�٣�ٿ��һ��"HIW"��"HIW"��"HIR"��"NOR"����"HIW"��"NOR"��$w�ӳ�������������$n��ȥ",
        "dodge"      :                -10,
        "parry"      :                10,
        "damage"     :                100,
        "force"      :                200,
        "damage_type":  "����",
      ]),
      ([
        "action"     :
"$N�������$w�߸߾��𣬺�������$w����������һ��"HIW"��"HIY"��"HIM"԰����"HIW"��"NOR"���಻������$n����",
        "dodge"      :                -20,
        "parry"      :                20,
        "damage"     :                100,
        "force"      :                200,
        "damage_type": "����",
      ]),
///////////////////////// Below Add By AceLan ////////////////////////////////
      ([
        "action"     :
"$N��Ȼ����бб����������, ʹ��һ��"HIW"��"HIR"�ֲ�б��"HIW"��"NOR",��$n$l��ȥ",
        "dodge"      :                -30,
        "parry"      :                30,
        "damage"     :                150,
        "force"      :                250,
        "damage_type": "����",
      ]),
      ([
        "action"     :
"$N��׼��$n����, ʹ��һ��"HIW"��"NOR"ӭ��"HIB"��"HIR"��"HIW"��"NOR", �����Ļ���һ��",
        "dodge"      :                -30,
        "parry"      :                20,
        "damage"     :                150,
        "force"      :                250,
        "damage_type": "����",
      ]),
      ([
        "action"     :
"$N���һ��, ���μ�ת, ʹ�����ŵľ���"HIW"��"HIB"��"HIR"��"HIY"��"HIG"��"HIW"��"NOR", ����$w�����㳯$n����",
        "dodge"      :                -50,
        "parry"      :                40,
        "damage"     :                200,
        "force"      :                300,
        "damage_type": "����",
      ]),
      ([
        "action"     :
"$N��������, ����˲ʱ����ǿ��, ���������ŵ�"HIW"��"HIB"��"NOR"ɨ"HIR"÷��"HIW"��"NOR", ֻ��$N����Ӱ�������",
        "parry"      :                30,
        "dodge"      :                -40,
        "damage"     :                200,
        "force"      :                300,
        "damage_type": "����",
      ]),
      ([
        "action"     :
"$Nʹ��һ��"HIW"��"HIB"����"HIM"��"NOR"��"HIW"��"NOR", ֻ��$N����$w�������������ҵس�$n���ϼ���",
        "parry"      :                30,
        "dodge"      :                -40,
        "damage"     :                250,
        "force"      :                 300,
        "damage_type": "����",
      ]),
           ([        "action":
"$N��������������ȫ�����������������������$w��׼��ʹ��������̾�ʽ֮һ\n"
"$N������ͻȻ������ʧ������˳ʱ�������֣�$nֻ�е��мܲ�ס��",
           "damage":        300,
           "dodge":        -30,
           "parry":         10,
           "post_action":  (: sp_att2 :),
              "damage_type":"����"
             ]),
           ([         "action":
"$N����$w�����ý�̬֮���������лû��ɽ���׼��ʹ�������̾�ʽ֮һ\n"
"$N���޷�����ס����ɱ������⣬$n�ƺ��е㿴������֮����",
           "damage":        300,
           "dodge":        -30,
           "parry":         10,
           "post_action":  (: sp_att3 :),
              "damage_type":"����"
            ]),
      ([
        "action"     :
"$N���μ�ת, ͻȻ���Ծ��, ����$w���ҷ�, ��$n����ָָ���, �������,
��һ���������ŵľ���"HIW"��"NOR"ת"HIB"��"HIG"��"HIR"��"HIW"��"NOR,
        "dodge"      :                50,
        "parry"      :                30,
        "damage"     :                250,
        "force"      :                300,
        "damage_type": "����",
        "post_action": (: special_attact1 :),
      ]),
      ([
        "action"     :
"$N����ͻȻ�θ�����, ʹ��һ��"HIW"��"HIB"��"HIR"��"HIY"��"HIB"��"HIW"��"NOR", ����$w�ӿ���ƮȻ�»�,
ֻ��һ�����ξ���, Ю�ſ�糯��$n�������",
        "dodge"      :                60,
        "parry"      :                40,
        "damage"     :                300,
        "force"      :                300,
        "damage_type": "����",
        "post_action": (: special_attact2 :),
      ]),
      ([
        "action"     :
"$NͻȻȫ������̹⣬���۵�������˵ĺ�����ʹ���������߱ʷ�"HIW"��"HIB"��"HIR"��"HIY"��"HIB"��"HIW"��"NOR",
ֻ��һ������Ю�����ɹ�â�ѽ�$nȫ������ס��",
        "dodge"      :                60,
        "parry"      :                40,
        "damage"     :                300,
        "force"      :                300,
        "damage_type": "����",
        "post_action": (: sp_att1 :),
      ]),

});

void special_attact1(object me, object victim, object weapon, int damage)
{
   int dam=victim->query("max_kee")/5;
   if( dam > 1000) dam= 1000;
   if(50>random(100))
   {
      message_vision(HIB
"\n$N����"HIW+ weapon->query("name")+HIB"����ʯ����������, ��$n��̨Ѩһ·˳�ƶ���, \n", me, victim);
      message_vision(
"ʹ�������ŵ�������ˮ�ʷ����������ľ���, ��$n������ÿһѨ����������һ�¡�\n"NOR, me, victim);
      victim->receive_damage("kee", dam);
      COMBAT_D->report_status(victim, 1);
   }
   else
   {
      message_vision(HIB
"\n$N����"HIW+ weapon->query("name")+HIB"����ʯ����������, ��$n��̨Ѩһ·˳�ƶ���, \n"NOR, me, victim);
      message_vision(HIW
"����$n���θ���, ����ıܹ���$N����������һ��\n"NOR, me, victim);
   }
}

void special_attact2(object me, object victim, object weapon, int damage)
{
   int dam=victim->query("max_kee")/5;
   if( dam > 1000) dam= 1000;
   if(50>random(100))
   {
      message_vision(HIB
"\n$Nʹ�����ұ���, ��ʱ������, ����"HIW+ weapon->query("name")+HIB"�û����������, \n", me, victim);
      message_vision(
"�������, ����ʵ��, ����ʵ�صس�$n����������\n"NOR, me, victim);
      victim->receive_damage("kee", dam);
      COMBAT_D->report_status(victim, 1);
   }
   else
   {
      message_vision(HIB
"\n$Nʹ�����ұ���, ��ʱ������, ����"HIW+ weapon->query("name")+HIB"�û����������, \n", me, victim);
      message_vision(
"�������, ����ʵ��, ����ʵ�صس�$n����������\n"NOR, me, victim);
      message_vision(HIW
"����$n���θ���, ����ıܹ���$N����������һ��\n"NOR, me, victim);
   }
}

// valid_learn ֻ�Ǽ���Ƿ����ѧ, �����ڴ˼� skill
int valid_learn(object me)
{
   if ((int)me->query_skill("literate")*2<(int)me->query_skill("knowpen"))
      return notify_fail("��Ķ���ʶ�̶ֳȲ����������������еĵ���\n");
   return 1;
}

void sp_att1(object me, object victim, object weapon, int damage)
{
   int dam=victim->query("max_kee")/5;
   if( dam > 1000) dam= 1000;
   if( 50>random(100))
   {
      if( present("ten pen", me))
      {
         dam/=3;
         message_vision(
""HIW"$N����Ĭ�������ʷ���ת�����庮�⣬���֮�£�������â��"NOR"\n"
""HIW"$NǱ��ʫ���ķ�����̤��˪��ѩ����������������ʶ�ʱ�������������"NOR"\n"
""HIW"ֻ�����ܿ����������˪����$n����������䴩��$n�Ļ�������������ش�"NOR"\n",me,victim);
      }
      else
      {
         dam/=5;
         message_vision(
""HIW"$N�����������$w��ֻ�����������$n�������"NOR"\n",me,victim);
      }
       victim->receive_daemage("kee", dam);
       COMBAT_D->report_status(victim, 1);
       me->add("force",-100);
   }
}

void sp_att2(object me, object victim, object weapon, int damage)
{
   int dam=victim->query("max_kee")/5;
   if( dam > 1000) dam= 1000;
   if(50>random(100))
   {
      message_vision(
""HIW"$N�ٻ�����������ת���ζ�������˳ʱ������ӯ��ȫ��֮�У�ʹ�������������"NOR"\n"
""HIW"               �����填�̡������С�"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"����"NOR"\n"
""HIW"$N�������ƶ�ȥ��������������������$n��$n��ʧ��֮�����ܴ�����"NOR"\n",me,victim);
         victim->receive_daemage("kee", dam);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-100);
   }
}
void sp_att3(object me, object victim, object weapon, int damage)
{
   int dam=victim->query("max_kee")/5;
   if( dam > 1000) dam= 1000;
   if(50>random(100))
   {
      int i;
      for(i=1;i<=4;i++)
      {
         message_vision(HIW"����������֮��｣�ʣ��Աʴ�����˳ʱ���ƾ�ʽ����֮����ʮ��������ʹ�����У�\n"NOR,me,victim);
         switch(i)
         {
            case 1:
                message_vision(sprintf("$Nʹ����"HIC"����Ӱ���ա���"NOR"���������������Ի�$n��\n"),me,victim);
                break;
            case 2:
                message_vision(sprintf("$Nʹ����"HIC"�����ơ�������"NOR"����������������ס$n��\n"),me,victim);
                break;
            case 3:
                message_vision(sprintf("$Nʹ����"HIC"�����С�ɱ����"NOR"��������������ɱ��$n��\n"),me,victim);
                break;
            case 4:
                message_vision(sprintf("$Nʹ����"HIC"�����桫�𡫵�"NOR"�����Է�������ɱ��$n��\n"),me,victim);
                break;
         }
           victim->receive_daemage("kee",dam);
           COMBAT_D->report_status(victim, 1);
      }
      me->add("force",-100);
   }
}

int valid_enable(string usage)
{
   return (usage=="stabber")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
// skill level < 40 ֻ��ʹ��ǰ 9 ��
if( me->query_skill("knowpen",1) < 40)
      return action[ random( sizeof( action)- 4)];
// skill level > 50 ��ʹ��ǰ 4 ��...�����ع�ʹ����...
   else
      return action[ random( sizeof( action)- 4)+ 4];
}

// ���ֻ�ǲ�ѯ�Ƿ������ϰ, ���� skill ���������.
int practice_skill(object me)
{
   object weapon;

   me->receive_damage("sen",30);
   if (me->query_skill("literate")*2<me->query_skill("knowpen"))
      return notify_fail("��Ķ���ʶ�ֲ����������������еĵ���\n");
   if( !objectp(weapon = me->query_temp("weapon")) ||
      ( string)weapon->query("skill_type")!="stabber")
   {
      return notify_fail("��Ҫ���ʺϵ�����������������ˮ�ʷ���\n");
   }

   if( ( int)me->query("sen")<30)
      return notify_fail("����񲻹���������������ˮ�ʷ���\n");
   return 1;
}

string perform_action_file(string action)
{
   return CLASS_D("scholar")+"/knowpen/"+action;
}
