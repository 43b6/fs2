#include <combat.h>
#include <ansi.h>
inherit SKILL;
void sun1(object me, object victim, object  weapon, int damage);
void sun2(object me, object victim, object  weapon, int damage);
void sun3(object me, object victim, object  weapon, int damage);
void sun4(object me, object victim, object  weapon, int damage);
void sun5(object me, object victim, object  weapon, int damage);
void sun6(object me, object victim, object  weapon, int damage);

mapping *action = ({
//1
  ([ "action": 
HIY"$Nʹ��"HBBLU+HIW"����ɽ�����Ʀ�"NOR+HIY"֮����ʽ"HIR"������������"HIY"ǿ�������������಻��������Ϣ֮��
������ɽ����֮�Ƴ�$n��ȥ��һ����ʽ�ƾ������ƥ��"NOR,
                "dodge":                -5,
                "parry":                -20,
                "force":                200,
                "damage":               300,
                "post_action":               (:sun1:),
                "damage_type":  "����",                
        ]),
//2
  ([ "action": 
HIY"$N����ȫ��������������棬һ��"HIW"���������ա�"HIY"ȫ�����·����޴�Ĺ�â����
�۵Ĺ�âʹ$n�޷����ۣ�$N���Ϸ���ǿ�ҵ��¶�ʹ$nȫ������������
���¯֮��ʹ����֡�"NOR,
        "dodge":        -10,
        "parry":        -50,
        "force":        300,
        "damage":       350,
        "post_action":               (:sun2:),
        "damage_type":  "����",
        ]),
//3
  ([ "action":
HIY"$N�����˾������澭�����������棬������ת�ھ����ߵ��ﻯΪ˪��ʹ��\n"
HBBLU+HIW"����ɽ�����Ʀ�"NOR+HIY"����ʽ"HIC"����ʢ��˥��"HIY"��ǿ����ھ���ʹ$n������������
������Ϣ�����ܵ����ص����˿�����Ѫ��"NOR,
           "dodge":        -15,
           "parry":        -30,
           "force":        200,
           "damage":       400,
           "post_action":               (:sun3:),
           "damage_type":  "����",
      ]),
//4
  ([ "action": 
HIC"$N����ӥ�������һʽ"HIW"�������카��"HIC"�Թ����������$n���ķ������䲻��˫
���˹���$n�������˻���ȥ��"NOR,
          "dodge":        -60,
          "parry":        -65,
          "force":        100,
          "damage":       450,
          "post_action":          (:sun4:),
          "damage_type":  "����",
        ]),
//5
  ([ "action": 
HIM"$Nʹ��"HBBLU+HIW"�����������Ʀ�"NOR+HIM"����ʽ"HIC"��������ѩ��"HIW"��$N���η���ȫ��ɢ��������˪������ѩ
��������裬$n��ȫ���������ܵ����Σ�$N�û���������͵Ϯʹ���ܴ���"NOR,
           "dodge":        -80,
           "parry":        -80,
           "force":        300,
           "damage":       500,
           "post_action":      (:sun5:),
           "damage_type":  "����",
        ]),
//6
  ([ "action": 
HIR"$N�۾�˫���˾����棬����ǿ�������ʹ��"HBBLU+HIW"����ɽ�����Ʀ�"NOR+HIR"����ʽ"HIY"�������ƻ�"HIR"������
�ƾ�����$nȫ���������ᾢ�������������"NOR,
           "dodge":       -70,
           "parry":        -70,
           "force":        350,
           "damage":       600,
           "post_action":      (:sun6:),
           "damage_type":  "����",
        ]),
});



int valid_enable(string usage)
{
                return ( usage=="unarmed" || usage=="parry" );   
}



void sun1(object me, object victim, object weapon, int damage)
{
         if(((me->query("combat_exp")+random(2000000)) > (victim->query("combat_exp")+random(2000000)))
         || random(50)>40)
         {
           message_vision(HIR"\n��������֮"HBRED+HIM"����ɽ���졿\n"NOR, me, victim);
           victim->receive_damage("kee",500);
           COMBAT_D->report_status(victim);
           message_vision(HIR"\n��������֮"HBBLU+HIC"���κ�����\n"NOR, me, victim);
           victim->receive_wound("kee",500);
           COMBAT_D->report_status(victim);
           message_vision(HIR"\n��������֮"HBGRN+HIG"������޼���\n"NOR, me, victim);
           if((victim->query("force_factor")-2)<0)
             victim->set("force_factor",0);
           else victim->add("force_factor",-2);
           COMBAT_D->report_status(victim);
         }else message_vision(HIW"$n˳��������$N�Ĺ�����\n"NOR, me, victim);          
        
}

void sun2(object me, object victim, object weapon, int damage)
{
	if(((me->query("move")+random(100)) > (victim->query("move")+random(100)))
         || random(50)>40)
        {
	  message_vision(HIR"\n$nһ����С�ı�$N�������ྡྷ���ˡ�\n"NOR, me, victim);
	  victim->receive_damage("kee",200);
	  victim->apply_condition("burn",random(10)+1);
	  COMBAT_D->report_status(victim);
	}
}


void sun3(object me, object victim, object  weapon, int damage)
{
       if(((me->query("force")+random(50000)) > (victim->query("force")+random(50000)))
         || random(50)>30)
       {
         message_vision(HIC"\n$n�ܲ��˺�����ȵļ尾�������ص����ˡ�\n"NOR, me, victim);
         victim->receive_damage("kee",200);
         victim->apply_condition("star-stial",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun4(object me, object victim, object weapon, int damage)
{
       if(((me->query("dodge")+random(100)) > (victim->query("dodge")+random(100)))
         || random(50)>45)
       {
         message_vision(HIY"\n$n���㲻������$N�����������ˡ�\n"NOR, me, victim);
         victim->receive_wound("kee",500);
         victim->apply_condition("bleeding",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun5(object me, object victim, object weapon, int damage)
{
       if(((me->query("parry")+random(100)) > (victim->query("parry")+random(100)))
         || random(50)>40)
       {
         message_vision(HIW"\n$Nʹ����ɽ������֮���С���ɽ��÷�֡���$n������ǣ���޷�ʹ����\n"NOR, me, victim);
         victim->receive_damage("kee",200);
         victim->apply_condition("power-down",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun6(object me, object victim, object weapon, int damage)
{
       if(((me->query("combat_exp")+random(2000000)) > (victim->query("combat_exp")+random(2000000)))
         || random(50)>45)
       {
         message_vision(HIG"\n$N�����ƻ�һ����$n�˾����ﾹ�о��տյ��������ھ���\n"NOR, me, victim);
         victim->apply_condition("no_power_e",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}


string perform_action_file(string action)
{
        return CLASS_D("tensan")+"/sunstrike/"+action;
}
