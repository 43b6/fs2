// lonely-sword.c  ���¾Ž�
/*
#include <ansi.h>
*/
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me, object victim, object  weapon, int damage);
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
void sp3(object me, object victim, object  weapon, int damage);
void sp4(object me, object victim, object  weapon, int damage);
string *parry_msg=({
        "$n����һ��, ��$N�Ĺ��ƾ���ҷ�˿�ȥ��\n",
        "$n�������������Բ��, ��$N�Ĺ��ƾ�������������\n",
        "$n�Ծ��ƶ�, ƽ�����еĽ�, ����ʤ����, ������$N�Ĺ���!\n",
        });
 string *array_msg=
    ({
      "[1;33m$N���һ��, ��̤����, �������ڽ�ʿ,չ��������а����\n[0m",
      "[1;33m���˽ŲȰ���, ��������, ���Ž�����Χס, �������֮���ӡ�\n[0m",
      "[1;33m$N����һ����, �������˼�����ת������а����,��ĵ��������޴롣\n[0m",
     }); 
mapping *action = ({
        ([
                "action"     :               "$N�����������, ƽ�ƶ���,��ָ����, ���ֽ����첻��, ����һ��[1;37m��[1;34m����[1;37m��[0m",
                "dodge"      :                -20,
                "damage"     :                200,
                "post_action":                (: berserk :),
                "damage_type":                "����",
         ]),
         ([
                "action"     :                "$N��¶΢Ц, ���Ӳ���,ʹ������֮����[1;37m����[1;31m��[1;37m�ơ�[0m, ������������",
                "dodge"      :                -10,
                "damage"     :                220,
                "post_action":                (: berserk :),
                "damage_type":                "����",
         ]),
         ([
                "action"     :                "$N����Ʈ�����һ��,$Nʹ�����¾Ž�֮��ɱ����\n"+"[1;32m����[1;36m�ƣ��䣮������һ�ơ���[0m\n"+
                                              "$N�����ڹ��ķ�, ��������,��������, ֻ������$w����һ������, ��$n���ɶ�ȥ, ��������һ��,",
                "dodge"      :                10,
                "damage"     :                350,
                "post_action":                (: sp3 :),
                "damage_type":                "����",
         ]),

         ([
                "action"     :                "$N����Ʈ�����һ��,ʹ�����½�ʽ֮��ɱ����\n"+"[1;32m���������ã�������һ�ơ���[1;35m[0m\n"+
                                              "ֻ��$N����$w����һ��Բ, Խ��Խ��, $nֻ�������Ѩ���������ڽ�â֮��, ����֮��, һ�ɴ���ͻȻӿ��,",
                "dodge"      :                10,
                "damage"     :                550,
                "post_action":                (: sp1 :),
                "damage_type":                "����",                                    
         ]),

        ([
                "action"     :               "$N���ֳֽ�, �����������,˫�ֳɻ�, ����̧��, ����[1;37m���½�ʽ��ʽ[0m������ʽ",
                "dodge"      :                -10,
                "damage"     :                700,
                "post_action":                (: sp2 :),
                "damage_type":               "����",
        ]),

        ([
                "action"     :
"$Nʩչ��[1;37m���¾Ž�[0m֮�������\n���к���, Ʈ������,����бб��ʹ��һ��[1;37m����[1;36m��[1;31m��[1;37m��[0m",
                "dodge"      :                -10,
                "damage"     :                800,
                "damage_type":               "����",
        ]),
        ([
                "action"     :
"$Nʩչ��[1;37m���¾Ž�[0m֮�������\n��â����, �����Ƿ�,һ��[1;37m��[1;35m������[1;37m��[0m, ���Ͷ���",
                "dodge"      :                -10,
                "damage"     :                700,
                "damage_type":               "����",
        ]),
        ([
                "action"     :
"$Nʩչ��[1;37m���¾Ž�[0m֮�������\n$N$wԽʹԽ��, ͻȻ��ת������,һ������,৵�һ��, ��$n��ǰ�Դ�����,��һ��[1;37m��[1;34m��[1;37m��[1;34m��[1;37m��[0m,���Ǿ��ߵľ���",
                "dodge"      :                -10,
                "damage"     :                750,
                "post_action":                (: sp4 :),
                "damage_type":               "����",
        ]),

});

mapping query_action(object me, object weapon)
{
   int skill_level, limit;
   skill_level = (int)(me->query_skill("lonely-sword", 1));
   limit= (int)( skill_level/ 10);
   if( me->query_temp("use_form", 1))
      message_vision( array_msg[ random( sizeof( array_msg))], me); 
   if( me->query("quest/lonely-sword"))
   {
      if (limit < 1 )
         return action[random(6 )];
      else if (limit < 2 )
         return action[random(7 )];
      else if (limit < 3 )
         return action[random(8 )];
      else if (limit < 4 )
         return action[random(9 )];
      else if (limit < 5 )
         return action[random(9 )+1];
      else if (limit < 6 )
         return action[random(9 )+2];
      else if (limit < 7 )
         return action[random(9 )+3];
      else if (limit < 8 )
         return action[random(9 )+4];
      else if (limit < 9 )
         return action[random(9 )+5];
         return action[random(9 )+6];
   }
   else
   {
      if (limit < 1 )
         return action[random(1)];
      else if (limit < 2 )
         return action[random(2)];
      else if (limit < 3 )
         return action[random(3)];
      else if (limit < 4 )
         return action[random(4)];
      else if (limit < 5 )
         return action[random(4)+1];
      else if (limit < 6 )
         return action[random(4)+2];
      else if (limit < 7 )
         return action[random(4)+3];
      else if (limit < 8 )
         return action[random(4)+4];
      else if (limit < 9 )
         return action[random(4)+5];
         return action[random(4)+6];
   }
}

void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m$N[1;37m��Х��:������������Х��ɽ�ӡ�, ˲�佣â����,��$n[1;37m�������[0m\n",me,victim);
   victim->add("kee", -(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m$N[1;37mͻȻ�������������, ��������, �����顯֮����, ���г���ͻȻ��ʧ, �ѳ�$n[1;37m����[0m\n",me,victim);
   victim->add("kee",-(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp3(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m������ʽһչ,���Ž���ͻ�����������ý����������콣���뽣���佣��������Ų����,���˫��ͬʱ��Բ, ���ɳֽ���ԭ֮��[0m\n",me,victim);
   victim->add("kee",-(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp4(object me, object victim, object  weapon, int damage)
{
   int i, loop;
   int skill= me->query_skill("lonely-sword", 1);
   loop= random( skill/ 10)+ 3;
   if( !me->query("berserk") && random(me->query("combat_exp")) > random(victim->query("combat_exp")))
   {
      me->set_temp("berserk", 1);
      message_vision("[1;37m$N[1;37m�����ˡ���������, ���಻����֮����, ����˲�䱬���������СС, ����бֱ���ָ�����ԲȦ, ��$n[1;37mֱ�˶���[0m\n",me,victim);
      for( i= 0; i< loop; i++)
      {
         message_vision("[1;34m$N[1;34m�����ȵ�����������, ���಻����, �������಻���ĳ�$n[1;34m��ȥ[0m\n", me, victim);
         victim->add("kee", -( random( skill)));
         COMBAT_D->report_status(victim, 1);
      }
      me->delete_temp("berserk");
      message_vision("[1;31mһ��������֮��, $N[1;31m΢����Ϣ��˳,�Ͻ��û���Ϣ��[0m\n",me);
      me->start_busy(1);
      me->add("force", -skill);
   }
}

void berserk(object me, object victim, object  weapon, int damage)
{ 
   if( random(8) > 3 )
   {
      if( (int)me->query_skill("lonely-sword",1) > random(60)+35 &&me->query("force_factor")>= random(5) && me->query("force")>30)
      {
         if(!me->query_temp("berserk" ))
         {
            me->set_temp("berserk", 1);
            if(me->query("family/family_name") == "���´���")
            {
               message_vision( sprintf("\n[1;37m$N[1;37mͻȻ�����ˡ��������, �������ء�֮�⾳"+
               "ʹ�����¾Ž�����֮����[31m�� �������ý��ơ������޼���[37m!!![0m\n"),me ,victim);
               message_vision(sprintf("\n[1;34m$N[1;34mɲ�Ǽ���������̥���Ǳ����������, "+
               "�翪��, �����߾ٹ�ͷ, ��$n^[[1;34m��ȥ\n�����, ���淭��, $n�������������ס, "+
               "ֻ����ǰ��âһ����[0m\n "), me ,victim);
               victim->start_busy(1);
               victim->receive_wound("kee",100+random(100),me);
               me->add("force",-60);
            }
            me->delete_temp("berserk");
         }
      }
   }
}

int valid_learn(object me)
{
   object ob;
   if( !(ob = me->query_temp("weapon")) || (string)ob->query("skill_type") !="sword")
      return   notify_fail("���˰ѽ��������ֲ�˳�ֵ�, �����ðѽ��������ɡ�\n");
   return   1;
}

int valid_enable(string usage)
{
   return ( usage=="sword") || ( usage=="parry" );
}

int practice_skill(object me)
{
  if( (int)me->query("kee") < 25 )
     return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
  if( (int)me->query("gin") < 5 )
     return notify_fail("��ľ��������ˣ���Ϣһ�������ɡ�\n");
  if( (int)me->query("force") < 1 )
     return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
  me->receive_damage("kee", 25);
  me->receive_damage("gin", 5);
  me->add("force", -1);
  return 1;
}

string perform_action_file(string action)
{
   return CLASS_D("swordsman")+"/lonely-sword/"+action;
}

string query_parry_msg(string limb)
{
   return parry_msg[ random( sizeof( parry_msg))];
}

void skill_improved(object me)
{
tell_object(me,"[1;34m������Ǳ��ѧϰ����Ķ��¾Ž����Ӵ����ˣ���[0m\n");
}
