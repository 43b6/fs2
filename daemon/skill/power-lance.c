// made in hide  :P

#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void booldk(object me,object victim,object weapon,int damage);
void power(object me, object victim, object  weapon, int damage);

void busyk(object me, object victim, object  weapon, int damage);

 

mapping *action = ({

   ([
        "action":
"$Nʹ��������ѧ����ʽ��һ��"HIR"�����Ѳл���"NOR"����׼$n�Ķ��Ӻݺݵ�һͱ",

        "dodge"      :               -25,

        "parry"      :               -20,

        "damage"     :                20,

        "force"      :                50,

        "damage_type":               "ͱ��"

   ]),
  ([
        "action"     :
"$N��������㷢չ���ƣ�ʹ��һ��"HIM"����ͽ��ɱ��"NOR"����$w��һֱ��$n���Ϲ�ȥ",

        "dodge"      :               -50,

        "parry"      :               -10,

        "damage"     :                30,

        "force"      :                80,

        "damage_type":               "����"

   ]),
  ([
        "action"     :
"$N���ҹ�У��һ�һ�ᣬʹ��һ��"HIC"���񱬰���"NOR"��$n�ĺ�һǹ��ȥ",

        "dodge"      :               -10,

        "parry"      :               -25,

        "damage"     :                60,

        "force"      :                100,

        "damage_type":               "����"
   ]),

  ([
        "action"     :
"$N�ۼ�����������ʹ��������ѧ��"HIY"������ɿ�ҡ�"NOR"$N����$w���ֱ����$n��ͷ����",

        "dodge"      :               -30,

        "parry"      :               -5,

        "damage"     :                90,

        "force"      :                150,

        "damage_type":               "����"

   ]),

  ([

        "action"     :
"$N���˵�������$w�߾���ͷ�ϣ�һ��"HIG"������ն��"NOR"����������˫�ۣ�ͻ����Ȼն��$n",
         "dodge"      :               -30,

         "parry"      :               -30,

         "damage"     :                110,

         "force"      :                180,

         "damage_type":               "ն��"

   ]),
([
         "action"     :
"$N����ȫ������������$wʹ��һ��"BLINK+HIR"������ǹ������"NOR"���ϵ�"HIR"���໺���䶯"NOR"ɷ�Ǽ�"HIR"����"NOR"ͻ����Ȼ����$n",
         "dodge"      :               -20,

         "parry"      :               -45,

         "damage"     :                130,

         "force"      :                220,

         "damage_type":               "����"

   ]),

  ([

         "action"     :
"$N����ǹ����ʹ��������ѧһʽ��"HIC"��"HIR"��"HIW"��"HIY"��Х����"NOR"��ʹ����ǰ��δ�еĳ���������$n���Ͽ�̹�ȥ",

         "dodge"      :               -50,

         "parry"      :               -50,

         "damage"     :                160,

         "force"      :                350,

         "post_action":               (: busyk :),

         "damage_type":               "����"

  ]),

 ([      "action"     :             "$Nʹ��������ѧ��ʽ\n"
                              "<<"HIR"�����ܸ�ɱ�˷���"NOR">>\n"
                        HIY"$N��������$w��������$n������ʹ��ɱ�˼���\n"
                              "�� ����ת������������ ��\n"
                              "$N��ͽ����$nʹ�����ѹ���\n"NOR,
                 "dodge"     :                80,

                 "parry"     :                50,

                 "damage"    :                160,

                 "force"     :                150,

                 "post_action":               (: booldk :),

                 "damage_type":               "����",

  ]),
 ([      "action"     :       "$Nʹ��������ѧ����ʽ\n"
                          "<<"HIY"�������ҵ�����"NOR">>\n"
              HIC"$N��ȫ��������׼��һ�α�����������ʱ$Nȫ�����������\n"
                     "$N�о���ȫ�������˻�һ����ȫ����������â\n"
                        "$N�񼢻�ֱ��$n�����Ұ�Ĺ���$n\n"NOR,
                 "dodge"     :                80,

                 "parry"     :                50,

                 "damage"    :                170,

                 "force"     :                150,

                 "post_action":               (: power :),

                 "damage_type":               "����",

  ]),

});

 

int valid_learn(object me)

{

        object ob;

 

        if((int)me->query("max_force")<150)

                return notify_fail("�������������������������ѧ��\n");

 
        if( (string)me->query_skill_mapped("force")!= "spforce")

                return notify_fail("������ѧ������ϱ����ķ������á�\n");

 
        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "lance" )

                return notify_fail("�������ǹ������ǹ����\n");

 

        return 1;   

}

 
int valid_enable(string usage)

{

        return ( usage=="lance" )||(usage=="parry");

}

 


mapping query_action(object me, object weapon)

{

   return action[random(sizeof(action))];

}

 

void booldk(object me, object victim, object  weapon, int damage)

{

        int i,time = random((int)me->query_skill("power-lance",1)/20 ) ;

	if( me->query("force_factor") >= 10 )

	{

          if( me->query_temp("booldk") == 0 )

	  {
            me->set_temp("booldk",1);
message_vision(sprintf(BLINK+HIM"$N������Ѫ,ʹ����ɱ����������߷�,ǹǹֱȡ��Ѩ��\n"NOR),me);

	    for(i=0;i<=time;i++)

            me->add("force",-70);

	      COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

            me->delete_temp("booldk");

	  }

	}
}

 
void busyk(object me, object victim, object weapon, int damage)
{

  if(random(500) < me->query("bellicosity"))

  if(random(100) < me->query_skill("speed-lance",1))

{

  victim->set("start_busy",2);

  me->add("force",-50);

  message_vision(sprintf(BLINK+HIY"$N����$n�мܲ�סʱ,��������,ǹ��֮��$n�ѿ�Ų�ס��.\n"NOR),me,victim);

}

}

 
void power(object me, object victim, object  weapon, int damage)

{
    int dept, i, test,pow,pow1;
        pow1 = 0;
        pow  = 0;

        if(!me->query_temp("power" ))

                dept = (int)(me->query_skill("power-lance", 1)/15 + 1);

                me->set_temp("power", 1);

                for(i = 0;i < dept; i++)
                {
                          pow = random(10)+4;

                          pow1 = pow1+0.5*pow;

                        me->set_temp("apply/attack", pow1);

                        message_vision(

                       HIG"$Nʹ��������ѧ֮����ʽ�������ҵ�����������һ���Ұ��ͱ��$n��\n"NOR , me, victim);

                        victim->add("kee",-1*pow1);

                        me->add("force",-7);

           COMBAT_D->report_status(victim);

                }

                me->delete_temp("apply/attack");

                me->delete_temp("power");

        }


 

 

int practice_skill(object me)

 {

        if( (int)me->query("kee") < 30

        ||      (int)me->query("force") < 5)

                return notify_fail("�����������������������������ѧ��\n");

        me->receive_damage("kee", 30);

        me->add("force", -5);

        return 1;

 }

 

string perform_action_file(string action)

{
        return CLASS_D("soldier")+"/soldier/"+action;

}

 

 

