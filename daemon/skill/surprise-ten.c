//����ʮʽ
// by dhk 2000.5.5
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit SKILL;
void hurt(object me, object victim, object weapon, int damage);
void block(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);
void kee(object me, object victim, object weapon, int damage);

mapping *action = ({

//���˫��....(1)
([ "action":
         "$N˫��һ�磬����������ת��������\��"BLINK+HIW"������ʮʽ��"NOR"�е�"HIY"�����˫�ԡ�"NOR"������ʽ���̺�����򻯵���������\n"
      NOR"���Ե�����$n$lֱ�ƶ�ȥ������ʯ���쾪����ɳ��ʯ֮�ơ� \n"
      NOR"                                                                     \n"
BLINK+HIY"                                          ��  ��  ��  ˫  ��  ��"NOR"\n"
      NOR"                                                                     ",
        "dodge": 50,
        "parry": 50,
        "damage": 2000,
        "force":  5000,
        "damage_type":  "����",
        "weapon": "��������",
        "post_action": (: hurt :),
]),

//��ɽָ....(2-1)
([ "action":
         "$N��͸ָ�⣬ʹ��һ��"BLINK+HIW"������ʮʽ��"NOR"�еľ���"HIR"����ɽָ��"NOR"��һ���ۻ�ָ��ֱ��$n$l�����ƿ�֮���мд���\n"
      NOR"��Ʈ˷֮������������������ɽ������\n"
      NOR"                                                                   \n"
BLINK+HIR"                                            ��  ��  ɽ  ��  ��"NOR"\n"
      NOR"                                                                   ",
        "dodge": 200,
        "parry": 200,
        "damage": 600,
        "force":  1000,
        "damage_type":  "����",
        "weapon": "������ָ",
]),

//�����粨....(3)
([ "action":
NOR"$N���������ϼ磬˫�ָ߾١�˫�����죬��һ��$N�������һ������Ȼ���ܺ�Ȼ\n"
NOR"����ǿ�ҵ����С�����"BLINK+HIW"������ʮʽ��"NOR"�еľ���"HIM"�������粨��"NOR"������֮ʱ���ܴ�������\n\n"

BLINK+HIM"                         ��  ��  ��  ��  ��  ��"NOR"\n\n"

HIM"$n�������粨ǿ������ѹӰ���£������������е�ʹ��"NOR"��\n",
        "dodge": 70,
        "parry": 70,
        "damage": 840,
        "force": 7000,
        "damage_type": "����",
        "weapon": "����",
        "post_action": (: hurt :),
]),

//���Ǿ�....(4)
([ "action":
NOR"$N���ζ�ת��������³�һ��������̧ͷ������һ��\n"
NOR"��һ��"HIG"��"HIY" ��"HIC" ��"HIM" ��"HIG" ��"NOR"ʹ��Χʱ�ջû�������$N����Ӱ����ʱ����ʧɫ��������ҫ��\n"
NOR"��һ�лع�ƽ��֮ʱ��ֻ��$N����ɫ��â����Ϣ��ӯ�����²��졣\n",
        "dodge": 100,
        "parry": 100,
        "damage": 100,
        "force": 2000,
        "damage_type": "����",
        "weapon": "�ǹ�����",
        "post_action": (: kee :),
]),

//���²���....(5-1)
([ "action":
"$N˫Ŀ��������˫�ۣ���Ȼ��������ʹ��"HIB"�����²��С�"NOR"�е�"HIM"����վ�����"NOR"��һ����ʶ�Ŀ�ĺ�����۶���\n"
"�������ʯ��Ե��س���$n$l��ȥ��\n",
        "dodge": 60,
        "parry": 60,
        "damage": 1500,
        "force": 1000,
        "damage_type": "����",
        "weapon": "��������",
        "post_action": (: hurt :),
]),

//������....(6)
([ "action":
   "$N��������ͻȻ����һ�Σ��㼴ʹ��"BLINK+HIW"������ʮʽ��"NOR"�е�"BLU"�������硯"NOR"��Ī���Ĳ���һ��ǿ����ƥ�Ŀ�磬��ת���١�"NOR"\n",
        "dodge": 20,
        "parry": 20,
        "damage": 100,
        "force": 1000,
        "damage_type": "����",
        "weapon": "ǿ����ѹ",
        "post_action": (: block :),
]),

//���²���....(5-2)
([ "action":
"$N˫Ŀ��������˫�ۣ���Ȼ��������ʹ��"HIB"�����²��С�"NOR"�е�"HIC"�����ñ��졯"NOR"��һ����ʶ�Ŀ�İ׹����۶���\n"
"���Է������֮�Ƶس���$n$l��ȥ��\n",
        "dodge": 60,
        "parry": 60,
        "damage": 1500,
        "force": 1000,
        "damage_type": "����",
        "weapon": "��������",
        "post_action": (: hurt :),
]),

//ǿ��-��ɽָ....(2-2)
([ "action":
HIR"$N����ֹˮ��������ɽ������������������Ȼ$N��Ѹ��֮�٣���������$n"HIR"��\n"
HIR"ȥ����ʱ$N"HIR"�Ѿ���������ָ����ǿ����ӯ��������������������$n"HIR"����֮ʱ"NOR"\n"
HIY"ʹ��"BLINK+HIW"������ʮʽ��"NOR+HIY"�еľ���\n"
NOR"\n"
BLINK+HIC"                               ��  "HIR"��  ɽ  ָ "HIC" ��"NOR"\n"
NOR"\n"
HIG"����һ�£�����ɽ�����ѡ���ɽ����ɽ֮��ֱ��$n������\n"
HIR"$n����ɽָ���У��ڸ��ܴ������������˿"NOR"��\n",
        "dodge": 10,
        "parry": 10,
        "damage": 4000,
        "force": 2400,
        "damage_type": "����",
        "weapon": "������ָ",
]),

//ŭʽ��â��....(7)
([ "action":
HIW"$Nɱ��һ������ɫ��䡣����һ��������\��"BLINK+HIW"������ʮʽ��"NOR"�е�"HIC"��ŭʽ��â�̡�"NOR"������ʽ��ֻ��$Nŭ�����������ֽ�����������ɫ��â����ʱ��â������硣\n"
"$n���۾�����â���ˣ����ܲ����������ѱ���â�̽������ش���\n",
        "dodge": 10,
        "parry": 10,
        "damage": 1400,
        "force": 1000,
        "damage_type": "����",
        "weapon": "���ν���",
        "post_action": (: conti :),
]),

//����(һ)....(8)
([ "action":
HIY"\n$N���о����ʢ�����:\n\n"
HIW"             ��\n"
HIY"                  ���"HIW"��ʽ"HIC"��"HIM"����"HIR"����"NOR"\n"
"                                       ��\n"
"$NͻȻ���ˡ�"HIY"�������"NOR"����������ӯ��һ����������$n�����ȥ\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 7000,
        "force": 7000,
        "damage_type": "����",
        "post_action": (: sp1 :),
]),

//����(��)....(9)
([ "action":
HIW"ֻ��$N����һ�ᣬ������ʷ�������ı仯����ʱ���캮ѩ�����¾罵��\n\n"
HIY"\n$N���һ��:\n\n"NOR
   "
                      "GRN"��      "HIC"����"HIM"÷��"HIY"��"NOR+WHT"ѩ�ﲻ��"NOR"      "GRN" ��"NOR"\n\n"
HIW"$N˫���������ĺ����������Ƴ��ƾ�����֮����һ��������һ��ǿ��÷���α�������ֱ��$n��ȥ��\n\n"NOR
"                         �� "HIW" ����"HIW" ��ѩ"HIC"��"HIM"÷��"HIW" ��"RED"�� "HIW" ��\n\n
                                          �x�y�z
                                      �����������v
                                     ��     ��  ��
                                  �z ��         ��
       "HIC"��"NOR"                       �����v�v        �������v
       "HIC"��"NOR"                     ��  ��  ��        ��      �v
     "HIC"��"HIY"��"HIC"��"NOR"                  ��   ��       "HIY"��"NOR"            ��
       "HIC"��"NOR"                    ��          "HIM"�v����"NOR"           ��
       "HIC"��"NOR"                     �v       "HIY"��"HIM"��"HIC"��"HIM"��"HIY"��"NOR"       ����
                                ����     "HIM"�����v"NOR"     ����  ��
          ��                  �x��         "HIY"��"NOR"         �v
        �� �� �z�{�y        ������                     ��        "HIC"��"NOR"
        ��  ���������v�z�y�u�u���v        �u�v        �u         "HIC"��"NOR"
      ���u�����������v����  �v    �v�y�ߨu    �v�ߣߨu         "HIC"��"HIY"��"HIC"��"NOR"
    �u�u    ��        �������v��    ��            ��             "HIC"��"NOR"
            ��                ��    ��             ��            "HIC"��"NOR"
                              ��                   ��



"HIC"$n�ܵ���һ���������ˣ������轵���������ͣ����˳��ء�\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 6600,
        "force": 5600,
        "damage_type": "����",
        "post_action": (: sp2 :),

]),

//����(��)....(10)
([ "action":
HIY"\n$N����ز�������:\n\n"NOR
   "                   "YEL"�� "HIC"�ҿ��� "NOR+GRN"��ٵ� "HIB"����ٵ�"HIR"һ�᳤��"NOR" "YEL"��"NOR"\n\n"
HIC"ֻ��$N������������ظ�����һ�ƣ�������ʣ���������й���������ڿյ�֮״̬��"NOR"\n"
GRN"Ȼ��������ּ�$N˫���˾������������ڵ����ϡ�˫��ƽ��\�����֮����һ�����˫\n"
HIB"����������ң����㳤Ծ���ڸ߿�֮�д�ȣ�                                \n\n"
NOR"                           ��"HIM" һ"HIY" ��"HIC" ��"HIG" ��"HIR" ��"HIW" ��\n\n"NOR""
HIR"˫�����ֱ�����£������ƵĿռ䷺���߲ʰ�Ĺ⻪����������"NOR"��\n",
        "dodge": 80,
        "parry": 50,
        "damage": 8500,
        "force": 8500,
        "damage_type": "����",
        "post_action": (: sp3 :),
]),
});

void hurt(object me, object victim, object weapon, int damage)
{
        int force;
        if( me->query("force_factor") > 10 )
        if( random(500) < me->query_skill("force")+me->query_skill("surprise-ten",1))
        {
          force = me->query_skill("sunforce");
          victim->receive_damage("kee", 7*me->query("force_factor")+2*force );
          message_vision(sprintf(""HIB"$Nʹ������ʮʽ�а������������"HIB"$n�����ܣ�"HIB"$n����ǿ����������������������ܵ����ص����ˡ�\n"NOR),me,victim);
          if(damage <=0 )
          COMBAT_D->report_status(victim);
          me->add("force",-force);
        }
}
void block(object me, object victim, object weapon, int damage)
{
        int force;
        if(damage > 700)
        {
          force = (int)(me->query_skill("sunforce"));
          force = random(force/3);
          victim->apply_condition("blockade",
          random( me->query_skill("sunforce")+me->query_skill("surprise-ten") )/20 );

          message_vision(sprintf(""HIY"$n�ܵ�����ʮʽ֮"HIB"������"HIY"�Ŀ�Ϯ$n"HIY"���ɼ�������İ�\���������á�\n"NOR),me,victim);
          victim->start_busy(6);
          COMBAT_D->report_status(victim);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
        int i,time = random(3);
        if( me->query("force_factor") >= 10 )//&& me->query("family/family_name") == "�μ�")
        {
          if( me->query_temp("conti") == 0 )
          {
            me->set_temp("conti",1);
      message_vision(sprintf("\n[1;36m$N��Ȼ������ʮʽ[1;5;33m����ٻ�[0m��[1;5;33m�������[0m[1;36m��Ҫ����������Ȼ��Ȼ���潣��������������!![0m\n"),me);
              for(i=0;i<=time;i++)
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
          }
        }
}

//���Ǿ�--�����ظ���������
void kee(object me, object victim, object weapon, int damage)
{
        int force;
        if( me->query("force_factor") > 10 )
        {
          message_vision(sprintf(""HIY"$N����ɫ��â�����ϵ��˺۽�����ʧ����Ϣ��ӯ�����²���"NOR"��\n"),me);
          me->add("kee",2000);
          me->add("force",4000);
          me->start_busy(1);
        }
}

void sp1(object me, object victim, object weapon, int damage)
{
int i,vic_kee;
vic_kee = victim->query("kee")/500; //keeΪ��������
if(me->query("force") > 2000 && me->query("force_factor"))
{
  for(i=1;i<=9;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$N������"HIW"�������ʽ����"HIR"�����ն��������켫����"NOR"�����⣬��$n��ͷն��!\n"),me,victim);
     break;
     case 2:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"HIG"��˫�����֣����켫����"NOR"�����⣬��$n��֫����!\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"HIC"���������ǣ����켫����"NOR"�����⣬��$n��ǰ����!\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"HIM"������ת��������Ԫ����"NOR"�����⣬��Ȼ������ת����$n!\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"HIY"��Ǭ������������Ԫ����"NOR"�����⣬Ǭ����Ӱ��Χס$n!\n"),me,victim);
     break;
     case 6:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"NOR""WHT"����������������Ԫ����"NOR"�����⣬��������������$n!\n"),me,victim);
     break;
     case 7:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"NOR""BLU"���ߞ⹰�գ�����������"NOR"�����⣬�ᵶ�����˻��߽�����$n!\n"),me,victim);
     break;
     case 8:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"NOR""CYN"���������������������"NOR"�����⣬��Ӱ���˷������Χס$n!\n"),me,victim);
     break;
     case 9:
message_vision(sprintf("\n$N������"HIW"�������ʽ����"NOR""MAG"���ž�����������������"NOR"�����⣬�������߾Ź���������$n!\n"),me,victim);
     break;
     }
if(me->query_skill("sunforce")+me->query_skill("surprise-ten") > random(180))
     {
message_vision(sprintf(HIR"$Nȷʵ����$nҪ����$n��ʱѪ�����ء�\n"NOR),me,victim);
          victim->receive_wound("kee",vic_kee);
          victim->apply_condition("burn",random(45)+((int)me->query_skill("sunforce", 1)/10));//����
          COMBAT_D->report_status(victim);
          me->add("force",-1000);
      }
       else
      {
message_vision(sprintf("���$nѸ�ٵرܿ����С�\n"),me,victim);
      }
   }
  }
}
void sp2(object me, object victim, object weapon, int damage)
{
        int ten, force;
        ten = me->query_skill("surprise-ten");
        force = me->query_skill("sunforce");
        if( random( force ) > random( ten ) )
        {
          message_vision(sprintf(""HIC"$N���\���䣬������Ԫ��һ��������������������ȭ����$n"HIC"�������!!!\n"NOR),me,victim);
          victim->receive_damage("kee",ten*9/2);
          victim->apply_condition("cold",random(45)+((int)me->query_skill("sunforce", 1)/10));//����
          COMBAT_D->report_status(victim);
        }
}

void sp3(object me, object victim, object weapon, int damage)
{
        int force;
        force = me->query_skill("sunforce");
        if( me->query("force_factor") >= 10 && victim->query_condition("blockade"))
        {
          message_vision(sprintf(""HIC"$n�ֵ����У���$N�������У����ξ���$n����ͻȻ������й�������಻����!!\n"NOR),me,victim);
          victim->receive_damage("kee",force*6/5);
          victim->apply_condition("hart",random(45)+((int)me->query_skill("sunforce",1)/10));//����
          victim->start_busy(random(3));
          COMBAT_D->report_status(victim);
        }
}


mapping query_action(object me, object weapon)
{
        int level=(int)(me->query_skill("surprise-ten",1));

        if ( level < 10 )
           return action [random(3)];
        else if ( level < 30 )
           return action [random(6)];
        else if ( level < 60 )
           return action [random(7)];
        else if ( level < 80 )
           return action [random(8)];
        else if ( level < 90 )
           return action [random(9)];
        else if ( level < 95 )
           return action [random(9)+1];
        else if ( level < 100 && me->query_temp("super",1))
           return action [random(9)+2];
        else if ( level >= 100 && me->query("marks/six_sp") ==3)
           return action [random(9)+3];
        else
           return action [random(9)];
}

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("������ʮʽ��Ҫ���ְ�....\n");
        if(me->query_skill("force")*3<=me->query_skill("surprise-ten",1))
          return notify_fail("��Ļ����������ܲ���, �޷�������ʮʽ��\n");
        if(me->query_skill("literate")*3<=me->query_skill("surprise-ten",1))
          return notify_fail("���֪ʶ���㣬�޷���ᾪ��ʮʽ���е�Ҫ��ȫ������������֮���ľ���仯��\n");
        return 1;
}

int valid_enable(string usage)
{
      if(this_player()->query_skill("surprise-ten",1) >= 70)
         {
            return (usage=="unarmed")||(usage=="parry");
         }
          return (usage=="unarmed");
}

int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("������ʮʽ��Ҫ���ְ�....\n");
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
        return "/daemon/class/scholar/"+action;
}

