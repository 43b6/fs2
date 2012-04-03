//pd-staff.c editer.by Chan

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack1(object me, object victim, object  weapon, int damage);
void again1(object me, object victim, object  weapon, int damage);
string *array_msg=
    ({
      "[1;33m$N�����Ŵ�ң��λ����󣬸�������ʹ���󷨷����¼��㡣\n[0m",
      "[1;33m���˷��ӳ���֮����仯��ʹ���������������Ԩ��\n[0m",
      "^[[1;33m$Nָ�������������书��ϵ������޷죬����ʽ������ˡ�\n^[[0m",
      "[1;33m���˷��ӳ���֮������壬���Ե��˵��𺦷��ӳ����ľ���\n[0m",
     });
mapping *action = ({
(["action":"$N��׼$n������,��Ӷ���ʹ��"HIW"��������ɽ��"NOR",��׼$n��$l���ݻ���",
"dodge":-60,
"parry":90,
"force":60,
"damage":50,
"damage_type" : "����",
]),
(["action":"$N����$n������ʹһ��"HIW"���������硱"NOR",���еİ��Ӽд�ǿ���������$n��$l�ӳ�",
"dodge":-60,
"parry":90,
"force":70,
"damage":50,
"damage_type" : "����",
]),
(["action":"$N�����ϵİ���,ֱֱ����$n��$l����һ��"HIW"��ֱ�����롱"NOR,
"dodge":-90,
"parry":110,
"force":100,
"damage":60,
"damage_type" : "����",
]),
(["action":"$NԾ�������,�߾����еİ����ͻӶ���һ��"HIW"�����Ǹ��¡�"NOR"�������ǰ���$n��$l��������",
"dodge":-90,
"parry":110,
"force":100,
"damage":70,
"damage_type" : "����",
]),
(["action":"$N�����еİ���,������תʹ�������ȷ�֮����"HIW"���޾��޻ڡ�"NOR"������İ�Ӱ��$n��$lϮȥ",
"dodge":-90,
"parry":110,
"force":100,
"damage":80,
"post_action":  (: again1 :),
"damage_type" : "����",
]),
(["action":"$N���$n����������֮"HIW"�����������"NOR"����$n�Ĺ���һ��",
"dodge":-90,
"parry":120,
"force":100,
"damage":90,
"post_action":  (: attack1 :),
"damage_type" : "����",
]),
(["action":"$N�Եв���,�Ҳ������$n��һ�а���"HIC"��������Ӱ��"NOR"ʹ$n���������в�������$l����",
"dodge":-100,
"parry":120,
"force":100,
"damage":90,
"damage_type" : "����",
]),
(["action":"$N��������,�û�������������"HIC"�����ŭ��"NOR"���������γɵķ羢��$n��$lϮȥ",
"dodge":-100,
"parry":130,
"force":100,
"damage":90,
"damage_type" : "����",
]),
});

mapping query_action(object me, object weapon)
{
int skill;
   skill=me->query_skill("follow-staff", 1);
   if( me->query_temp("use_form",1))
     message_vision( array_msg[random(sizeof(array_msg))],me );
   if( skill < 50)
      return action[random(4)];
   else if( skill < 60)
      return action[random(4)+1];
   else if( skill < 70)
      return action[random(4)+2];
   else if( skill < 90)
      return action[random(4)+3];
   else
      return action[random(4)+4];
}
void attack1(object me, object victim, object weapon, int damage)
{
 int busy_value,skill;
 skill=me->query_skill("follow-staff", 1);
 busy_value = skill / 3;
 if((me->query_skill_mapped("force")=="followforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIY"$N�������ȷ���Ϻ������ķ�������˿��ס$n����֫�ٺ�\n"NOR,me,victim);
   victim->start_busy( busy_value );
   COMBAT_D->report_status(victim, 1);
  }
}

void again1(object me, object victim, object weapon, int damage)
{
 int i,value,k=0,skill,l=5;
 skill=me->query_skill("follow-staff", 1);
 skill = skill / 10;
 if(skill > 9)
 {
  k = 6;
  l = 3;
 }
 else if (skill > 7)
      {
       k = 5;
       l = 4;
      }else if (skill > 4 )
       {
        k = 4;
        l = 5;
       }
 if(me->query("force")>100&&me->query("force_factor"))
 {
   for (i=0;i<k;i++)
    {

      message_vision(HIW"$Nʹ����������֮���һ�֮����,��������Ӱ��$n��ɨ��ȥ��\n"NOR, me, victim);
      value = random (10);
      if (value >= l)
       {
        message_vision("�����$N׼ȷ������Ҫ��,$n�����������İ��ۡ�\n", me, victim);
        victim->receive_wound("kee",25,me);
        me->add("force",-50);
        COMBAT_D->report_status(victim, 1);
       }
      else
        message_vision("���$n������İ�Ӱ���˳�����\n", me, victim);
    }
    message_vision(HIW"һ���ɨ֮��$N�ھ���Ĺ����޷��ƶ���\n"NOR,me);
    me->start_busy(1);
    COMBAT_D->report_status(victim, 1);
  }
}

int practice_skill(object me)
{
  if( (int)me->query("kee") < 30 )
      return  notify_fail("������������޷���ϰ�����ȷ���\n");
  if( (int)me->query("force") < 5 )
      return  notify_fail("�������������������ϰ�����ȷ���\n");
  me->receive_damage("kee", 30);
  me->add("force", -5);
  return 1;
}

string perform_action_file(string action)
{
          return CLASS_D("beggar")+"/follow-staff/"+action;
}
int valid_learn(object me)
    {
        object weapon = me->query_temp("weapon");
        if( me->query("max_force") < 50 ) {
            tell_object(me, "���������Ϊ����, ����Ҫ����ʮ�㡣\n");
            return 0;
        }
        if(!(me->query("class") == "beggar")) {
            tell_object(me, "ֻ��ؤ����Ӳ���ѧ�����ȷ���\n");
            return 0;
        }
        if( me->query("str") >= 20 ) {
            tell_object(me, "��ı��������޷�ѧ�����ȷ���\n");
            return 0;
        }
        if( !weapon || weapon->query("skill_type") != "staff" ) {
            tell_object(me, "�����ް���ô������ѽ?\n");
            return 0;
        }
        return 1;
}
int valid_enable(string usage)
{        return ( usage=="staff" )||(usage=="parry");
}
