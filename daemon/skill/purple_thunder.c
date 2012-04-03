#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);
void sp_attack7(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;


mapping *action = ({
//1
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У����ٽ�$w"HIW"���϶������䣬ʹ��"HIY"��"MAG"���ױ���"HIY"��"HIW"��$w"HIW"�����̺��׾����紺�װ㳯$n"HIW"��Ϯ��ȥ��"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                120,
                "post_action":  (: sp_attack1 :),
                "force"      :                120,
                "damage_type":               "����"
        ]),

//2
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У�����$w"HIW"���������������ʹ��"HIY"��"MAG"������ת"HIY"��"HIW"���׾�������������$w"HIW"����Χ���ţ����ٵĳ���$n"HIW"��ȥ��"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                150,
                "force"      :                150,
                "damage_type":               "����"
        ]),

//3
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У�Ȼ��Ѹ�ٽ�$w"HIW"�����ϻ�ȥ��ʹ��"HIY"��"MAG"���׵���"HIY"��"HIW"���׾���$w"HIW"�������£�����׾���$n"HIW"���±�����"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                180,
                "force"      :                180,
                "damage_type":               "����"
        ]),

//4
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У�����$w"HIW"��������������֮��ʹ��"HIY"��"MAG"��������"HIY"��"HIW"��$N��������Ѹ��ǣ��$w"HIW"��$n"HIW"��ȥ��"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                210,
                "force"      :                210,
                "damage_type":               "����"
        ]),

//5
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У�ʹ��"HIY"��"MAG"���������"HIY"��"HIW"��$w"HIW"˲ʱ���ܲ�����˴������������������������˲ʱ�γ�һ���̺��׾�֮���糯$n"HIW"Ϯȥ��"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                240,
                "force"      :                240,
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :  
""HIW"$N������������������$w"HIW"�У�����$w"HIW"�����������ʹ��"HIY"��"MAG"���ױ�����"HIY"��"HIW"��������ܲ�ס���ǿ������˲ʱ���ѣ����������ѷ쳯$n"HIW"Ϯȥ��"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                270,
                "post_action":  (: sp_attack6 :),
                "force"      :                270,
                "damage_type":               "����"
        ]),

//7
        ([
                "action"     :  
""HIW"$N�������������ӵ����ޣ�ʹ��"HIY"��"MAG"ŭ��˺���ѵ�"HIY"��"HIW"��˲ʱ���Ʊ�ɫ��ֻ��$N�����׾����ս�����$w"HIW"����$n"NOR"��",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                300,
                "force"      :                300,
                "damage_type":               "����"
        ]),

});

int valid_learn(object me)
{
       if(!me->query("quest/purple_thunder",1)){
        tell_object(me,"�㻹�����ʸ��������߻���\n");
        return 0;
                                               }
       if( (me->query("potential") - me->query("learned_points")) < 5 ) {
        tell_object(me, "���Ǳ�ܲ�����㣬�޷��������߻���\n");
        return 0;
                                                                         }
        me->add("potential", -5);
        return   1;
}

int valid_enable(string usage)
{
return (usage=="unarmed" || usage=="blade" || usage=="sword" || usage=="stabber" || usage=="dagger" || usage=="whip" || usage=="parry" );
}

mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;

 skill_level = (int)(me->query_skill("purple_thunder",1));
 limit= skill_level;

        if (limit < 15)
                return action[random(1)];
        else if (limit < 30)
                return action[random(2)];
        else if (limit < 45)
                return action[random(3)];
        else if (limit < 60)
                return action[random(4)];
        else if (limit < 75)
                return action[random(5)];
        else if (limit < 90)
                return action[random(6)];
        else
          return action[random(7)];
}

void sp_attack1(object me, object victim, object weapon, int damage)
{
        if(me->query("max_force") >= 2000)
        {
                me->add("force",-200);
victim->start_busy(2);

message_vision(HIC"$N�����׾���ʹ��$n�����������׾���������������ˡ�\n"NOR,me,victim);
        }
}

void sp_attack6(object me, object victim, object weapon, int damage)
{
int i,force;
force=me->query("max_force")/400;
if(force < 1) force=1;
if(force > 5) force=5;
if(me->query("max_force") >= 2000)
{
  for(i=1;i<=force;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf(""HIC"$Nʹ������������֮"HIR"����������"NOR""HIC"���׾���$n�����ֻ�ȥ��\n"),me,victim);
     break;
     case 2:
message_vision(sprintf(""HIC"$Nʹ������������֮"HIR"���Ʊ�����"NOR""HIC"���׾���$n�����ֻ�ȥ��\n"),me,victim);
     break;
     case 3:
message_vision(sprintf(""HIC"$Nʹ������������֮"HIR"���ƶ�����"NOR""HIC"���׾���$n����Ż�ȥ��\n"),me,victim);
     break;
     case 4:
message_vision(sprintf(""HIC"$Nʹ������������֮"HIR"����������"NOR""HIC"���׾���$n���ҽŻ�ȥ��\n"),me,victim);
     break;
     case 5:
message_vision(sprintf(""HIC"$Nʹ������������֮"HIR"����������"NOR""HIC"���׾���$n��������ȥ��\n"),me,victim);
     break;
     }
message_vision(sprintf(HIC"$Nȷʵ����$n������$n���ڸ����׾����ܡ�\n"NOR),me,victim);
         victim->receive_wound("kee",150,me);
victim->start_busy(1);
          COMBAT_D->report_status(victim, 1);
   }
   me->add("force",-70);
   COMBAT_D->report_status(victim, 1);
} 
else
message_vision(sprintf("���$N���ھ�����ʹ��������\n"),me,victim);
}


