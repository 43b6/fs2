//by roger
//������;ħ��֮��ר��skill
inherit SKILL;
inherit SSERVER;
#include <ansi.h>
#include <combat.h>
void burn(object me, object victim, object  weapon, int damage);
mapping *action = ({
([	"action": "$N���ƻ�һ�£����ζ�ʱ����ƽƮ���ߣ�$n���˹��в����Ȼ!!$N�û������ұ۹��𼫻𹦰˳ɹ������𾢺�Ȼ����$n�����ڣ�����"HIR"�����ھ߷١�"NOR"��$n���յİ�����������Ѫ����",
		"dodge":		-60,
		"parry":		-60,
		"force":		350,
		"damage":               360,
                "post_action":               (: burn :),
		"damage_type":	"��������"
	]),
([	"action": "$N����˫�ۣ�˫�ֳ�צ״��ͣ�ؼ����£�ʹ���Ե���"HIR"���糵���֡�"NOR"��$n���ʵķ��ؾ�ʧ�£�$N�����й�ֱ�룬�伱�������Ƽ�����$n���ֱ۽ʶ�!!",
		"dodge":		-60,
		"parry":		-60,
		"force":		350,
		"damage":               360,
                "post_action":               (: burn :),
		"damage_type":	"��צ����"
	]),
([	"action": "$N���𼫻�����,�������һƬ�˻�,����һ��,˫����£,ʹ��"HIR"�����������¡�"+NOR",һȦ,һ��,����һ������������,ɨ��$n!!",
		"dodge":		-60,
		"parry":		-60,
		"force":		350,
		"damage":               360,
                "post_action":               (: burn:),
		"damage_type":  "����"
	]),
([	"action": "$Nȫ��𾢱���֮�£������ڸ߿�һʽ"HIR"�����켫��"NOR"�ӿ��к�Ȼ��˫����$nֱѹ���£�ɲ�Ǽ�$n������ȫ��������ǿ����ƥ���ۻ���У������\�أ��޷�����",
		"dodge":		-60,
		"parry":		-60,
		"force":		350,
		"damage":               360,
                "post_action":               (: burn :),
		"damage_type":	"��������"
	]),
([	"action": "$N�������,ƮȻ����,˳��ʹ��"HIR"�����𵶡�"+NOR",˫�ƻ𾢱��³ɵ�,�Ӷ�֮��,����һƬ���,������֮��,$n��ʱ��ǰ����һƬ�˹�,һ���ѣ,�⵶Ѹ�ٵĳ�$n����λ��ȥ!!",
                "dodge":                -60,
		"parry":		-60,
  		"force":		350,
		"damage":               360,
                "post_action":               (: burn :),
		"damage_type":	"������"
	]),        
});

void burn(object me, object victim, object  weapon, int damage)
{
         int burn;
         burn=victim->query_condition("burn");
message_vision("$N�ļ�����$n�������Ҵܣ�ʹ$n�ܵ������ص����ˣ�������Ϣ��������\n",me,victim);
         victim->apply_condition("burn",burn+3);
         victim->add("kee",-30);
         victim->add("force",-30);
         COMBAT_D->report_status(victim, 1);
 }
int valid_enable(string usage) { return ( usage=="unarmed" || usage=="parry"); }

mapping query_action(object me,object weapon)
{
 int i,force,kee,burn;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 burn=victim->query_condition("burn");
 force=victim->query("force",1);
 kee=140;
        if( random(100) < 10){    
             message_vision(HIY"
$N��Ц˵�������ڼ��������£���Ҳ���������ˣ���


"HIR"                       ������ �� �� �� ��"NOR"


"HIM"��һ��
"HIR"---���޻���---"NOR"
"HIR"$N���ȵ�վ��ԭ�أ�˫������ǰ���滭�˸�Բ��˲�������һ�
���һ�����а�Ļ��������ư������ͣ�ֱ����$n�����ţ�
"NOR"���$n�����������عᴩ����Ѫ���£�ȫ�����������һ��У�\n",me,victim);
             victim->receive_damage("kee",(int)kee,me);
             COMBAT_D->report_status(victim);
             message_vision("


"HIG"�ڶ���
"HIR"---����˫��---"NOR"
"HIR"$N���𼫻𹦣�˫�Ʒ����»��౩�¼�����$n�������̣�һ
˲��$n�������Ա�������ӡ�У��������м����Ž���ζ��$n�Ĳҽ���...
"NOR"���$n����������͸�ض������ۿ��ǲ�����\n",me,victim);
             victim->receive_damage("kee",(int)kee,me);
             COMBAT_D->report_status(victim);     
             message_vision(HIY"

$N��𣺡����ɣ���

"HIW"������
"HIR"---����پ�������---
$N���һ���������ܽ�������ȼ����������\��֮����
$n���ֶ��¶�ʱ���ȫ���������ڻ��У��յ�$nƤ��
�������������ϣ�
\n"NOR,me,victim);
             victim->receive_damage("kee",190,me);
             victim->apply_condition("burn",burn+18);
             me->start_busy(2);
            COMBAT_D->report_status(victim);
                             }

    return action[random(sizeof(action))];
}

string *parry_msg = ({
HIR"\n��$n���𼫻�����Ӳ�ܣ�$Nֻ����һ�ɷǱ�Ѱ�������������е�$w���������ò����з���\n"NOR,
            });
string query_parry_msg(string limb)
{
   return parry_msg[random(sizeof(parry_msg))] ;
}
             
