// ����ȭ�� by swy
#include <combat.h>
#include <ansi.h>
void movedown1(object me,object target,object weapon,int damage);
void movedown2(object me,object target,object weapon,int damage);
void movedown3(object me,object target,object weapon,int damage);
inherit SKILL;
mapping *action = ({
// 1
(["action":"$N�ս�˫ȭʹ��"+HIR+"�����۹���"+NOR+",�����ֱ�Ӳ����$n��$l��ȥ��",
        "damage":       30,
        "force":        160,
        "damage_type":"����",
        ]),
// 2
(["action":"$N�������,������������һ��ʹ��"+HIR+"�����߹���"+NOR+",������$nһ�ߡ�",
           "damage":           60,
           "force":            160,
           "damage_type":"����",
          ]),
// 3
(["action":"$N������,��ת����,һ��"+HIY+"����ͷ����"+NOR+",ײ��$n��������",
           "damage":      80,
           "force":          160,
           "damage_type":"ײ��",
           ]),
// 4
(["action":"$N����$n����ʹ��"+HIY+"�������⡯"+NOR+",$n��㱻�����ڵء�",
        "damage":          80,
        "force":        160,
        "damage_type":"ײ��",
            ]),
// 5
(["action":"$N���һ��ʹ��"+HIG+"�������֡�"+NOR+"Ӳ������,�ٳ�ͬһʱ��˫��ͬ������$n��$l��",
        "damage":    100,
        "force":        160,
        "damage_type":"����",
        ]),
// 6
(["action":"$N΢һ�¾�,˫�����ʹ��"+HIG+"����ɰ�ơ�"+NOR+",��$n�����̺�������ȥ��",
        "damage":       100,
        "force":        160,
        "damage_type":"����",
        ]),
// 7
(["action":"$N����һ��,ʹ��"+HIM+"�����צ��"+NOR+",��$n������ץȥ��",
        "damage":       130,
        "force":        160,
        "damage_type":"ץ��",
        ]),
// 8
(["action":"$N��������,����ƽ�$n,һ��"+HIM+"����ϥ����"+NOR+",��$n�ĸ������˹�ȥ��",
        "damage":       130,
        "force":        160,
        "damage_type":"ײ��",
        ]),
// 9
(["action":"$N�ڿ�Ծ��,����һ���������ʹ��"+HIB+"��׷���ơ�"+NOR+",��$n��$lϮȥ��",
        "damage":       160,
        "force":        160,
        "damage_type":"����",
        ]),
// 10
(["action":"$N�Ʋ�����,����Ī��,ͻȻһ��"+HIC+"������ָ��"+NOR+",$n��ָϮ����Ϣ��ʧ��",
        "damage":       160,
        "force":        160,
        "damage_type":"ָ��",
        "post_action":          (: movedown1 :),
        ]),
// 11
(["action":"$N��������,��������һ��,ʹ��"+HIW+"��ǧ��բ��"+NOR+",$nӲ�ǵֵ�����³���Ѫ��",
"damage":160,
"force":160,
"damage_type":"����",
"post_action":          (: movedown2 :),
]),
// 12
(["action":"$N�����ᾢ,���֮������֮��,һ��"+HIW+"����������"+NOR+",��Ȼ�ش�$n��",
"damage":200,
"force":200,
"damage_type":"����",
"post_action":          (: movedown3 :),
]),
});
int valid_learn(object me)
{
        object ob;
        if( (int)me->query("max_force") < 100)
        return notify_fail("�������������û�а취������ȭ����\n");
        if( (string)me->query_skill_mapped("force")!= "bonzeforce")
                return notify_fail("����ȭ��������������ڹ���������\n");
        return 1;
}

int valid_enable(string usage)
{
return (usage=="unarmed")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
if(me->query_skill("bonze-martial",1)<70) {
        return action[random(sizeof(action))];
} else {
return action[random(6)+6];
}
}

void movedown1(object me,object target, object weapon,int damage)
{
if(me->query("force")<30) return;
message_vision(
HIG"$N���ο���,ʮָ���,��ʱ��$n����Ϣ���������!\n"NOR,me,target);
if(70>=random(100)) {
        me->add("force",-30);
      message_vision(GRN"���$n��Ϣ�߲���ʱ���ܶ�����\n"NOR,me,target);
           target->start_busy(1);
          }
           else {
      message_vision(GRN "���$n����һԾ�����˹�ȥ��\n"NOR,me,target);
}
}
void movedown2(object me,object target, object weapon, int damage)
{
if(me->query("force")<50) return;
message_vision(
HIR"$N��ǧ��բ�ھ��ѱ�����$n����֮��!\n"NOR,me,target);
if(70>=random(100)&&me->query("force_factor",1)>=5)
  {
     message_vision(GRN"���$n�ھ����ң���ʱ������Ѫ��\n"NOR,me,target);
     target->receive_damage("kee",300,me);
     COMBAT_D->report_status(target, 1);
     me->add("force",-50);
  }else
message_vision(sprintf(GRN"���$N���ھ���$n���⡣\n"NOR),me,target);
}
void movedown3(object me,object target, object weapon, int damage)
{
int fa;
fa=target->query("force_factor",1)*20+100;
if(me->query("force")<70) return;
message_vision(
HIY"$N���������ᾢ�ѽ��֮�����ϼ�֮��ȫ������$n����!\n"NOR,me,target);
if(70>=random(100)&&me->query("force_factor",1)>=10)
  {
     message_vision(GRN"���$n��Ȼ�ش�����ʱ���ؿ�����Ѫ��\n"NOR,me,target);
     target->receive_damage("kee",fa,me);
     COMBAT_D->report_status(target, 1);
     me->add("force",-70);
  }else
message_vision(sprintf(GRN"���$N���ᾢƫ��׼ͷ��\n"NOR),me,target);
}
string perform_action_file(string action)
{
// if(this_player()->query_skill_mapped("unarmed")=="bonze-martial") {
        return CLASS_D("bonze")+"/bonze-martial/"+action;
// }
}
