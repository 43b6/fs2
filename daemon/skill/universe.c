#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void attack(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);
void sp4(object me, object victim, object weapon, int damage);
void sp5(object me, object victim, object weapon, int damage);
void create() { seteuid(getuid()); }

mapping *action = ({

//1
([ "action":
"$N����"HIW"������Ǭ������"NOR"��һ��"HIG"��Ǭ���޶���"NOR", ˫������̫������֮��, ��$n$l��ȥ,���������²���, ��������׽��!!",
        "damage": 90,
        "force":  90,
        "damage_type":  "����",
        "weapon": "˫��",
        "post_action": (: attack :),
]),

//2
([ "action":
"$N����"HIW"������Ǭ������"NOR"�ڶ���"HIM"���𾪰��"NOR", ˫���, ��Ȼ����$n$l������ȥ, ֻ�����������ܵ�$Nǿ������ѹ��, ��������!!",
        "damage": 120,
        "force":  120,
        "damage_type":  "����",
        "weapon": "˫��",
        "post_action": (: attack :),
]),

//3
([ "action":
"$Nʹ��"HIW"������Ǭ������"NOR"������"HIR"�������ԭ��"NOR", ֻ��$Nȫ��͸��������֮״, ������һ��ɨ��$n, ���ƺƴ�, �����ľ�!!",
        "damage": 150,
        "force":  150,
        "damage_type": HIR"�������"NOR"֮��",
        "weapon": HIR"���"NOR,
        "post_action": (: attack :),
]),

//4
([ "action":
"$N����"HIW"������Ǭ������"NOR"���ľ�"HIY"�����ѭ����"NOR", ˫�ֺϱ�̫��֮��, ǿ����������һ���������, ��$n���ƾ�������, ��������$nȫ��!!",
        "damage": 170,
        "force":  170,
        "damage_type": "����",
        "weapon": HIW"�������"NOR,
        "post_action": (: attack :),
]),

//5
([ "action":
"$N���ظ߸�Ծ��, ����"HIW"������Ǭ������"NOR"�����"HIB"���׶����졯"NOR", ��˫�������������֮��, ����������ס$nȫ��, $n����һ��, ֻ�м���ʮ�ɹ�������һ��!",
        "damage": 200,
        "force":  200,
        "damage_type": HIW"��������"NOR"֮��",
        "weapon": HIB"��������"NOR,
        "post_action": (: conti :),
]),

//6
([ "action":
"$N�ƺ���������, ����"HIW"������Ǭ������"NOR"֮"HIW"��Ǭ��������"NOR", ���ʱ��ɢ������$N���������������һ��, ֻ��$N���е�Ǭ���������ϵ�Ϯ��$n, �����񲻿ɵ�!",
        "damage": 200,
        "force":  200,
        "damage_type": HIY"����"NOR"֮��",
        "weapon": HIY"Ǭ������"NOR,
        "post_action": (: attack :),
]),

//����Ǭ������������----�쾪�ض�----������
//7
([ "action":HIM"
                                ����"HBBLU+HIY"�쾪�ض�"NOR+HIM"����"HIW"

                                ��һ��  "BCYN+HIW"��"BWHT+HIC"��"BCYN+HIW"��"BWHT+HIC"��"NOR"

                $Nȫ����������ƥ���\��, ������Ϣ�ϰ�,������ʹ,
                ֻ��$N�������, �����������׶�㼲��$n$l!!\n",
        "damage": 220,
        "force":  220,
        "damage_type": "����",
        "weapon": HIW"���֮��"NOR,
        "post_action": (: sp1 :),
]),

//8
([ "action":HIM"
                                ����"HBBLU+HIY"�쾪�ض�"NOR+HIM"����"HIW"

                                �ڶ���  "HBBLU+HIC"ˮ"HBCYN+HIB"��"HBBLU+HIC"��"HBCYN+HIB"��"NOR"

                ��ʱ��, ֻ��$N���������纣�ξ���, ��ӿ����, ˫ȭ
                ������Х��������Ϯ��֮��, ��$n$l��ȥ!!\n",
        "damage": 240,
        "force":  240,
        "damage_type": "����",
        "weapon":HIB"ŭ"HIC"��"HIB"��"HIC"��"NOR,
        "post_action": (: sp2 :),
]),


//9
([ "action":HIM"
                                ����"HBBLU+HIY"�쾪�ض�"NOR+HIM"����"HIW"

                               ������  "HBRED+HIY"��"HBYEL+HIR"��"HBRED+HIY"��"HBYEL+HIR"Ұ"NOR"

                 $N��֫����, �������, ��$n������������, ֻ��
                 $N�������, ��մ��������צ, ��Ӱ����, $n��
                 ͼ���, ��$N����Ʈ���޶�, ˲Ϣ���һ���$n����
                 ��ȥ!!\n",
        "damage": 260,
        "force":  260,
        "damage_type": HIR"ҵ��"NOR"֮��",
        "weapon":HIR"��"HIY"��"HIR"��"HIY"צ"NOR,
        "post_action": (: sp3 :),
]),


//10
([ "action":HIM"
                                ����"HBBLU+HIY"�쾪�ض�"NOR+HIM"����"HIW"

                               ���Ļ�  "BYEL+HIY"ɽ�����"NOR"

              $N��������, ɽ�ư���, һ��ǿ�������ѹ����$n, $Nƾ
              ��������ɽ��֮��, ����ȭ��, ��$n$l��ȥ,!!\n",
        "damage": 280,
        "force":  280,
        "damage_type": "ѹ��",
        "weapon":YEL"����"HIG"����"NOR,
        "post_action": (: sp4 :),
]),


//11
([ "action":HIM"
                                ����"HBBLU+HIY"�쾪�ض�"NOR+HIM"����"HIW"

                               �����  "HBBLU+HIC"��"HBCYN+HIB"��"HBBLU+BLINK+HIW"�����"NOR"

               $N˫�ֽ�ӡ����, ���ۼ������֮������, ��Ȼһ��������
               $N���г��, ����������ƿ�һ����, ֱ�����, һ����
               Ĭ֮��, һ�ſ��������׹��, ֱ��$n, ��������!!\n",
        "damage": 300,
        "force":  300,
        "damage_type": HIC"��"HIB"��"NOR"֮��",
        "weapon":HIC"����"HIB"����"NOR,
        "post_action": (: sp5 :),
]),
});

void attack(object me, object victim, object weapon, int damage)
{
       int a,lv=me->query_skill("universe",1);
       if ( lv >= 80) { a=7;}
       else a=5;
       if(!lv) lv=2;
       switch(random(a)+1)
       {
          case 1:
                    message_vision("$Nͻʹ����, ȴ�����Ʒ���, ���ò��������!!\n",me,victim);
                    break;
          case 2:
                    damage = 200 + random(100);
                    message_vision(HIY"
$N����$n�����Ѿ�, ����δ��֮��, ˫�ƽ����ĳ�"HIG"�����׸���"HIR"������ɽ��"HIW"������ơ�"HIY"����, $n���޿���, ��ʱԪ������!!"NOR"\n",me,victim);
                    victim->receive_damage("kee",damage,me);
                    COMBAT_D->report_status(victim);
                    break;

          case 3:
                    message_vision("$N˫������, ȴ��$n��������, ֻ������Ϊ��!!\n",me,victim);
                    break;

          case 4:
                    message_vision(HIC"
$N˫��һ��, ͻȻʹ������Ǭ�����ı���"HIW"��"BLINK+HIY"���ȴ�����"NOR+HIW"��"HIC", $n��������һ��, ��ʱ���˸���æ����"NOR"\n",me,victim);
                    victim->start_busy(1);
                    COMBAT_D->report_status(victim);
                    break;

          case 5:
                    message_vision("$Nͻʹ����, ȴ�����Ʒ���, ���ò��������!!\n",me,victim);
                    break;

          case 6:
                    damage = victim->query("force_factor",1)*20+100;
                    message_vision(HIR"

               $NͻȻ��ת����, ��$n֮���ϲ���������һ��ػ�$n����,
               ��������"HIW"������Ǭ������"HIR"������

                                   "BCYN+BLINK+HIY"����תǬ����"NOR"\n\n"NOR,me,victim);

                   victim->receive_damage("kee",damage,me);
                   COMBAT_D->report_status(victim);
                   break;

          case 7:
                    message_vision("$N��ת����, ȴ�޷�������ת, ���ò��ݻ�����!!\n",me,victim);
                    break;
       }
}

void conti(object me, object victim, object weapon, int damage)
{
      int a,lv=me->query_skill("universe",1)/10;
if(50>random(100)) {
      for( a=1;a<=lv;a++)
      {
           message_vision(HBBLU+HIW"$N�ƺ�"HBWHT+HIY"���"HIC"��"HIB"��"HBBLU+HIW"֮��, ������$n����������ȥ!"NOR"\n",me,victim);
           victim->receive_damage("kee",60,me);
           COMBAT_D->report_status(victim);
      }
}
}

void sp1(object me, object victim, object weapon, int damage)
{
// ��Ϊ�ĳ�����ѡ���д��һ�����õ������Ǹ�ֻдһ����ʲ�ֱ���?
// ������������������ô����ѡ�����Ը by swy
if(me->query("env/�쾪�ض�")==1) {
      damage = me->query_temp("tengin_power");
      damage = damage + random(300);
      message_vision("
      "BCYN+HIW"�����$N��˾��Ķ��ǵ�һ��, $n����֪��Ҫ���Ӧ��, ֻ���յ�ȫ��!!"NOR"\n       ",me,victim);
      victim->receive_wound("kee",damage,me);
      COMBAT_D->report_status(victim);
      me->add("force",-500);
      message_vision(NOR"\n",me,victim);

}
}
void sp2(object me, object victim, object weapon, int damage)
{
if(me->query("env/�쾪�ض�")==2) {
      damage = me->query_temp("tengin_power");
      damage = damage + random(400);
      message_vision("
       "HBBLU+HIC"$n����ȫ��������Ϯ�����������һƴ, ��һ�Ӵ��ŷ������ƴ�֮����"NOR"
       "HBBLU+HIC"��, ���Ѻ��Ī��,��ʱ��ԴԴ������ȭ������û����"NOR"\n  "NOR,me,victim);
      victim->receive_wound("kee",damage,me);
      victim->apply_condition("tsunami",5);
      me->add("force",-600);
      COMBAT_D->report_status(victim);
      message_vision(NOR"\n",me,victim);
}
}

void sp3(object me, object victim, object weapon, int damage)
{
if(me->query("env/�쾪�ض�")==3) {
      damage = me->query_temp("tengin_power");
      damage = damage + random(500);
      message_vision("
           "HBRED+HIY"��ʱ���ϻ���ƬƬ, ������ȼ�������һ�, ����ں�, ������������, "NOR"
           "HBRED+HIY"$n���ݻ�֮��, �������˵Ĳҽ���"NOR"\n           "NOR,me,victim);
      victim->receive_wound("kee",damage,me);
      victim->apply_condition("skyfire",5);
      me->add("force",-700);
      COMBAT_D->report_status(victim);
      message_vision(NOR"\n",me,victim);
}
}

void sp4(object me, object victim, object weapon, int damage)
{
if(me->query("env/�쾪�ض�")==4) {
      int i;
      damage = me->query_temp("tengin_power");
      damage = damage + random(600);
      for(i=1;i<=5;i++)
      {
         switch(i)
         {
            case 1:
message_vision("              "HBGRN+HIW"$N�趯"HIG"��������̩ɽ��"HIW"������µ����ƣ�ֱ��$n!!"NOR"\n              ",me,victim);
            break;
            case 2:
message_vision("              "HBGRN+HIW"$N����"HIC"����������ɽ��"HIW"����Ʈ��֮��, ��$n��ȥ!!"NOR"\n              ",me,victim);
            break;
            case 3:
message_vision("              "HBGRN+HIW"$N����"HIM"����������ɽ��"HIW"�ĺ�Ȼ������˫ȭ����$n!!"NOR"\n              ",me,victim);
            break;
            case 4:
message_vision("              "HBGRN+HIW"$Nʹ��"HIY"����������ɽ��"HIW"��������֮�󣬶�$n��ȥ!!"NOR"\n              ",me,victim);
            break;
            case 5:
message_vision("              "HBGRN+HIW"$Nȭ��"HIR"����������ɽ��"HIW"�Ͻ�����̬֮����$n����!!"NOR"\n              ",me,victim);
            break;
         }
         victim->receive_wound("kee",(int)(damage/5),me);
         COMBAT_D->report_status(victim);
      }
      if(damage>=2600)
      {
         message_vision("

              "HBBLU+HIW"���Ȼ�����ˡ�"BLINK+HIG"��"HIY"��"HIC"��"HIR"һ"NOR+HBBLU+HIW"��������, ȭ����������, "NOR"
              "HBBLU+HIW"��$n����ʯ���쾪��һ��!!!!"NOR"\n\n              ",me,victim);
         victim->receive_wound("kee",1000,me);
         me->add("force",-1000);
         COMBAT_D->report_status(victim);
      }
      else
      {
         me->add("force",-800);
      }
      message_vision(NOR"\n",me,victim);
}
}

void sp5(object me, object victim, object weapon, int damage)
{
if(me->query("env/�쾪�ض�")==5) {
      int i;
      object *enemy;
      enemy = me->query_enemy();
      i = sizeof(enemy);
      damage = me->query_temp("tengin_power");
      damage = damage + random(700);
      while(i--)
      {
         enemy[i]->receive_wound("kee", damage,me);
         message_vision("
            "HBMAG+HIW"������确��١�������ײ���, $n���޿ɵ�, ��ʱƬ������!!!!"NOR"\n            ",me,enemy[i]);
         COMBAT_D->report_status(enemy[i]);
      }
      me->add("force",-900);
      message_vision(NOR"\n",me,victim);
}
}

mapping query_action(object me, object weapon)
{
      int level=(int)(me->query_skill("universe",1));

      if ( me->query_temp("tengin") == 1)
      {
         me->delete_temp("tengin");
         return action [6];
      }
      else if ( me->query_temp("tengin") == 2 )
      {
         me->delete_temp("tengin");
         return action [7];
      }
      else if ( me->query_temp("tengin") == 3 )
      {
         me->delete_temp("tengin");
         return action [8];
      }
      else if ( me->query_temp("tengin") == 4 )
      {
         me->delete_temp("tengin");
         return action [9];
      }
      else if ( me->query_temp("tengin") == 5 )
      {
         me->delete_temp("tengin");
         return action [10];
      }
      else if ( level < 20 )
         return action [random(2)];
      else if ( level < 40 )
         return action [random(4)];
      else if ( level < 80 )
         return action [random(5)];
      else
         return action [random(6)];
}

int valid_learn(object me)
{
      if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
         return notify_fail("������Ǭ������Ҫ��������..\n");
      if(me->query("max_force")/10<=me->query_skill("universe"))
         return notify_fail("�������̫��, �޷�����������һ����\n");
      return 1;
}

int valid_enable(string usage)
{
      return (usage=="unarmed"||usage=="parry");
}

int practice_skill(object me)
{
      if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
         return notify_fail("������Ǭ��������Ҫ���ְ�....\n");
      if( (int)me->query("gin") < 5 )
         return notify_fail("��ľ��������޷���ϰ��\n");
      if( (int)me->query("kee") < 30 )
         return notify_fail("����������,��Ϣһ���ټ�������.\n");
      if( (int)me->query("force") < 1 )
         return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
      me->receive_damage("gin", 5);
      me->receive_damage("kee", 30);
      me->add("force", -1);
      return 1;
}
string perform_action_file(string action)
{
      return CLASS_D("prayer")+"/universe/"+action;
}
