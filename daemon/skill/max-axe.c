
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void power(object me, object victim, object weapon, int damage);
void power1(object me, object victim, object weapon, int damage);
void power2(object me, object victim, object weapon, int damage);
mapping *action = ({
   ([
        "action":
"ֻ��$Nһ��Ծ��,ʹ����"HIW"���׻���ɽ��"NOR",����$w������`�п���ʯ֮��ֱ��$n��ȥ",
        "dodge"      :                25,
        "parry"      :                25,
        "damage"     :                80,
        "force"      :                80,
        "damage_type":               "����"
   ]),
  ([
        "action"     :
"$N���ӻ�����б����Ծ��,������ת֮��,�����"HIB"�����Զɽ���"NOR"ǿ�������Ю���Ź�����ɳ,$w������԰������,ֱ��$n��ȥ",
        "dodge"      :                20,
        "parry"      :                20,
        "damage"     :                90,
        "force"      :                90,
        "damage_type":               "����"
   ]),
  ([
        "action"     :
"$N�������,����$w������ת,һת���ѹ���$n��ǰ,$N�Ż�������"HIR"��Ѫ��鳲��"NOR"��������",
        "dodge"      :                15,
        "parry"      :                15,
        "damage"     :                 90,
        "force"      :                100,
        "damage_type":               "����"
   ]),
  ([
        "action"     :
"$N���һ��,���г���Ѫ��,���Ǽ��Ժ���ֻ��ɱ,һʱ�佫ɽ���ı�����ȫ��¶����,����$w�������$n��ɱ,һ��"HIC"��ŭն���ޡ�"NOR"����Ҳ�㲻��",
        "dodge"      :                10,
        "parry"      :                10,
        "damage"     :                100,
        "force"      :                100,
        "damage_type":               "����"
   ]),
  ([
        "action"     :
"$N������$wһ��,�Լ�����ַ���$n��ȥ,����"HIG"���� �� ն��"NOR"��",
         "dodge"      :                5,
         "parry"      :                5,
         "damage"     :                110,
         "force"      :                110,
         "damage_type":               "ն��"
   ]),
([
         "action"     :
"$N����ȫ����������$w��ʹ��һ��"BLINK+HIW"���۶���ţ��"NOR"$N��ȫ��������$n$l",
         "dodge"      :               -5,
         "parry"      :               -5,
         "damage"     :                130,
         "force"      :                130,
         "damage_type":               "ն��"
   ]),
  ([
         "action"     :
"$N����Ծ������Ӱ������磬һ��"HIY"�������ա�"NOR"���ֱ�����$n��֫",
         "dodge"      :               -10,
         "parry"      :               -10,
         "damage"     :                140,
         "force"      :                140,
         "post_action":               (: power :),
         "damage_type":               "����"
  ]),
([
         "action"     :
"$N����ȫ����,������$wʹ��һ��"BLINK+HIR"���������ԡ�"NOR"��������ĵĲ�����$n",
         "dodge"      :               -15,
         "parry"      :               -15,
         "damage"     :                150,
         "force"      :                150,
         "damage_type":               "����"
   ]),
  ([
         "action"     :
"$N����$w�����ᵤ���ת$w��ʹ��һ��"HIR"����������ơ�"NOR"��$w��������$n���������ȥ",
         "dodge"      :               -20,
         "parry"      :               -20,
         "damage"     :                170,
         "force"      :                170,
         "post_action":               (: power :),
         "damage_type":               "����"
  ]),
  ([
         "action"     :
"$N����$w��������һ�ᡢ����˫�֣���ʱ��ɳ��ʯ���������$Nʹ��һ��"HIB"���޹���ɽ����"NOR"��ʹ����ǰ��δ�еĳ���������$n���Ͽ�����ȥ",
         "dodge"      :               -30,
         "parry"      :               -30,
         "damage"     :                190,
         "force"      :                190,
         "post_action":               (: power :),
         "damage_type":               "����"
  ]),
});
void power(object me, object victim, object weapon, int damage)

{

int i;
 if(me->query("combat_exp") >= 300000 )
 if(me->query("force")>100&&me->query("force_factor"))      

{
   for(i=1;i<=4;i++)
{
    switch(i)
{

case 1:
message_vision(sprintf("$N��$n�Ĺ����߽����ʹ��������ʽ֮"HIY"������ʫ�ϳ"NOR"��ֱȡ$n���Ĵ�Ҫ����\n"),me);


message_vision(sprintf("$N��������ʹ��������ʫ�ϳ������"BLINK+HIB"�� �� �� �� �� �� ��"NOR"��ֱ��$n���ز���\n"),me,victim);
break;


case 2:
message_vision(sprintf("$N�������࣬ʹ��������ʫ�ϳ������"BLINK+HIY"�� �� �� �� �� �� ��"NOR"������$n�ı�����\n"),me,victim);
break;


case 3:
message_vision(sprintf("$N������ü��ʹ��������ʫ�ϳ������"BLINK+HIC"�� �� �� �� �� �� ��"NOR"��ֱȡ$n��ͷ����\n"),me,victim);
break;


case 4:
message_vision(sprintf("$N�����磬ʹ��������ʫ�ϳ������"BLINK+HIW"�� �� Ҷ �� �� �� ��"NOR"��ն��$n���ʺ�\n"),me,victim);
break;
}
     if(me->query_skill("snow-martial",1)>random(150))
{
message_vision(sprintf("�����$Nȷȷʵʵ������Ҫ����$n������Ѫ����ֹ.\n"),me,victim);
            victim->receive_wound("kee",60,me);
          COMBAT_D->report_status(victim, 1);
   me->add("force",-60);
}else{

message_vision(sprintf("���$N�Ĺ�����$n���ɱ��˿�����\n"),me,victim);
}
}
}
}
int valid_learn(object me)
{
       
        if(me->query("max_force")<100)
               return notify_fail("ι! С��, ��������Ҫ 100 ร����㳤���������\n");
        if(me->query_skill("force",1)<10)
               return notify_fail("����ڹ���򲻹����������Ƽ�������\n");
        return 1;

}

 

int valid_enable(string  usage)  {

        if(this_player()->query_skill("max-axe",1) >= 70)
         {
            return (usage=="axe")||(usage=="parry");
         }
             return usage=="axe";
}

 

mapping query_action(object me, object weapon)

{
   int skill;
   skill=me->query_skill("max-axe", 1);
   if( skill < 20)
      return action[random(3)];
   else if( skill < 40)
      return action[random(4)];
   else if( skill < 60)
      return action[random(5)];
   else if( skill < 80)
      return action[random(9)];
   else if( skill < 90)
      return action[random(10)];
   else 
      return action[random(10)];   

}

int practice_skill(object me)

{
        if( (int)me->query("kee") < 30 )
                      return  notify_fail("������������޷���ϰ�Ƽ�������\n");
        if( (int)me->query("force") < 5 )
                   return  notify_fail("�������������������ϰ�Ƽ�������\n");
        me->receive_damage("kee", 30);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)

{
        return CLASS_D("axeman")+"/max-axe/"+action;
}

  


