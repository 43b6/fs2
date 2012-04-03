#include <combat.h>
#include <ansi.h>
inherit SKILL;
void berserk(object me, object victim, object  weapon, int damage);
void conti(object me, object victim, object  weapon, int damage);
void hurt(object me, object victim, object  weapon, int damage);
mapping *action = ({
//1
(["action":HIG"��ħӥʴ�ա�"NOR"
$Nʹһ��ħ�ս����е�"HIG"��ħӥʴ�ա�"NOR"������$w��һ����ӥ��ֱֱ����$n��$l��",
        "dodge":-20,
        "parry":-10,
        "force": 70,
        "damage":30,
        "damage_type":"����",
]),//2
(["action":HIR"���չ���Ӱ��"NOR"
$Nʹ��ħ�ս����е�"HIR"���չ���Ӱ��"NOR"���������ն��$n��$l��",
        "dodge":-20,
        "parry":-10,
        "force": 80,
        "damage":50,
        "damage_type":"����",
]),//3
(["action":HIY"��������С�"NOR"
$Nһ��"HIY+"��������С�"NOR"�����ζ�Ȼ�������ߣ�����$wն��$n��$l��Ȼ�������������С�",
        "dodge":-30,
        "parry":-10,
        "force": 90,
        "damage":70,
        "damage_type":"����",
]),//4
(["action":HIB"��������ɽ��"NOR"
$N����$w�й�ֱ����һʽ"HIB"��������ɽ��"NOR"��׼$n��$l�ݺݴ̳�������",
        "dodge":-40,
        "parry":-20,
        "force":100,
        "damage":70,
        "damage_type":"����",
        "post_action": (: hurt :),
]),//5
(["action":HIY"�����к�ء�"NOR"
$N��������������$w������һԾ��ʹһ��"HIY"�����к�ء�"NOR"��ʱһƬ�����ס$nȫ��",
        "dodge":-40,
        "parry":-20,
        "force":110,
        "damage":100,
        "damage_type":"����",
]),//6
(["action":HIM"���������ա�"NOR"
$N��$wƾ��һָ��һ��ħ�ս����е�"HIM"���������ա�"NOR"���ٵĴ���$n��$l��",
        "dodge":20,
        "parry":-30,
        "damage":100,
        "force":120,
        "damage_type":"����",
        "post_action": (: berserk :),
]),//7
(["action":HIC"������������"NOR"
$N����$w����һ�֣�ʹһ��"HIC"������������"NOR"���ֶ�׼$n$lһ����ȥ��",
        "dodge":-20,
        "parry":30,
        "force":130,
        "damage":110,
        "damage_type":"����",
]),//8
(["action":HIY"�����ն�����"NOR"
$N�ὣ��ǰ������һת����$wʹһ��ħ�ս����е�"HIY"�����ն�����"NOR"����һ���⻡ն��$n��$l��",
        "dodge":-30,
        "parry":-20,
        "force":140,
        "damage":120,
        "damage_type":"����",
        "post_action": (: conti :),
]),//9
(["action":HIB"�����Ƽ��ա�"NOR"
$Nһת��ʹ��һ��ħ�ս����е�"HIB"�����Ƽ��ա�"NOR"������$w��׼$n��$l�̳�������",
        "dodge":-20,
        "parry":-40,
        "force":150,
        "damage":130,
        "damage_type":"����",
]),//10
(["action":HIR"�������ա�"NOR"
$N����$w����һ�ӣ�ʹһ��"HIR"�������ա�"NOR"�������ѳ�һ�������ۣ���������Ѹ�ٵ���$n���Ͽ�ȥ��",
        "dodge":-20,
        "parry":-10,
        "force":160,
        "damage":140,
        "damage_type":"����",
        "post_action": (: berserk :),
]),//11
(["action":HIW"��͵�컻�ա�"NOR"
$N����$w�����һ����ʹһ��"HIW"��͵�컻�ա�"NOR"��$w������ɹ�â������һ����������$n��",
        "dodge":-20,
        "parry":-30,
        "damage":150,
        "damage_type":"����",
        "post_action":(: conti :),
]),//end
// �ñ��ɲ����� by swy
(["action":"�㲻�Ƕ��˹ȵ������Բ���ʹ����",
   "damage":10,
"damage_type":"�׳���",
]),
});
int valid_learn(object me)
{
        object wea1,wea2;
        wea1 = me->query_temp("weapon");
        wea2 = me->query_temp("secondary_weapon");
        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취��ħ�ս�����\n");
        if(me->query("class")!="bandit")
                return notify_fail("����ô����ѧ����ħ�ս�����\n");
        if( (wea1 && wea1->query("skill_type")!="sword") || (wea2 && wea2->query("skill_type")!="sword") )
                return notify_fail("���������һ�ѽ�������������\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}
void hurt(object me, object victim, object  weapon, int damage)
{
        int bellpower;
        bellpower = (int)me->query("bellicosity") / 50+1;
        damage=bellpower*10;
        if( damage >400){damage=400;}
        if( random(10) >= 3 && !me->query_temp("conti"))
        {
          victim->receive_damage("kee", damage ,me);
message_vision(sprintf(BLU"$N��ȫ��֮����ע�뽣�У�˳�ƽ�������$n��$n˲�䱻$N��������������\n"NOR),me,victim);
          COMBAT_D->report_status(victim);
          me->add("force",-5*bellpower);
        }
}
void berserk(object me, object victim, object  weapon, int damage)
{

     message_vision( sprintf(HIW"$N�������ۣ�׼��ʹ��"HIC+"��ħ���ѷ�ն��"HIW"��$N�������ܱ�����һ�����磡��\n"NOR),me,victim);
     message_vision(sprintf(HIW"$N���ܽ���ԽתԽ�������ݡ�һ������һ��������$n�����ȥ��\n"NOR),me,victim);
     if( random(10) >= 3 && !me->query_temp("conti") )
        {
            message_vision(sprintf(HIR"����ֱ������$n��$nӦ��������\n"NOR), me ,victim);
            victim->start_busy(1);
            me->add("force",-100);
        }
        else
        {
             message_vision(sprintf(HIR"���������ܣ��㿪����������һ����\n"NOR),me,victim);
             me->add("force",-100);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
        int i,lose;
        int bellpower = (int)me->query("bellicosity")/500+1;
        if(bellpower>8)
        bellpower=8;
          if( me->query_temp("conti") == 0 && random(10) >= 3)
          {
            lose = (int)me->query_skill("badsword", 1)/50+2+bellpower;
            me->set_temp("conti",1);
message_vision("\n\n\t\t\t"BRED+HIW"��ħ���ա��١��֡�"NOR"\n\n"NOR, me, victim);
            for(i=0;i<=lose;i++)      {
            COMBAT_D->do_attack(me,victim,me->query_temp("weapon"),TYPE_QUICK);
            }
            me->start_busy(1);
            me->delete_temp("conti");
          }
}
mapping query_action(object me, object weapon)
{
int skill_level;
    skill_level = (int)(me->query_skill("badsword",1));
if(me->query("class")!="bandit") return action[11];
    if(skill_level<40)
          return action[ random(4)];
    else if (skill_level<50)
          return action[ random(5)];
    else if (skill_level<60)
          return action[ random(6)];
    else if (skill_level<70)
          return action[ random(7)];
    else if (skill_level<80)
          return action[ random(8)];
    else if (skill_level<90)
          return action[ random(8)+1];
    else if (skill_level<100)
          return action[ random(10)+1];
    else
          return action[ random(8)+3];
}
int practice_skill(object me)
{
        if( (int)me->query("kee") < 30 || (int)me->query("force") < 3 )
        return notify_fail("�����������������û�а취��ϰħ�ս�����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ��ħ�ս�����\n");
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("bandit") + "/badsword/" + action;
}
