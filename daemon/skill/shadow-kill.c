// shadow-kill written by mtl on May 9th, 1996
// Ver 1.02 modified by mtl on Jul 9th, 1996
// Ϊ�˱����ͻ�������enable����skills�����ޣ����Լ������ư������enable
// By Swy ������� QC 98/6/23
// ��ǿ�����Է��ֽ� fs by swy
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void busyk(object me,object victim,object weapon, int damage);
void devour(object me, object victim, object weapon, int damage);
void bloodk(object me, object victim, object weapon, int damage);
void reversek(object me, object victim, object weapon, int damage);
void shadowk(object me, object victim, object weapon, int damage);
void devast(object me, object victim, object weapon, int damage);
void devast2(object me, object victim, object weapon, int damage);
void worldpill(object me, object victim, object weapon, int damage);
void worldkill(object me, object victim, object weapon, int damage);

mapping *action = ({
([ "action":"$Nҡ����ȥ...�е�һ�����...�ѵ�������????....�����߻���ħ������??",
"dodge": 0,
"parry": 0,
"force": 0,
"damage_type": "����",
]),
([ "action":"$N��Ȼʹ��"+BLU+"��ͣ�ƴ�ѩ������˻ġ�"+NOR+"�ľ���ɱ�ţ����������绢����������׹������$n��ȥ����$n���޿ɱܡ�",
"dodge": -10,
"parry": -10,
"damage": 10,
"force":  10,
"damage_type": "����",
]),
([ "action":"$N�Ȼ̾�������޹����᲻�����޹��ˡ�������������Ȼ��������Ȼɱ�⣬ʹ��"+YEL+"����ɽǧ�������˸�����"+NOR+"��$n����ȥ������ָ��Ҫ����",
"dodge": -10,
"parry": -10,
"damage": 20,
"force":  20,
"damage_type":  "����",
"post_action": (: devour :),
]),
([ "action":"$N��Ц��Ц����������"+RED+"������ɢ�ǡ�"+NOR+"�ľ���ֻ��$N���ϵ�$wһĨ�������𣬲�ס����������һ��������$n���伱����",
"dodge": -20,
"parry": -20,
"damage": 30,
"force":  30,
"damage_type": "����",
"post_action": (: bloodk :),
]),
([ "action":"$N���߻��ǲ�����ʹ��"+GRN+"��������Ρ�"+NOR+"�İ��أ���$n��������λ֮霺ڿռ䡣���׼�Ȼָ�򾩷���֮Ѫ����λ��ֻ��$n�������ײײ����$w��ȥ....",
"dodge": -20,
"parry": -20,
"damage": 40,
"force":  40,
"damage_type": "����",
"post_action": (: reversek :),
]),
([ "action":"$N����һ��һϢ֮�䣬������Ȼ"+CYN+"�����벻��ħ�ء�"+NOR+"������$wӰ������ȥ����������Ϣ�ص���$n$l....",
"dodge": -25,
"parry": -25,
"damage": 50,
"force":  50,
"damage_type": "����",
"post_action": (: shadowk :),
]),
([ "action":"$N��������������ͨ�أ���Ȼ������"+BLINK+BOLD+"��һ��������ʽ��"+YEL+"���λ���Ӱ"+WHT+"��"+BLU+"��¶�����"+WHT+"��"+NOR+"����ȥ��ѧ���Ӱذ�ף�һʱ֮���ڻ��ͨ��ԴԴ����������ʹ������Ϊ����˼��֮��ӿ��$n....",
"dodge": -25,
"parry": -25,
"damage": 60,
"force":  60,
"damage_type": "����",
"post_action": (: devast :),
]),
([ "action":"$N��Ȼʹ��"+HIB+"��ͣ�ƴ�ѩ������˻ġ�"+NOR+"�ľ���ɱ�ţ����������绢����������׹������$n��ȥ����$n���޿ɱܡ�",
"dodge": -30,
"parry": -30,
"damage": 70,
"force":  70,
"damage_type": "����",
]),
([ "action":"$N�Ȼ̾�������޹����᲻�����޹��ˡ�������������Ȼ��������Ȼɱ�⣬ʹ��"+HIY+"����ɽǧ�������˸�����"+NOR+"��$n����ȥ������ָ��Ҫ����",
"dodge": -30,
"parry": -30,
"damage": 80,
"force":  80,
"damage_type":  "����",
"post_action": (: devour :),
]),
([ "action":"$N��Ц��Ц����������"+HIR+"������ɢ�ǡ�"+NOR+"�ľ���ֻ��$N���ϵ�$wһĨ�������𣬲�ס����������һ��������$n���伱����",
"dodge": -40,
"parry": -40,
"damage": 90,
"force":  90,
"damage_type": "����",
]),
([ "action":"$N���߻��ǲ�����ʹ��"+HIG+"��������Ρ�"+NOR+"�İ��أ���$n��������λ֮霺ڿռ䡣���׼�Ȼָ�򾩷���֮Ѫ����λ��ֻ��$n�������ײײ����$w��ȥ....",
"dodge": -50,
"parry": -50,
"damage": 100,
"force":  100,
"damage_type": "����",
"post_action": (: reversek :),
]),
([ "action":"$N��������������ͨ�أ���Ȼ������"+BLINK+BOLD+"��һ��������ʽ��"+YEL+"���λ���Ӱ"+WHT+"��"+BLU+"��¶�����"+WHT+"��"+NOR+"����ȥ��ѧ���Ӱذ�ף�һʱ֮���ڻ��ͨ��ԴԴ����������ʹ������Ϊ����˼��֮��ӿ��$n....",
"dodge": -60,
"parry": -60,
"damage": 110,
"force":  110,
"damage_type": "����",
"post_action": (: devast2 :),
]),
([ "action":HIY"$N����һ��������������ڱ���������$w"+HIY+"�û���һ����������$n$l...."NOR,
"dodge": -60,
"parry": -60,
"damage": 120,
"force":  120,
"damage_type": "����",
"post_action": (: worldpill :),
]),
([ "action":HIR"$N����ȫ��������ע��$w"+HIR+"�ʹ�����춯�ص�һ��!!"+HIG+" �� �� �� �� �� �� ʽ �� ��  ��  ֮  ŭ ��"NOR,
"dodge": -70,
"parry": -70,
"damage": 130,
"force":  130,
"damage_type": "����",
"post_action": (: worldkill :),
]),
});

void busyk(object me, object victim, object weapon, int damage)
{
if(random(1000) < me->query("bellicosity"))
if((random(150)<me->query_skill("shadow-kill",1))&&!me->query_temp("devast")&&!me->query_temp("devast2")) 
{
  victim->start_busy(1);
  message_vision(sprintf(HIB"����$næ���м������緱�ǰ�Ĺ���֮�ʣ�$N��������ʧ�����Ƽ��أ������ٽ�һ��....\n"NOR),me,victim);
  COMBAT_D->report_status(victim, 1);
}
}

void devour(object me, object victim, object weapon, int damage)
{
int my_bell = (int) (me->query("bellicosity")/20);
if( my_bell > 60 ) my_bell = 60;

if( random(30) < my_bell )
if(random(150)<me->query_skill("shadow-kill",1)&&!me->query_temp("devast")&&!me->query_temp("devast2"))
{
  victim->receive_damage("kee", 250 + random( my_bell ) );
  message_vision(sprintf(HIC"$N ذ����������ԩ�꣬�ܲ�ס$N����ɱ���Ĵ߶�����ذ���ѳ�����$n���ɶ�ȥ��\n"NOR),me,victim);
  COMBAT_D->report_status(victim, 1);
}
}
void bloodk(object me, object victim, object weapon, int damage)
{
if( random(250) < me->query_skill("force")+me->query_skill("shadow-kill",1) )
if( damage > 10 && !me->query_temp("devast")&&!me->query_temp("devast2"))
{
  victim->receive_damage("sen",100);
  victim->receive_damage("kee", 250 +random( (int)me->query_skill("rain-throwing",1)/2 ) );
  message_vision(sprintf(HIM"ֻ����$n�˿�������������Ѫ��ͻȻ��������Ѫ���������߰���$n��ȥ������$n�Ļ��ǡ�\n"NOR),me,victim);
  COMBAT_D->report_status(victim, 1);
}
}

void reversek(object me, object victim, object weapon, int damage)
{        
int my_shadow=me->query_skill("shadow-kill",1);
if(random(250)<me->query_skill("shade-steps",1)+my_shadow
&&!me->query_temp("devast")&&!me->query_temp("devast2"))
{
  victim->apply_condition("bleeding",(int)me->query_skill("cure")/5 +
  random( (int)my_shadow/10 + (int)me->query_skill("parry")/10 ) );
  message_vision(sprintf(HIR"$N˫�ֵ���ذ�ף����Լ��ؿ���ȥ����ȴ����$n�ؿ�һ��Ѫ�����Ȫ�������\n"NOR),me,victim);
}
}

void shadowk(object me, object victim, object weapon, int damage)
{
int my_shadow=me->query_skill("shadow-kill",1);
if((random(500)<me->query_skill("force")+me->query_skill("shade-steps",1)+my_shadow)&&!me->query_temp("devast")&&!me->query_temp("devast2"))
{           
   victim->recieve_damage("kee",300+random( (int)my_shadow/2 ) );
   message_vision(sprintf(HIG"$N�ٻ���Ӱ������$n��ɱ��$N�ķ�������$n������ȥ��˫���ὣ��$n����ֱ�䡣\n"NOR),me,victim);
   COMBAT_D->report_status(victim, 1);
}
}

void devast(object me,object victim, object weapon, int damage)
{
int i;
int my_shadow=me->query_skill("shadow-kill",1);
int time=(int) my_shadow/10+2;
if( me->query("force_factor") >= 10 && me->query_temp("devast")!=1&&!me->query_temp("devast2")!=1)
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
    COMBAT_D->report_status(victim, 1);
    me->delete_temp("devast");
  }
}
}
void devast2(object me,object victim, object weapon, int damage)
{
int i;
int my_shadow=me->query_skill("shadow-kill",1);
int time=(int) my_shadow/10+2;
if( me->query("force_factor") >= 10 &&!me->query_temp("devast")&&!me->query_temp("devast2")&& me->query("bellicosity") > 2500)
{
  if( me->query_temp("devast2") == 0 )
  {
    me->set_temp("devast2",1);
    for(i=0;i<time;i++)
    {
      if( random(4000) < me->query("bellicosity")+200)
      if( random(100) < my_shadow )
      COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    }       
    message_vision(sprintf(HIY"������һ̾�������Ⲣ����ʽ֮���£�����ν��Ʈ�粻�ճ������겻���ա�����������Ԫ����������....\n"NOR),me,victim);
    COMBAT_D->report_status(victim, 1);
    me->delete_temp("devast2");
    if (random(8)==3) me->start_busy(1);
  }
}
}

void worldpill(object me,object victim, object weapon, int damage)
{
        int i;
        int my_shadow=me->query_skill("shadow-kill",1);
        int time=(int) my_shadow/10;

        time=random(time)+2;
        if( me->query("force_factor") >= 5)
        {
                 message_vision(HIC"\n======  "HIW"$N ʹ �� � Ӱ ذ �� �� �� "HIR"�� �� �� �� "HIC" ====== 
                 \n\n"NOR,me);
                 message_vision(HIW"$N�����������û���������Ӱ, ��$n�޷�׽��!!\n\n"NOR,me,victim);
            for(i=0;i<time;i++)
            {
        if (    random(100) < 70 )
             {
//         if( !me->is_fighting() )
//      return ;
                 message_vision(sprintf(NOR"��������"+HIR+"��ȸ"+NOR+"��"+HIG+"����"+NOR+"��"+HIC+"�׻�"+NOR+"��"+HIY+"����"+NOR+"����ɫ�������������Ű�Χ!!\n"NOR),me,victim);
                 if (random(100)>30)
                 {    
                 victim->receive_wound("kee",150 +  random( (int)my_shadow ));
                 COMBAT_D->report_status(victim, 1);
                 }
                 else message_vision(HIR"$N��æ����, ���յ����������������ڵ�������\n"NOR , victim);
             }
            }       
        //  me->start_busy(1);
        }
}
void worldkill(object me,object victim, object weapon, int damage)
{
        int i;
        int my_shadow=me->query_skill("blackforce",1);
        int time=me->query("max_s_kee",1);
        int gin=victim->query("max_gin",1);
        int kee=victim->query("max_kee",1);
        int sen=victim->query("max_sen",1);
        time=(int) time/50;
        if (time < 1) time=1 ;
        gin=(int)gin*(5+random(5))/100+200;
        kee=(int)kee*(5+random(10))/100+350;
        sen=(int)sen*(5+random(5))/100+200;
        if(gin>400) gin=400;
        if(kee>600) kee=600;
        if(sen>400) sen=400;
        {
                 message_vision(HIY"\n======  "+BLINK+BOLD+"����    ��     ��     ֮     ŭ    ���� "+NOR+HIY+" ====== 
                 \n\n"NOR,me);
            for(i=0;i<time;i++)
            {
        if ( random(100) < 75 )
             {
                 message_vision(sprintf("$N�����"+HIR+"��ȸ"+NOR+"��"+HIG+"����"+NOR+"��"+HIC+"�׻�"+NOR+"��"+HIY+"����"+NOR+"�������Ӱ����$n�������޵Ļ���֮��!!\n"NOR),me,victim);
                 if (random(100)<40)
                 {    
                 victim->receive_wound("kee",kee);
                 victim->receive_wound("gin",gin);
                 victim->receive_wound("sen",sen);
                 victim->start_busy(1);
                 COMBAT_D->report_status(victim, 1);
                 }
                 else message_vision(HIR"$N������־��, ʶ������ǰ�Ļ�Ӱ��\n"NOR , victim);
             }
            }}
}
mapping query_action(object me, object *weapon)
{
//int skill_level=(int)(me->query_skill("shadow-kill",1)/10);
int skill_level=(int)(me->query("functions/manakee/level")/10);
object wea=me->query_temp("weapon");
int x=0;
weapon=me->query_temp("weapon");
x=me->query("quest/worldpill");
if (me->query("class") != "killer")
return action[0];
if (skill_level<= 5)
return action[(random(skill_level)+1)];
if ((skill_level>=6) && (skill_level <10))
return action[(5+random(6))];
if (skill_level>=10 && base_name(weapon)!="/open/killer/headkill/obj/world_dag")
{
if (x)
{
if ( 90 < random(100))
return action[12];
}
return action[(random(5)+7)];
}
if (skill_level>=10 && base_name(weapon)=="/open/killer/headkill/obj/world_dag")
{
if (x)
{
if ( 90 < random(100))
return action[13];
}
return action[(random(5)+7)];
}
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
return usage=="dagger"  || usage=="parry";
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
