// badstrike.c by ice
// modify by oda (4/10/96)
// ����ɱ�����ع�������Ӱ�� (5/1/96)
// By Swy ������� QC 98/6/20
// By Chan ���¸�д 98/10/07
// By Swy QC 98/10/11 δ����������Ҹ�
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void bleed(object me, object victim, object  weapon, int damage);
void block(object me, object victim, object  weapon, int damage);
void suck(object me, object victim, object  weapon, int damage);
void upforce(object me, object victim, object  weapon, int damage);
void berserk(object me, object victim, object  weapon, int damage);
void remove_effect(object me);

mapping *action = ({
//1
  ([ "action": "$Nа��һ��ʹ��[1;37m�����򵨱�����[0m������$n�Ĳ����أ�����$n��������$l",
                "dodge":                5,
                "parry":                -20,
                "force":                200,
                "damage":               100,
                "damage_type":  "����"
        ]),
//2
  ([ "action": "$Nʹ��һ��[1;36m�����˵�ͷ��[0m������$n����ͥ��",
        "dodge":        10,
        "parry":        -20,
        "force":        200,
        "damage":       150,
        "damage_type":  "����"
        ]),
//3
  ([ "action":"$N˫�۷��죬�ƿڴ��ͻȻһ��[1;35m�����˵�����[0m���䲻��Ļ���$n�¶�",
           "dodge":        -15,
           "parry":        -30,
           "force":        200,
           "damage":       200,
           "damage_type":  "����"
      ]),
//4
  ([ "action": "$Nʹ��һ��[1;34m���������ˡ�[0m���������$n��$l�񹥶�ȥ",
          "dodge":        -20,
          "parry":        -35,
          "force":        300,
          "damage":       250,
          "post_action":          (: suck :),
          "damage_type":  "����"
        ]),
//5
  ([ "action": "$Nʹ��[1;33m��������ʳ��[0m�����������������$n��ǰ������$n��$l",
           "dodge":        -20,
           "parry":        -50,
           "force":        300,
           "damage":       300,
           "post_action":      (: bleed :),
           "damage_type":  "����"
        ]),
//6
  ([ "action": "$N����һ�䣬ʹ��[1;31m����ɱ����[0m��������㹥��$n��$l",
           "dodge":       -10,
           "parry":        -40,
           "force":        350,
           "damage":       350,
           "post_action":      (: block :),
           "damage_type":  "����"
        ]),
//7
  ([ "action": "$N���һ��������һ��[31m����������[0m����$n��Ҫ$n����������",
           "dodge":        -20,
           "parry":        10,
           "force":        400,
           "damage":       400,
           "post_action":      (: upforce :),
           "damage_type":  "����"
        ]),
//8
  ([ "action": "[32m$N��������������������߾��磬�ռ�����[35m������񺿡�[32m��֮������\n[1;31m������뽫$n��Ϊ�ҽ�[0m",
         "parry":        -55,
         "dodge":        -10,
         "force":        400,
         "damage":       400,
         "post_action":          (: berserk :),
         "damage_type":  "����"
        ]),
});

int valid_learn(object me)
{
        int skill, bell;
        object wea1, wea2;
        skill = me->query_skill("badstrike", 1);
        bell = me->query("bellicosity");
        wea1 = me->query_temp("weapon");
        wea2 = me->query_temp("secondary_weapon");

        if( (wea1 && wea1->query("skill_type")!="unarmed") || (wea2 && wea2->query("skill_type")!="unarmed") )
                return notify_fail("������Ʋ���ʹ�õ�����������\n");
    if(me->query("class") != "bandit")
       return notify_fail("ֻ�ж�����ѧ�����!!!\n");
    //�޶�ֻ�ж�����ѧbadstrike...
        if( (int)me->query_skill("badforce", 1) < 10 )
                return notify_fail("��Ķ�ħ�������񻯣��޷���������ơ�\n");
        if( (int)me->query("max_force") < 20 )
                return notify_fail("�������̫�����޷�������Ʒ���\n");

        // modify by oda
        //if((int)me->query("bellicosity") < 30 )
        if( (skill<50 && bell<(skill*5)) || (skill>=50 && bell<250) )
                return notify_fail("���ɱ��������������������ơ�\n");

        return 1;
}

int valid_enable(string usage)
{
        if( this_player()->query_skill("badstrike",1)>=50 )
                return ( usage=="unarmed" || usage=="parry" );
        else
                return ( usage=="unarmed" );
}

mapping query_action(object me, object weapon)
{
        int skill_level;
        skill_level=(int)me->query_skill("badstrike", 1);
if(me->query("class")=="bandit") {
if(me->query_temp("damage-busy1") == 1) return action[6];
if(me->query_temp("damage-busy2") == 1) return action[7];
}
        if (skill_level < 10)
                return action[random(2)];
        else if (skill_level < 20 )
                return action[random(3)];
        else if (skill_level < 35 )
                return action[random(4)];
                else if (skill_level < 50 )
                return action[random(5)];
                else if (skill_level < 70 )
                        return action[random(6)];
                else if (skill_level < 90 )
                        return action[random(7)];
        else
                        return action[random(7)+1];
}

void bleed(object me, object victim, object weapon, int damage)
{
        int bellpower;
        bellpower= (int)me->query("bellicosity",1)/500+1;
        damage=bellpower*10;
        if(damage > 400)
        damage=400;
         if(70>random(100) && !me->query_temp("berserk"))
        {
         me->add("force", -3*bellpower);
         victim->receive_wound("kee",damage,me);
         message_vision(HIR"$Nʹ�ö�ħ��������������$n���ˣ�ʹ$n��ͣ�Ŀ�����Ѫ��\n"NOR, me, victim);
         COMBAT_D->report_status(victim);
        }
}

void block(object me, object victim, object weapon, int damage)
{

   if (70>random(100) && !me->query_temp("berserk"))
{
  victim->start_busy(1);
  if(!me->query_temp("damage-busy1")) {
  me->set_temp("damage-busy1",1); }
  me->add("force",-100); //������
  message_vision(HIB"$N��ʹ������ʹ��$nΪ���ħ���������ʱ�޷�������\n"NOR, me, victim);
}
}


void suck(object me, object victim, object  weapon, int damage)
{
        int lose;
        int bellpower = (int)me->query("bellicosity")/250+1;
if(victim->query("force")>0&&me->query_skill_mapped("force")=="badforce"&&!me->query_temp("berserk")
   && 70>random(100))
        {
           lose = ((int)me->query_skill("badforce",1)/5+10)*bellpower;
           if(lose > 800) lose=800;
        me->add("kee", lose/2);
        me->add("force",lose);
        victim->add("force",-lose);
        victim->receive_damage("kee",lose/2,me);
        if(victim->query("force",1) < 0) victim->set("force",0);
        message_vision(HIY"$Nʹ����ħ��֮�����󷨣���$n�Ĺ�����ȥ���١�\n"NOR, me, victim);
        COMBAT_D->report_status(victim);
        }
}

void upforce(object me, object victim, object weapon, int damage)
{
        int skill = (int)me->query_skill("badforce", 1)/10;
        int bellpower = (int)me->query("bellicosity")/300+1;
        if( bellpower > 4 ) bellpower = 4;
        if(skill > 15) skill=15;
                if(me->query_temp("damage-busy1") == 1 ) {
                me->delete_temp("damage-busy1");
                me->set_temp("damage-busy2",1);  }
        if( !me->query_temp("berserk") && !me->query_temp("upforce")
            && 70>random(100) && me->query("class")=="bandit" )
        {
                message_vision(HIG"$Nһ�����֣�$n�������Ѫ������$N�ķ��ɱ�⣬����������\n"NOR, me, victim);
                me->set_temp("oldforce", me->query("force_factor"));
                me->set("force_factor", (4*skill*bellpower)/4);
                me->set_temp("upforce", 1);
                call_out("remove_effect", 10, me);
        }
}

void remove_effect(object me)
{
        if(!me) return ;
        if(me->query("gin")>50) {
        me->receive_damage("gin", 30); }
        me->set("force_factor", me->query_temp("oldforce"));
        me->delete_temp("oldforce");
        me->delete_temp("upforce");
        message_vision(HIW"$N���⽥�ˣ����������ջء�\n"NOR, me);
}

void berserk(object me, object victim, object weapon, int damage)
{
        int lose, i;
        int bellpower = (int)me->query("bellicosity")/300+1;
        if(bellpower>8)
        bellpower=8;
                if(me->query_temp("damage-busy2")==1) {
                me->delete_temp("damage-busy2"); }
if(me->query("class")=="bandit" && !me->query_temp("berserk") &&
   70>random(100) )
        {
                lose = 4+bellpower;
                me->set_temp("berserk", 1);
                for(i = 0;i < lose; i++)
                {
                        message_vision(HIR"$N��������֮����������$n��籩����ɨ��ȥ��\n"NOR, me, victim);
                        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
                me->delete_temp("berserk");
                message_vision(HIW"һ����֮��$N������Ϣ���ң��Ͻ��û���Ϣ��\n"NOR,me);
                me->start_busy(1);
        }
}


string perform_action_file(string action)
{
        return CLASS_D("bandit")+"/badstrike/"+action;
}
