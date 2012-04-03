// yu-needle
// �������--- ���P(unarmed), ���P(stabber)
// by adam..

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void bleed(object me, object victim, object weapon, int damage);
void kforce(object me, object victim, object weapon, int damage);
void busyk(object me, object victim, object weapon, int damage);
void sp1(object me,object victim, object weapon, int damage);
void sp2(object me,object victim, object weapon, int damage);
void sp3(object me);
string *parry_msg=
    ({
   "$n����һ����ָ�䳤��ƽƽ����$N�������ϣ�һ�С�"HIM" ��ȸβ"NOR" ����$N������ҷ�˿�ȥ��\n",
   "$n�����忿��$N��һ�С�"HIC" մ��ʮ�˵� "NOR"������$N���ԭ�أ�ʹ������ʽ!\n",
   "$n���г��������趯��һ�С�"HIW" ���ٳ���"NOR" ��, �Ƶ�$N���ò���ס����!\n",
   "$n�����еĳ������Բ��һ�С�"HIB" �ƻ�Բ�� "NOR" ������$N�Ĺ��ƾ�������������\n",
   "$n�Ծ��ƶ������г���ƽ����ǰ��һ�С�"CYN" ����Ʊ�"NOR" ����������$N�Ĺ���!\n",
});

//unarmed, stabber_action

mapping *action = ({
([ "action":"$Nһ�С�"HIW" ��������"NOR" ������������������ǰ�磬˫��΢�֣���ָ����$n����ǰ��"HIC" �βѨ"NOR" ����������ȥ!",
        "dodge": -20,
        "parry": -20,
        "damage": 30,
        "force":  50,
        "damage_type":  "����",
]),

([ "action":"$N����һ�ţ�һʽ��"HIR" ������"NOR" ��������һ��������������$n��ͷ����"HIY" �ٻ�Ѩ"NOR" ������ȥ!",
        "dodge": -20,
        "parry": -20,
        "damage": 40,
        "force":  50,
        "damage_type": "����",
]),

([ "action":"$N˫��һ��һ��һѹ����$n�����ֱ���"MAG" �Ϲ�Ѩ"NOR" ����ס�������תһȦ�������ؽ�$n���˿�ȥ!",
        "dodge": -20,
        "parry": -20,
        "damage": 50,
        "force":  60,
        "damage_type": "ˤ��",
]),
([ "action" : "$N��ϥ΢�ף�ٿ������һת���Ƶ���$n�ı�����ָ��$n����"HIW" ����Ѩ"NOR"������ȥ!",
        "dodge": -20,
        "parry": -20,
        "damage": 60,
        "force":  70,
        "damage_type": "����",
]),
([ "action" : "$N����ͻȻ����������������$n��������Ȼ$N������ͣ������һ����ת��Ϊ���������$n������"HIR" ��ѪѨ"NOR" ��������ȥ!",
        "dodge": -30,
        "parry": -30,
        "damage": 70,
        "force":  80,
        "damage_type": "����",
]),
([ "action":"$N��Хһ�������������$n��������ȥ��˫��һ��һ������$n����ߡ�"HIY" ̫��Ѩ"NOR" �������ԡ�"HIG" �縮Ѩ"NOR" ������!",
        "dodge": -30,
        "parry": -30,
        "damage": 80,
        "force":  90,
        "damage_type": "����",
]),
(["action":"$Nһ�С�"HIM" ת������"NOR" ����������������ҡ��\��˫�����·��������ٵ�����$n�Ĵ򣬻����ã���$n��ȫ�����ҪѨ�к�!",
        "dodge": -30,
        "parry": -30,
        "damage": 90,
        "force":  90,
        "damage_type": "����",
]),

//weapon_action

([ "action":"$N����һ�ӣ�����һ����һ�С�"HIG" �ɻ���Ҷ"NOR"  ����������$w����$n��˫�ۡ�"HIG" ����Ѩ"NOR" ��!",
        "dodge": -35,
        "parry": -35,
        "damage": 90,
        "force":  90,
        "damage_type":  "����",
]),

([ "action":"$N��ʹ$w, ���ҿ���, ���಻��, ����$n����ǰ��"HIM" ����Ѩ"NOR" ��, ����"HIR" ����Ѩ"NOR" ��",
        "dodge": -40,
        "parry": -40,
        "damage": 90,
        "force":  90,
        "damage_type": "����",
        "post_action": (: busyk :),
]),

([ "action":"$N����һ�ף�˫����$w��ƽƽ��ǰֱ�̣�һ�С�"HIC" ���׷���"NOR" �����ƴ�����ӭ��$n�Ľŵס�"HIC" ӿȪѨ "NOR"��",
        "dodge": -45,
        "parry": -45,
        "damage": 100,
        "force":  100,
        "damage_type": "����",
        "post_action": (: busyk :),
]),
([ "action":"$N�����飬һ�С�"HIY" �ɲ����"NOR" ��������һԾ��$w����$n���Ρ�"HIW" ����Ѩ"NOR"�����綥��"WHT" �罺Ѩ"NOR" ��",
        "dodge": -45,
        "parry": -45,
        "damage": 110,
        "force":  100,
        "damage_type": "����",
        "post_action": (: busyk :),]),
([ "action":"$N˫������һ�ţ�һʽ��"HIC" ����չ��"NOR" ��������һ�С�"HIM" ƽɳ����"NOR" ��������$w����$n���ʺ�"HIB" ��ͻѨ"NOR" ����ȥ!\n",
        "dodge": -45,
        "parry": -45,
        "damage": 110,
        "force":  100,
        "damage_type": "����",
      "post_action": (: kforce :),
]),
([ "action":"$N����һת��һʽ��"HIM" ת������"NOR" ����������$w���һ��������������$n���ܣ�ٿ��һ�С�"HIY" ��������"NOR" ������$w����$n���š�"WHT" ����Ѩ"NOR" ������"HIC" ����Ѩ"NOR" ��",
        "dodge": -50,
        "parry": -50,
        "damage": 110,
        "force":  100,
        "damage_type": "����",
        "post_action": (: kforce :),
]),
([ "action":"$N���һ���� �������� �����Ķ�ȫ���ھ�������$w����ߵ��㣬�ֱ�
��$n�ġ�"HIR" �ٻ�Ѩ"NOR" ������"WHT" ӡ��Ѩ"NOR" ������"HIC" ��ͻѨ"NOR" ������"HIM" ����Ѩ"NOR" ������"HIY" ����Ѩ"NOR" ������"MAG" �βѨ"NOR" ������"HIR" ����Ѩ"NOR" ��������ͻ��!",
        "dodge": -50,
        "parry": -50,
        "damage": 110,
        "force":  120,
        "damage_type":"����",
        "post_action": (: bleed :),
]),
//������һʽ
([ "action":
HIC"        $N���Ŀ������е��룬ʹ��һʽ"HIW"��"HIY"����"HIR"����B"HBBLU+HIC"��ӳ����������"NOR+HIW"�ƣ���\n\n\n"NOR+
HIC"                  $N������⣬ʹ��ɢ��������ɫ�Ĺ�â��������Ӱһ����\n
          ���Ƶ��е���ǰ�����������ַ���Ӱ����������һ����â�����ȥ����â������\n
������ʹ�õ�����"NOR"��"HIW"��̫���ξ�"NOR"������"HIG"��̫��Ƣ��"NOR"������"HIC"�������ľ�"NOR"������"HIR"����������"NOR"������"HIB"��������\n
          ����"NOR"������"HIM"�������ξ���"HIC"����������֮��ҪѨѪ���߰ߣ����������ܴ���ɲʱ��\n
                    ��һ�ɺ���������Ѹ�ٱ鲼ȫ����������Ȧ�еĺ���\n
\n"NOR,
        "dodge": -50,
        "parry": -50,
        "damage": 110,
        "force":  120,
        "damage_type":"����",
        "post_action": (: sp2 :),
]),
//�����ڶ�ʽ���ֲ�����
([ "action":
"$N����һ������$n����ʹ������֮��"HIW"��"HIY"����"HIR"����B"HBRED+HIY"�������ݳ��׻�"NOR+HIW"�Ƶļ�����������\n"NOR,
        "dodge": -50,
        "parry": -50,
        "damage": 110,
        "force":  120,
        "damage_type":"����",
        "post_action": (: sp1 :),
]),
});

//��ǿ����

void bleed(object me, object victim, object weapon, int damage)
{
    int j=0;
    if (random(me->query_skill("stabber")) > 80 && me->query_temp("bleed")!=1 && me->query("class")=="doctor")
{
        me->set_temp("bleed",1);
        for(j = 0;j < 7; j++)
{
        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        COMBAT_D->report_status(victim);
}
        me->delete_temp("bleed");
    if (random(100) > 65 && !me->is_busy())
{
        me->start_busy(1);
        message_vision(HIR"$Nʹ�������޷�������������!!\n"NOR,me);
    }
  }
}

void kforce(object me, object victim, object weapon, int damage)
{
if (random(me->query("functions/break-kee/level")+100) > 70 && victim->query("force_factor") > 1
    && me->query("functions/break-kee/level") > 50 && me->query("force") > 50 && me->query("class")=="doctor")
{
message_vision(HIY"$N������Ѩָ�������ɴ�ɢ$n���ڵ��ھ�!!\n"NOR,me,victim);
if (victim->query("force_factor")>1) victim->add("force_factor",-1);
if (victim->query("force") > 400) victim->add("force",-300);
me->add("force",-50);
}}
void busyk(object me, object victim, object weapon, int damage)
{
if (random(me->query("functions/gold-needle/level")+100) > 75 && me->query_temp("bleed")!=1
    && me->query("functions/gold-needle/level") > 50 && me->query("force") > 50 && me->query("class")=="doctor")
{
message_vision(HIC"$N��������Ѩ�������ɷ���$n���ж�!!\n"NOR,me,victim);
victim->start_busy(1);
me->add("force",-50);
  }
}
void sp1(object me,object victim, object weapon, int damage)
{
        int sklv,str,i,flag;

        sklv=me->query_skill("yu-needle",1);
        str=victim->query("str");

        if(sklv >100) sklv = 100;
        sklv*=(5+random(3));//����500,���700
        str*=(6+random(5));//���350(���Ǹոռ���str�Ļ���370)

        if(!damage && 500 < random(1500)) return ;//������ˣ���һ��Ҫ����д
        if(me->query("force") < 600) return ;//�����������Ժ���Լ�����
        if(me->query("kee") < 200) return;//kee����Ҳ���ܷ�
        if(me->query_temp("bleed"))//�������ֱ���������������
          return ;
        if(60 < random(100) && !me->query_temp("crazy_hit")) return;
        if(me->query("family/family_name")!="������") return ;
        if(userp(me) && !me->query("env/������")) return ;

        if(me->query_temp("crazy_hit")){
          me->delete_temp("crazy_hit");
          sklv*=2;
        }

        flag=0;
        for(i=1;i<=6;i++){
          switch(i){
            case 1:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"ŭ����ԭ"NOR"��
$N"HIR"����������˫��һ�ᣬ���е���бб��Ӷ��̳���ͻ����һ������ֱ����$n��"HIG"���͹�Ѩ��"HIR"��\n"NOR,me,victim);
            break;
            case 2:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"�������"NOR"��
$N"HIR"˫�ֽ��棬���һ��������ͦ�뵱ͷֱ�̣�������ֻ�Ϊһ�������;���$n��"HIC"������Ѩ��"HIR"��\n"NOR,me,victim);
            break;
            case 3:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"��������"NOR"��
$N"HIR"������ת�������Ķ�������ͻ����ס�Է�����ֻ��һ����â�����ʹ���$n��"HIW"������Ѩ��"HIR"��\n"NOR,me,victim);
            break;
            case 4:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"�����ۻ�"NOR"��
$N"HIR"������ϣ������Ʋ���������֮�������⣬��Ȼ��ǰֱ������Ӱֱ����$n��"HIM"���Ϲ�Ѩ��"HIR"��\n"NOR,me,victim);
            break;
            case 5:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"��Ѫ����"NOR"��
$N"HIR"�������飬��������������������ͻ��������֣�ͻ�ֻ����������$n��"HIY"������Ѩ��"HIR"��\n"NOR,me,victim);
            break;
            case 6:
        message_vision("
                  $Nʹ�� --- "HBRED+HIW"�� "HIY"�� �� �� �� �� "HIW"��"NOR" ---��"HIR"���˻��"NOR"��
$N"HIR"����Ʈ����˫�ֺ󳷣�����֮��ͻ�û�Ϊ�����գ����»��ˣ���������$n��"HIB"���ٻ�Ѩ��"HIR"��\n\n"NOR,me,victim);
            break;
          }
          if(50 > random(100)){
            message_vision(HIY"$N"HIY"�������У��˴���ʼ��Ѫ!!!\n"NOR,victim);
            victim->receive_damage("kee", sklv-str);
            COMBAT_D->report_status(victim);
            flag=1;
          }
          else{
            message_vision(HIG"$N"HIG"һ�����������������һ��!!!\n"NOR,victim);
          }
        }
        if(flag){
          victim->apply_condition("burn", random(6)+3);
          victim->apply_condition("star-stial", random(6)+1);
          COMBAT_D->report_status(victim);
        }
        me->add("force",-600);
        message_vision("$N"HIB"��Ϊʹ�����������������ľ������ڵ��������Ͻ�������Ϣ����\n"NOR,me);
        me->start_busy(1);
        COMBAT_D->report_status(me);
}
void sp2(object me,object victim, object weapon, int damage)
{
        int mforce,mkee;

        if(!damage) return ;
        if(me->query("force") <100)
          return notify_fail(HIR"��ʹ������������֮�ڶ�ʽ֮�����ڽ߾���������������ʹ��\n"NOR);
        mforce = (int)me->query("max_force");
        mkee = (int)me->query("max_kee");
        victim->start_busy(random(2)+1);//����������busy 1,����meҲҪbusy 1
        victim->apply_condition("cold", random(5)+3);
        victim->apply_condition("star-stial", random(6)+1);
        victim->receive_damage("kee",400,me);
        COMBAT_D->report_status(victim);
        me->add("force",-100);
        message_vision("$N"HIB"���͵�ʹ����������֮�ڶ�ʽ֮������һʱѪ����ת���������ʣ�\n"NOR,me);
        me->start_busy(random(2));
}
//��������ʽ����Ѫʽ
void sp3(object me)
{
        int force;
        string out;
out=
HIW"$N����"HIW"��"HIY"����"HIR"����B"HBCYN+HIW"�ǳ��ƿռ�����"NOR+HIW"�ƣ���\n"NOR+
HIW"$Nץ׼ʱ������ȫ��������棬���������˹�����֮"HIM"�澭����"HIW"��ȥ������\n
                     "HIG"������  ������"HIR"            ������  ������\n
                           "HIY"������  �F����"HIC"������  �F����\n
                     "HIW"������  ά����"NOR+RED"            ������  ά����\n
               "HIB"������  ������"HIM"                        ������  ������"NOR"\n
$N"HIR"һʱ�е������ظ��˲��٣��ֿ�ʼ�����������������"NOR"\n"NOR;

        message_vision(out,me);

        force = (int)me->query_skill("force",1);
        force = force*(random(4)+2);
        me->receive_curing("gin",force);
        me->receive_curing("kee",force);
        me->receive_curing("sen",force);
        me->receive_heal("gin",force);
        me->receive_heal("kee",force);
        me->receive_heal("sen",force);
        COMBAT_D->report_status(me);
}

mapping query_action(object me, object weapon)
{
    int i, damage, sklv, limit;
    object *enemy, target;
    enemy = me->query_enemy();
    i = sizeof(enemy);
    target = offensive_target(me);
    sklv = (int)me->query_skill("yu-needle",1);
    damage = sklv+random(sklv);
    
    if(target)
{
    if(me->query("family/family_name") == "������" && weapon->query("id")=="pnx_needle")
    {
    if(me->query("doctor/killpnx") == 1 && sklv >= 120)
        {
        message_vision("��Ȼ��$N���еĦƳ���Ʒ�������ӿ��һ�����ȵ�ů��ע��$N���ľ�����
.....\n"NOR,me,target);
        message_vision("\t$N�ƺ���������������תʹ��������ʽ���������ա�\n"NOR,me,target);
message_vision(HIR+@LONG
                                          .
                                        .::.
                                      .:::..
                                    .:::::..
                                  .:::::::..
                               .:::::::::::
                             .:::::::::::.
                          .::::::::::::::
                       .::::::::::::::::
                      ::::::::::::::::'
                      :::::::::::::::'
                       ::::::::::::::
                    .  :::::::::::.::                      '::::::'
                   .  . :::::::::::::                .:
                 .  .   ::::::::::::'            .::::::.    ':::::'   ::::'
                . .    .:::::::::::'                      ':::::::::::'
               . .   .::::::::::::'        .:::::::.
             .::.. .:::::::::::::.......:::::::.    ':::::::::.               '
          .:::: * ::::::::::::::::::::::      '::::::.        ':::::.  :::::'
       ..:::::::::::::::::::::::''''''':::::::'     '::::::.                   '
                  ':::::::::::::.            ':::::::'          :::::.     '
                    '::::::::::::.                     ':::::'      :::::
                     '::::::::::::.                           :::::'
                     .::::::::::::::
                     .::::::::::::::
                    .:::::::::::::::
                    ::::::::::::::::
                      ':::::::::::::.
                        '::::::::::::.
                          ':::::::::::.
                            '::::::::::
                              ':::::::''
                                ':::::''
                                  ':::''
                                    '::'
                                      '
LONG+NOR,me,target);
        message_vision(HIR"���ų���������֮�𣬽�$n��Χ�ڻ��֮�У�$N�ƺ����˲���
...\n"NOR,me,target);
        target->apply_condition("bleeding",random(20)+5);
        target->receive_damage("kee",-sklv);
        COMBAT_D->report_status(target);
        me->add("force",-300);
        me->start_busy(1);
        }
    }
}

    limit=me->query_skill("yu-needle",1)/10;

    if(30 > random(100) && !me->query_temp("bleed") &&
       me->query("doctor/sosman") && limit >8)
       sp3(me);

    if (limit < 2 )
      return action[random(2)+2];
    if (limit == 2 )
      return action[random(3)+3];
    if (limit == 3 )
      return action[random(3)+4];
    if (limit == 4 )
      return action[random(3)+5];
    if (limit == 5 )
      return action[random(3)+6];
    if (limit == 6 )
      return action[random(3)+7];
    if (limit == 7 )
      return action[random(4)+7];
    if (limit == 8 ){
      return action[random(5)+7];
    }
    if (limit == 9 ){
      if(me->query("doctor/sosman"))
        return action[random(7)+8];
      else
        return action[random(6)+7];
    }
    if(limit>=10){
      if(me->query("doctor/sosman"))
        return action[random(7)+9];
      else
        return action[random(6)+8];
    }
}

int valid_enable(string usage)
{
    return (usage=="stabber") || (usage=="parry");
}

int practice_skill(object me)
{
        if(!me->query_temp("weapon") || !me->query_temp("secondary_weapon") )
          return notify_fail("�������������Ҫ�ø����!....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("��ľ��������޷���ϰ��\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("����������! ��Ϣһ���ټ�������.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}
string query_parry_msg(string limb)
{
   return parry_msg[random(sizeof(parry_msg))];
}
string perform_action_file(string action)
{
        return CLASS_D("doctor")+"/yu-needle/"+action;
}


