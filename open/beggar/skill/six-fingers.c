#include <combat.h>
#include <ansi.h>
inherit SKILL;
void hurt(object me, object victim, object weapon, int damage);
void block(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);

mapping *action = ({

//1
([ "action":
"$NĴָһ�飬����������ת��ʹ��"HIW"�����̽���"NOR"�е�"HIY"��������ʯ��"NOR"�����۾��Ľ�·���Ե�����$n$l�����ȥ������ʯ���쾪���������֮��",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  50,
        "damage_type":  "����",
        "weapon": "Ĵָ����",
]),

//2
([ "action":
"$N��͸ָ�⣬ʹ��һ��"HIG"������Ԩ�s��"NOR"��һ���ۻ뽣��ֱ��$n$l�����Ͻ�����֮�ˣ�������"HIW"�����̽���"NOR"�󿪴��أ�������ΰ�Ľ���",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  70,
        "damage_type":  "����",
        "weapon": "Ĵָ����",
]),

//3
([ "action":
"$N˫ָ������������ν������༤����ֱ��$n$l��ȥ������"HIW"����������"NOR"�еľ���"HIR"������ͬҫ��"NOR,
        "dodge": -40,
        "parry": -15,
        "damage": 100,
        "force": 90,
        "damage_type": "����",
        "weapon": "ʳָ����",
]),

//4
([ "action":
"$N���ζ�ת��һ��"HIC"�������ӿ��"NOR"�û���������Ӱ��$n��ʱ������"HIW"����������"NOR"���ν���֮��",
        "dodge": -40,
        "parry": -15,
        "damage": 200,
        "force": 120,
        "damage_type": "����",
        "weapon": "ʳָ����",
]),

//5
([ "action":
"$N̹Ȼ�ص�����ָ��ʹ��"HIW"���г彣��"NOR"�е�"CYN"��ǧ��������"NOR"���佣�ƴ󿪴��أ�������������㣬���������س���$n$l��ȥ",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 140,
        "damage_type": "����",
        "weapon": "��ָ����",
        "post_action": (: block :),
]),

//6
([ "action":
"$N�����ָ��һ��"HIW"���г彣��"BLU"����������졯"NOR"����$n$l�������������׾��죬���˲��ұ���",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 160,
        "damage_type": "����",
        "weapon": "��ָ����",
        "post_action": (: block :),
]),

//7
([ "action":
"$N�������������ָ����˿˿����������"HIW"���س彣��"NOR"�е�"HIY"��׳־���ơ�"NOR"����׾�͹��ӵĽ�������ס$nȫ��ֱֱ��ײ����$l  ",
        "dodge": 25,
        "parry": 0,
        "damage": 200,
        "force": 180,
        "damage_type": "����",
        "weapon": "����ָ����",
]),

//8
([ "action":
"$NǱ���������Ծ��ƶ���һ��"HIG"��ʱ�괺�硯"NOR"ָ��$n������ʮ����Ѩ�����ƹ��ӣ�����"HIW"���س彣��"NOR"��ĸ���",
        "dodge": 25,
        "parry": 0,
        "damage": 150,
          "force": 200,
        "damage_type": "����",
        "weapon": "����ָ����",
]),

//9
([ "action":
"$NСָ���ɵ�ת����һ��"HIW"���ٳ彣��"HIR"��ѩ���צ��"NOR"����ĳ�$n$l��ȥ�����ƹ��棬����׽ģ����",
        "dodge": -50,
        "parry": -20,
        "damage": 150,
        "force": 220,
        "damage_type": "����",
        "weapon": "Сָ����",
        "post_action": (: hurt :),
]),

//10
([ "action":
"$Nһ��"HIW"���ٳ彣��"NOR"����$n�ؿڣ�������ߣ�һб��Сָ��ת����$n$l���䣬�����������������"HIM"���ֻ�������"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 230,
        "damage_type": "����",
        "weapon": "Сָ����",
]),

//11
([ "action":
"$N���ɵ�ת��Сָ��ʹ��һ��"HIC"��������衯"NOR"��ֻ��"HIW"�����󽣡�"NOR"������ȥ���������߰��б��$n$l",
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 250,
        "damage_type": "����",
        "weapon": "Сָ����",
]),

//12
([ "action":
"$Nչ����ʽ�������飬���ν�����һ�գ���һ�䣬ԽתԽ������Ȼ��һ������$n$l������"HIW"�����󽣡�"NOR"�е�����"HIW"���Ǽٷǿա�"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 250,
        "damage_type": "����",
        "weapon": "Сָ����",
        "post_action": (: hurt :),
]),

//13
([ "action":
HIW"$N���һ�����Ķ�ȫ���������ھ���ת��˫�������뷢��ʮָ�ֵ�����ʱ�����ݺᣬ��������Ѹ�׼��绥�弤����$n��ȥ"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 250,
        "damage_type": "����",
        "weapon": "���ν���",
        "post_action": (: conti :),
]),

//14����(һ)
([ "action":
HIY"\n$N���о����ʢ�����:\n\n"
HIW"             ��\n"
HIR"                ����"HIW"��"HIG"����"HIW"��"HIM"������"HIW"!!\n"
"                                     ��\n"
"$NͻȻ���ˡ�һ���ķ�����������ӯ��һ����������$n�����ȥ\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "post_action": (: sp1 :),
]),

//15����(��)
([ "action":
HIY"\n$N�������:\n\n"NOR
GRN"                   �� ����̤������·��һ�絣���Ž�� ��\n\n"
HIW"��ϡ��貨΢�����ľ�������û���������Ӱ��Χ$n��˫�ּ��䣬�����뷢����ʱ
��$n�������ν����Ŀ��ҽ���֮�У���������������Ҫ��$nȫ��˺�ѣ���������
������ϵĽ���ɱ��\n\n"
"                         �� "HIY" ��"HIM" ��"HIW" ��"RED" ��"HIC" ��"BLU" �� "HIW" ��\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
          "force": 300,
        "damage_type": "����",
        "post_action": (: sp2 :),
]),


//16����(��)
([ "action":
HIY"\n$N�����ղ�������:\n\n"NOR
YEL"                   �� ���¸�������ڣ����ǲ���ҫ���� ��\n\n"
HIW"��Ȼ��߸�Ծ�������ڿգ����Ƹ��أ����������ߵ����ν���������$n����ҪѨ��
ȥ���谵֮�У�ֻ���ߵ���â���ҫ�ۣ����Ǵ�������������еľ�ѧ\n\n"
"                           ��"HIM" ��"HIY" ��"HIC" ��"HIG" ��"HIR" ��"HIW" ��\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
          "force": 300,
        "damage_type": "����",
        "post_action": (: sp3 :),
]),
});

void hurt(object me, object victim, object weapon, int damage)
{
        int force;
        if( random(100)>50 && !me->query_temp("conti",1) && 
            me->query("family/family_name")=="�μ�" )
        {
          force = me->query_skill("sunforce",1);
          if(force > 250) force=250;
          victim->receive_damage("kee", 50+force );
          message_vision(sprintf(HIM"$N�����񽣹������������$n���ڣ�$n����ͻȻһ����ף����������˲�С�����ˡ�\n"NOR),me,victim);
          COMBAT_D->report_status(victim);
          me->add("force",-force);
        }

        else
        {
          message_vision(sprintf(HIW"$n�Ǳ���������$N�Ĺ�������, ���Ѵ����ܡ�\n"NOR),me,victim);
        }
}
void block(object me, object victim, object weapon, int damage)
{
        if( random(100)>50 && !me->query_temp("conti",1) &&
            me->query("family/family_name")=="�μ�" )
        {
          victim->apply_condition("blockade",3);
          message_vision(sprintf(HIY"$N�����񽣰���һ��ָ�ַ������ֵ���$n�����д�Ѩ��\n"NOR),me,victim);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
        }
        else
        {
          message_vision(sprintf(HIW"$N��ͼ��һ��ָ����$n, ���Ǳ�$n���˿�����\n"NOR),me,victim);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
         int i,time = 3;
        if( me->query("force_factor") >= 10 && 
            me->query("family/family_name")=="�μ�" && 70>random(100) )
        {
          if( me->query_temp("conti") == 0 )
          {
            me->delete_temp("super");
            me->set_temp("conti",1);
      message_vision(sprintf("\n[1;33m$N��Ȼ����������[1;5;36m���ΰ�Ѩ[0m��[1;5;36m���಻��[0m[1;33m��Ҫ��, ������Ȼ��Ȼ���������, ���ղ���!![0m\n"),me);
              for(i=1;i<=time;i++)
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
          }
        }
}

void sp1(object me, object victim, object weapon, int damage)
{
int i;
if(me->query("env/������","YES")&&!me->query_temp("conti",1))
{
  for(i=1;i<=6;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$N������"HIW"�����̽���"HIY"����ӿ��ɽ��ϯ�����¡�"NOR"�����⣬��$n��ͷն��!\n"),me,victim);
     break;
     case 2:
message_vision(sprintf("\n$N������"HIW"����������"HIG"�������鶯���������ơ�"NOR"�����⣬��$n��֫����!\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("\n$N������"HIW"���г彣��"HIC"���������죬ӯ���ɾá�"NOR"�����⣬��$n��ǰ����!\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("\n$N������"HIW"���س彣��"HIM"����������Ծ��ƶ���"NOR"�����⣬��Ȼ�����$n!\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("\n$N������"HIW"���ٳ彣��"NOR""CYN"��Ӧ�����ң���ò�����"NOR"�����⣬��Ӱ��Χס$n!\n"),me,victim);
     break;
     case 6:
message_vision(sprintf("\n$N������"HIW"�����󽣡�"BLU"�����ܲ��������桯"NOR"�����⣬����������$n!\n"),me,victim);
     break;
     }
message_vision(sprintf(HIR"$Nȷʵ����$nҪ����$n��ʱѪ�����ء�\n"NOR),me,victim);
          victim->receive_damage("kee",110);
          COMBAT_D->report_status(victim, 1);
          me->add("force",-20);
   }
message_vision(sprintf(HIW"\n��ʹ������,һʱ֮��������ս!\n"NOR),me,victim);
me->start_busy(1);
 }
}
void sp2(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int six, force;
        six = me->query_skill("six-fingers",1);
        force = me->query_skill("sunforce",1);
        if(force>200) force=200;
          message_vision(sprintf(HIG"$N������Х��˫�ֻ�Ԫ��һ�й�ֱ�룬������������$n���϶Դ�����!!\n"NOR),me,victim);
          victim->receive_damage("kee",six+force);
          victim->apply_condition("bleeding",5);
          COMBAT_D->report_status(victim);
}
}
void sp3(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int force;
        force = me->query_skill("sunforce",1);
        if(force > 300) force=300;
          message_vision(sprintf(HIC"$n��ǰ�����ܵ�$N���ν���ǣ����$n�����Ƹ�������!!\n"NOR),me,victim);
          victim->receive_damage("kee",force);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
}
}

mapping query_action(object me, object weapon)
{
        int level=(int)(me->query_skill("six-fingers",1));

        if ( level < 10 )
           return action [random(3)];
        else if ( level < 20 )
           return action [random(5)];
        else if ( level < 30 )
           return action [random(7)];
        else if ( level < 40 )
           return action [random(9)];
        else if ( level < 50 )
           return action [random(11)];
        else if ( level < 60 )
           return action [random(13)];
        else if ( level < 70 )
           return action [random(9)+4];
        else if ( level >= 70 && me->query_temp("super",1))
           return action [12];
        else if ( level == 100 && me->query("marks/six_sp")==3 &&
                  me->query("family/family_name") == "�μ�")
           return action [random(12)+4];
        else
           return action [random(8)+5];
}

int vlid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("�������񽣻���Ҫ���ְ�....\n");
        if(me->query_skill("force")*3<=me->query_skill("six-fingers",1))
          return notify_fail("��Ļ����������ܲ���, �޷��������񽣡�\n");
        if(me->query_skill("literate")*3<=me->query_skill("six-fingers",1))
          return notify_fail("���֪ʶ���㣬�޷�����������ȫ��������֮���ľ�Ҫ�仯��\n");
        return 1;
}

int valid_enable(string usage)
{
      if(this_player()->query_skill("six-fingers",1) >= 45)
         {
            return (usage=="unarmed"||usage=="stabber")||(usage=="parry");
         }
          return (usage=="unarmed");
}

int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("�������񽣻���Ҫ���ְ�....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("��ľ��������޷���ϰ��\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("����������,��Ϣһ���ټ�������.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("scholar")+"/six-fingers/"+action;
}
