// shadow-kill written by mtl on May 9th, 1996
// Ver 1.02 modified by mtl on Jul 9th, 1996
// Ϊ�˱����ͻ�������enable����skills�����ޣ����Լ������ư������enable
// By Swy ������� QC 98/6/23
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void busyk(object me,object victim,object weapon, int damage);
void devour(object me, object victim, object weapon, int damage);
void bloodk(object me, object victim, object weapon, int damage);
void reversek(object me, object victim, object weapon, int damage);
void shadowk(object me, object victim, object weapon, int damage);
void devast(object me, object victim, object weapon, int damage);

mapping *action = ({
([ "action":"$N��Ȼʹ����ͣ�ƴ�ѩ������˻ġ��ľ���ɱ�ţ����������绢����������׹������$n��ȥ����$n���޿ɱܡ�",
"dodge": -30,
"parry": 10,
"damage": 10,
"force": 30,
"damage_type": "����",
]),
([ "action":"$N�Ȼ̾�������޹����᲻�����޹��ˡ�������������Ȼ��������Ȼɱ�⣬ʹ������ɽǧ�������˸�������$n����ȥ������ָ��Ҫ����",
"dodge": -40,
"parry": 20,
"damage": 20,
"force": 0,
"damage_type":  "����",
"post_action": (: devour :),
]),
([ "action":"$N��Ц��Ц��������������ɢ�ǡ��ľ���ֻ��$N���ϵ�$wһĨ�������𣬲�ס����������һ��������$n���伱����",
"dodge": -40,
"parry": 25,
"damage": 30,
"force": 40,
"damage_type": "����",
"post_action": (: bloodk :),
]),
([ "action":"$N���߻��ǲ�����ʹ����������Ρ��İ��أ���$n��������λ֮霺ڿռ䡣���׼�Ȼָ�򾩷���֮Ѫ����λ��ֻ��$n�������ײײ����$w��ȥ....",
"dodge": 10,
"parry": 0,
"damage": 40,
"force": 0,
"damage_type": "����",
"post_action": (: reversek :),
]),
([ "action":"$N����һ��һϢ֮�䣬������Ȼ�����벻��ħ�ء�������$wӰ������ȥ����������Ϣ�ص���$n$l....",
"dodge": 15,
"parry": 5,
"damage": 50,
"force": 60,
"damage_type": "����",
"post_action": (: shadowk :),
]),
([ "action":"$N��������������ͨ�أ���Ȼ������"+BLINK+BOLD+"��һ��������ʽ��"+YEL+"���λ���Ӱ"+WHT+"��"+BLU+"��¶�����"+WHT+"��"+NOR+"����ȥ��ѧ���Ӱذ�ף�һʱ֮���ڻ��ͨ��ԴԴ����������ʹ������Ϊ����˼��֮��ӿ��$n....",
"dodge": -30,
"parry": 10,
"damage": 60,
"force": 60,
"damage_type": "����",
"post_action": (: devast :),
]),
([ "action":"$N��Ȼʹ����ͣ�ƴ�ѩ������˻ġ��ľ���ɱ�ţ����������绢����������׹������$n��ȥ����$n���޿ɱܡ�",
"dodge": -30,
"parry": 20,
"damage": 70,
"force": 50,
"damage_type": "����",
]),
([ "action":"$N�Ȼ̾�������޹����᲻�����޹��ˡ�������������Ȼ��������Ȼɱ�⣬ʹ������ɽǧ�������˸�������$n����ȥ������ָ��Ҫ����",
"dodge": -30,
"parry": 25,
"damage": 70,
"force":  0,
"damage_type":  "����",
"post_action": (: devour :),
]),
([ "action":"$N��Ц��Ц��������������ɢ�ǡ��ľ���ֻ��$N���ϵ�$wһĨ�������𣬲�ס����������һ��������$n���伱����",
"dodge": -40,
"parry": 30,
"damage": 70,
"force": 50,
"damage_type": "����",
]),
([ "action":"$N���߻��ǲ�����ʹ����������Ρ��İ��أ���$n��������λ֮霺ڿռ䡣���׼�Ȼָ�򾩷���֮Ѫ����λ��ֻ��$n�������ײײ����$w��ȥ....",
"dodge": 10,
"parry": 10,
"damage": 70,
"force": 0,
"damage_type": "����",
"post_action": (: reversek :),
]),
([ "action":"$N����һ��һϢ֮�䣬������Ȼ�����벻��ħ�ء�������$wӰ������ȥ����������Ϣ�ص���$n$l....",
"dodge": 15,
"parry": 15,
"damage": 70,
"force": 70,
"damage_type": "����",
"post_action": (: shadowk :),
]),
([ "action":"$Nҡ����ȥ...�е�һ�����...�ѵ�������????....�����߻���ħ������??",
"dodge": 0,
"parry": 0,
"force": 0,
"damage_type": "����",
]),
});

void busyk(object me, object victim, object weapon, int damage)
{
if(random(1000) < me->query("bellicosity"))
if((random(150)<me->query_skill("shadow-kill",1))&&!me->query_temp("devast")) 
{
  victim->set("start_busy",2);
  message_vision(sprintf(HIB"����$næ���м������緱�ǰ�Ĺ���֮�ʣ�$N��������ʧ�����Ƽ��أ������ٽ�һ��....\n"NOR),me,victim);
}
}

void devour(object me, object victim, object weapon, int damage)
{
int my_bell = (int) (me->query("bellicosity")/20);
if( my_bell > 60 ) my_bell = 60;

if( random(30) < my_bell )
if(random(150)<me->query_skill("shadow-kill",1)&&!me->query_temp("devast"))
{
  victim->receive_damage("kee", 2*me->query("force_factor") + random( my_bell ) );
  message_vision(sprintf(HIC"$N ذ����������ԩ�꣬�ܲ�ס$N����ɱ���Ĵ߶�����ذ���ѳ�����$n���ɶ�ȥ��\n"NOR),me,victim);
}
}

void bloodk(object me, object victim, object weapon, int damage)
{
if( random(250) < me->query_skill("force")+me->query_skill("shadow-kill",1) )
if( damage > 10 && !me->query_temp("devast"))
{
  victim->add("sen",-15);
  victim->receive_damage("kee", 2*me->query("force_factor") +
    random( (int)me->query_skill("rain-throwing",1)/2 ) );
  message_vision(sprintf(HIM"ֻ����$n�˿�������������Ѫ��ͻȻ��������Ѫ���������߰���$n��ȥ������$n�Ļ��ǡ�\n"NOR),me,victim);
}
}

void reversek(object me, object victim, object weapon, int damage)
{        
int my_shadow=me->query_skill("shadow-kill",1);
if(random(250)<me->query_skill("shade-steps",1)+my_shadow)
{
  victim->apply_condition("bleeding",(int)me->query_skill("cure")/5 +
  random( (int)my_shadow/10 + (int)me->query_skill("parry")/10 ) );
  message_vision(sprintf(HIR"$N˫�ֵ���ذ�ף����Լ��ؿ���ȥ����ȴ����$n�ؿ�һ��Ѫ�����Ȫ�������\n"NOR),me,victim);
}
}

void shadowk(object me, object victim, object weapon, int damage)
{
int my_shadow=me->query_skill("shadow-kill",1);
if((random(500)<me->query_skill("force")+me->query_skill("shade-steps",1)+my_shadow)&&!me->query_temp("devast"))
{           
   victim->recieve_damage("kee",3*me->query("force_factor") +
     random( (int)my_shadow/2 ) );
   message_vision(sprintf(HIG"$N�ٻ���Ӱ������$n��ɱ��$N�ķ�������$n������ȥ��˫���ὣ��$n����ֱ�䡣\n"NOR),me,victim);
}
}

void devast(object me,object victim, object weapon, int damage)
{
int i;
int my_shadow=me->query_skill("shadow-kill",1);
int time=(int) my_shadow/10+2;

if( me->query("force_factor") >= 10 )
{
  if( me->query_temp("devast") == 0 )
  {
    me->set_temp("devast",1);
    for(i=0;i<time;i++)
    {
      if( random(1600) < me->query("bellicosity")+200)
      if( random(100) < my_shadow )
      COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    }       
    me->start_busy(1);
    message_vision(sprintf(HIY"������һ̾�������Ⲣ����ʽ֮���£�����ν��Ʈ�粻�ճ������겻���ա�����������Ԫ����������....\n"NOR),me,victim);
    me->delete_temp("devast");
  }
}
}

mapping query_action(object me, object weapon)
{
int skill_level=(int)(me->query_skill("shadow-kill",1)/10);
object wea=me->query_temp("weapon");

if (me->query("class") != "killer")
return action[11];
if (skill_level<= 5)
  return action[random(skill_level)];
if (skill_level>=6)
  return action[5+random(6)];
}

int valid_learn(object me)
{
  object wea;

if ( me->query_skill_map("rain-throwing") == 1)
  return notify_fail("��Ӱذ����������ھ���壬����װ��������\n");

if( !(wea = me->query_temp("weapon"))
  || (string)wea->query("skill_type") != "dagger" )
  return notify_fail("���������һ��ذ�ײ�������ʽ��\n");
if( (int)me->query("max_force") < 700)
  return notify_fail("����������޲���, ���������Ӱذ�ס�\n");
if(me->query_skill("blackforce",1)*3 <= me->query_skill("shadow-kill",1))
  return notify_fail("��ĺ����񹦼��ܲ��㣬�޷����Ӱذ�ס�\n");
if(me->query_skill("shade-steps",1)*2 <= me->query_skill("shadow-kill",1))
  return notify_fail("��Ļ��ǲ������ܲ��㣬�޷�����Ӱذ������λ�λ֮���塣\n");
return 1;
}

int valid_enable(string usage) 
{
   return usage=="dagger";
}

int practice_skill(object me)
{

object wea;

if( !(wea = me->query_temp("weapon"))
  || (string)wea->query("skill_type") != "dagger" )
  return notify_fail("���Ӱذ�׻���Ҫ�а�ذ�װ�....\n");
if( (int)me->query("kee") < 30 )
  return notify_fail("����������,��Ϣһ���ټ�������.\n");
me->receive_damage("kee", 30);
return 1;
}
