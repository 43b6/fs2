//pd-staff.c editer.by Chan

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack1(object me,object victim,object weapon,int damage);
void attack2(object me,object victim,object weapon,int damage);
void attack3(object me,object victim,object weapon,int damage);
void attack4(object me,object victim,object weapon,int damage);
void again1(object me,object victim,object weapon,int damage);
string *array_msg=
    ({
      "[1;33m$N�����Ŵ�ң��λ����󣬸�������ʹ���󷨷����¼��㡣\n[0m",
      "[1;33m���˷��ӳ���֮����仯��ʹ���������������Ԩ��\n[0m",
      "[1;33m$Nָ�������������书��ϵ������޷죬����ʽ������ˡ�\n[0m",
      "[1;33m���˷��ӳ���֮������壬���Ե��˵��𺦷��ӳ����ľ���\n[0m",
     });
mapping *action = ({
(["action":"$N�����еİ���,��������ʹ��"HIW"������˫Ȯ��"NOR",��׼$n��$l��ٿ��һ��~����",
"dodge":-60,
"parry":90,
"force":60,
"damage":60,
"damage_type" : "����",
]),
(["action":"$Nʹ��"HIW"�������Ȯ��"NOR",���еİ����������ް����$n��$l�ݳ�",
"dodge":-60,
"parry":90,
"force":70,
"damage":70,
"damage_type" : "����",
]),
(["action":"$N�����ϵİ���,��׾ʵ��ֱֱ����$n��$l����һ��"HIW"���������֡�"NOR,
"dodge":-90,
"parry":110,
"force":100,
"damage":70,
"damage_type" : "����",
]),
(["action":"$NԾ�������,�߾����еİ���һ��"HIW"������׹�ء�"NOR"�������ǰ���$n��$l��������",
"dodge":-90,
"parry":110,
"force":100,
"damage":80,
"damage_type" : "����",
]),
(["action":"$N�����еİ���,����ȦȦһ��"HIW"�������޾���"NOR"�����ϵ��ھ���$n��$lϮȥ",
"dodge":-90,
"parry":110,
"force":100,
"damage":70,
"damage_type" : "����",
]),
(["action":"$N���$n�Ĺ���ʹ��"HIW"���⹷���⡱"NOR"��������һ��,���ð�����$n��$lһ��",
"dodge":-90,
"parry":120,
"force":100,
"damage":80,
"damage_type" : "����",
]),
(["action":"$N�����еİ���,������������һ��"HIC"���������족"NOR"ʹ$n���������в�������$l����",
"dodge":-100,
"parry":120,
"force":100,
"damage":80,
"damage_type" : "����",
]),
(["action":"$N���ھ���ע������,"HIC"�����׷ѩ��"NOR"���������γɵĺ�����$n��$lϮȥ",
"dodge":-100,
"parry":130,
"force":100,
"damage":85,
"damage_type" : "����",
]),
(["action":"$N�ľ�ȫ������,һ��"HIC"���Ұ������"NOR"�����еİ�����$n��$l�һ�����",
"dodge":-100,
"parry":120,
"force":100,
"damage":90,
"damage_type" : "����",
]),
(["action":"$N���һ��,����ɢ��ʹ������"HIC"�������޹���"NOR"������İ�����$n��$l��Ϯ��ȥ",
"dodge":-100,
"parry":120,
"force":110,
"damage":95,
"damage_type" : "����",
]),
(["action":"$N����򹷰����Ĵ���֮"HIC"���ҡ�"NOR"�־������еİ������������޾�����$n��$l��ɨ��ȥ",
"dodge":-100,
"parry":120,
"force":110,
"damage":100,
"post_action":  (: attack1 :),
"damage_type" : "����",
]),
(["action":"$N����򹷰����Ĵ���֮"HIC"���⡱"NOR"�־������еİ����纣��һ�߰��ס$n�Ĺ���,����ͬʱ��ȥ",
"dodge":-100,
"parry":120,
"force":110,
"damage":100,
"post_action":  (: attack2 :),
"damage_type" : "����",
]),
(["action":"$N����򹷰����Ĵ���֮"HIC"������"NOR"�־������еİ���������������$n��$l��������",
"dodge":-100,
"parry":110,
"force":110,
"damage":105,
"post_action":  (: attack3 :),
"damage_type" : "����",
]),
(["action":"$N����򹷰����Ĵ���֮"HIC"������"NOR"�־������еİ��������߳�������$n��$l���ݶ���",
"dodge":-100,
"parry":120,
"force":110,
"damage":105,
"post_action":  (: attack4 :),
"damage_type" : "����",
]),
(["action":HIR"$N���Ⱦ�ȫ�������,ʹ���򹷰����еġ��һ�������������Ӱ����ǵذ���$nϮȥ"NOR,
"dodge":-110,
"parry":150,
"force":150,
"damage":70,
"post_action":  (: again1 :),
"damage_type" : "����",
]),
});

mapping query_action(object me, object weapon)
{
int skill;
   skill=me->query_skill("pd-staff", 1);
   if( me->query_temp("use_form",1))
     message_vision( array_msg[random(sizeof(array_msg))],me );
   if( skill < 50)
      return action[random(7)];
   else if( skill < 60)
      return action[random(7)+2];
   else if( skill < 70)
      return action[random(7)+3];
   else if( skill < 80)
      return action[random(7)+5];
   else if( skill < 90)
      return action[random(7)+7];
   else
      return action[random(7)+8];
}
void attack1(object me, object victim, object weapon, int damage)
{
 int att_value,skill;
 skill=me->query_skill("pd-staff", 1);
 att_value = skill * 12;
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIR"$N���򹷰������ϴ�辭�еİ�������$nȫ��Ѫ��\n"NOR,me,victim);
   victim->add("force",-att_value);
   COMBAT_D->report_status(victim, 1);
  }
}
void attack2(object me, object victim, object weapon, int damage)
{
 int busy_value,skill;
 skill=me->query_skill("pd-staff", 1);
// busy_value = skill / 2;
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIW"$N���򹷰����з��־��ͽ�������Ϸ�ס$n����֫�ٺ�\n"NOR,me,victim);
   victim->start_busy( 1 );
   COMBAT_D->report_status(victim, 1);
  }
}
void attack3(object me, object victim, object weapon, int damage)
{
 int att_value,skill;
 skill=me->query_skill("pd-staff", 1);
 att_value = skill * 14;
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIB"$N���򹷰�����ת�־�ע�뽵�����γ������Ϯ��$n\n"NOR,me,victim);
   victim->add("kee",-att_value);
   COMBAT_D->report_status(victim, 1);
  }
}
void attack4(object me, object victim, object weapon, int damage)
{
 int att_value,skill;
 skill=me->query_skill("pd-staff", 1);
 att_value = skill * 14;
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIG"$N����������ϴ򹷰��������־�,���������������$n\n"NOR,me,victim);
   victim->add("kee",-att_value);
   COMBAT_D->report_status(victim, 1);
  }
}

void again1(object me, object victim, object weapon, int damage)
{
        int i,time;
        int level=(int)(me->query_skill("pd-staff",1)/10);
	time=level+2;
        if (level > 6)
        {
  if( me->query_temp("pd-staff") == 0 && me->query("class")=="beggar" )
          {
              me->set_temp("pd-staff",1);
              message_vision(HIW"$Nʹ���򹷰���֮����ȡ֮����,�����İ�Ӱ��$n��ɨ��ȥ��\n"NOR, me, victim);
              for(i=1;i<=time;i++)
        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
              me->delete_temp("pd-staff");
             me->start_busy(1);
          }
        } 

}

int practice_skill(object me)
{
  if ((int) me->query("max_force")<10000)
  return notify_fail("����ѧ֪ʶ���㣬�޷���͸�򹷰����ľ���֮��\n");
}

string perform_action_file(string action)
{
          return CLASS_D("beggar")+"/pd-staff/"+action;
}
int valid_learn(object me)
    {
        object weapon = me->query_temp("weapon");
        if( me->query("max_force") < 1000 ) {
            tell_object(me, "���������Ϊ����, ����Ҫ��һǧ�㡣\n");
            return 0;
        }
        if(!(me->query("class") == "beggar")) {
            tell_object(me, "ֻ��ؤ����Ӳ���ѧ�򹷰�����\n");
            return 0;
        }
        if( me->query("str") >= 20 ) {
            tell_object(me, "��ı��������޷�ѧ�򹷰�����\n");
            return 0;
        }
        if(!(me->query("beggar/quests 10") == 1 )) {
            tell_object(me, "ؤ�����Ҫ�������ʮ����ѧ��\n");
            return 0;
        }
        if( me->query("force") < 500 ) {
            tell_object(me, "��Ŀǰ������������ٵ�, �޷����˾�ѧ��\n");
            return 0;
        }
        if( (me->query("potential") - me->query("learned_points")) < 2 ) {
            tell_object(me, "���Ǳ�ܲ�������, �޷����˾�ѧ��\n");
            return 0;
        }
        if( !weapon || weapon->query("skill_type") != "staff" ) {
            tell_object(me, "�����ް���ô������ѽ?\n");
            return 0;
        }

        tell_object(me, "ѧ�˾�ѧ���Ǳ�ܶ��㡣\n");
        me->add("potential", -2);
        return 1;
}
int valid_enable(string usage)
{        return ( usage=="staff" )||(usage=="parry");
}
