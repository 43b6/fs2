// dragon-dagger.c
// ����ذ

#include <combat.h>
#include <ansi.h>

inherit SKILL;
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);

mapping *action = ({
([  "action"      :     "$Nһ��"HIW"��"HIM"��������"HIW"��"NOR
                        "������$w���⻮������$nֱ�������",
    "dodge"       :     -20,
    "damage"      :     100,
    "damage_type" :     "����",
    "post_action":      (:call_other,__FILE__,"damage_weapon":),
]),
([  "action"      :     "$N����$wһͦ����һ��"HIW"��"HIM"�����ĺ�"HIW"��"NOR
                        "���������$n��ȥ��",
    "dodge"       :     -30,
    "damage"      :     150,
    "damage_type" :     "����",
    "post_action":      (:call_other,__FILE__,"damage_weapon":),
]),
([  "action"      :     "$Nһ��"HIW"��"HIM"ǿ������"HIW"��"NOR
                        "������$w��$n֣ȥ���漴������ȥ�����ӻ�$w��",
    "damage"      :     200,
    "dodge"       :     -40,
    "parry"       :     -30,
    "force"       :     100,
    "damage_type" :     "����",
    "post_action":      (:call_other,__FILE__,"damage_weapon":),
]),
([  "action"      :     "$Nʹ��"HIW" ����ذ�� ֮ �� �� ���־�"NOR
                        ",���ش�������$nϮȥ��",
    "damage"      :     160,
    "damage_type":      "����",
    "post_action" :  (: sp1 :),
]),
([  "action"      :     "$Nʹ��"HIW" ����ذ�� ֮ �� �� ���־�"NOR
                        ",���ش�������$nϮȥ��",
    "damage"      :     140,
    "damage_type":      "����",
    "post_action" :  (: sp2 :),
]),
});

void sp1(object me, object victim, object  weapon, int damage)
{
     int skill,i,j;
        skill=me->query_skill("dragondagger");
     if( me->query("force") > skill && !me->query_temp("conti"))
     {
        i = skill/20;
        victim->start_busy((int)i);
        message_vision(HIW"$Nת�ۼ仯����ʮ����Ӱ,�Ի���$n��\n"NOR,me,victim);
        if(70 > random(100))
        {
                if(!me->query_temp("conti"))
                {
                        me->set_temp("conti",1);
                        j=skill/10;
                        message_vision(BLINK+HIY"$N�ۿ�$n���� �� ���־����Ի󣬷ܲ������ʹ��������!!!\n"NOR,me,victim);
                        for(i=0;i<j;i++)
                        {
                        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                        }
                        me->delete_temp("conti");
                        message_vision(HIR"$N��Ϊʹ������������Ѫ���ң���æ��Ŀ��Ϣ��\n"NOR,me);
                        me->start_busy(1);
                         victim->delete_busy();
                         victim->start_busy(1);
                }
        }
        me->add("force",-skill);
     }else victim->start_busy(1);
     return;
}
void sp2(object me, object victim, object  weapon, int damage)
{
     int skill;
       skill=me->query_skill("dragondagger")*4;
     if( me->query("force") > skill)
     {
       me->receive_curing("kee",skill);
       me->receive_heal("kee",skill);
       me->add("force",(int)(-skill/2) );
       message_vision(HIW"$N��ȡ�������,�ظ����˿ڡ�\n"NOR,me);
     }else me->receive_curing("kee",100);
     return;
}
int valid_learn(object me)
{
        object ob;

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") !="dagger")
        return notify_fail("��Ҫ��ذ�ײ���������ذ��\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="dagger"||usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

string perform_action_file(string action)
{
        return CLASS_D("officer")+"/dragon-dagger/"+action;
}
