#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me,object victim,object weapon,int damage);
void killall(object me,object victim,object weapon,int damage);

mapping *action = ({
(["action":"$N�������������޷�ʹ�á�",
"dodge":0,
"parry":0,
"damage":0,
"damage_type":  "����"
]),
(["action":HIW"$Nץסʱ��, ��Ѹ�ײ����ڶ����ٶȹ���$n��������Ҫ����"NOR,
"dodge":-20,
"parry":-20,
"damage":30,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ�ڶ�ʽ�������󡯡�",
"dodge":                -20,
"damage":               40,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ����ʽ��������  ������",
"dodge":                -30,
"damage":               20,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ����ʽ��������  ������",
"dodge":                -40,
"damage":               50,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ����ʽ��������  ��  �С���",
"dodge":                -40,
"damage":               45,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ����ʽ��������  ��  ͻ����",
"dodge":                -20,
"damage":               50,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ����ʽ��������  ��  �С���",
"dodge":                -20,
"damage":               55,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ�ڰ�ʽ��������  ��  ������",
"dodge":                -30,
"damage":               60,
"damage_type":  "����"
]),
(["action":"$Nʹ���Ӻ�ʮʽ�ھ�ʽ��������  ��  ͻ����",
"dodge"      :               -35,
"parry"      :               -45,
"damage"     :                90,
"force"      :                220,
"post_action":               (: berserk :),
"damage_type":               "����"
]),        
(["action":HIW"$N����Ȱ��Ѹ���ƶ�����, ֻ������һ��, һ�С�"HIR"˲  ɱ  ��  ��"HIW"����������������"NOR,
"parry":             -60,
"dodge":             -60,
"force":          400,
"damage":         450,
"post_action":               (: killall :),
"damage_type":   "����"
]),
});
int valid_enable(string usage)
{
return usage=="dagger" || usage=="parry";
}

mapping query_action(object me, object weapon, object victim, object *enemy)
{
int skill_level, limit, i, j=0,kill_hurt;
skill_level=(int)me->query_skill("japan-blade", 1);
limit=(int)(skill_level/10);
enemy=me->query_enemy();
i=sizeof(enemy);
victim=enemy[random(i)];
kill_hurt=(me->query("PKS"))*5;
if (kill_hurt > 1500) kill_hurt=1500;
if (skill_level > 90 && random(100)>1 && me->query("bellicosity") > me->query("force")
    && me->query("bellicosity") > 8000)
{
me->do_command("hehe");
me->do_command("say �ٺ�....�������ʶһ��������ɱ�˽���!!");
message_vision(HIW"\n\tɱ  ��  �� ������ "HIY"�� ն  �� �� "HIW"!!\n"NOR,me);
victim->receive_wound("kee",kill_hurt/4);
COMBAT_D->report_status(victim);
me->add("force",-100);
me->add("bellicosity",-50);
if (me->query("bellicosity") > 13000)
{message_vision(HIW"\n\tɱ  ��  �� ������ "HIC"�� ն  �� �� "HIW"!!\n"NOR,me);
victim->receive_wound("kee",kill_hurt/3);
me->add("force",-200);
me->add("bellicosity",-100);
COMBAT_D->report_status(victim);}
if (me->query("bellicosity") > 18000)
{message_vision(HIW"\n\tɱ  ��  �� ������ "HIG"�� ն  �� �� "HIW"!!\n"NOR,me);
victim->receive_wound("kee",kill_hurt/2);
me->add("force",-300);
me->add("bellicosity",-150);
COMBAT_D->report_status(victim);}
if (me->query("bellicosity") > 23000)
{message_vision(HIW"\n\tɱ  ��  �� ������ "HIR"�� ն  �� �� "HIW"!!\n"NOR,me);
victim->receive_wound("kee",kill_hurt);
me->add("force",-400);
me->add("bellicosity",-200);
COMBAT_D->report_status(victim);
COMBAT_D->report_status(victim);}
message_vision(HIB"\n��ʽ����, ���������һƬ�Ⱥ�Ѫ�� !!\n"NOR,me);
me->do_command("hehe");
}
if (me->query("class") != "killer")
return action[0];
if (limit < 2 )
return action[random(2)+1];
if (limit == 2 )
return action[random(3)+1];
if (limit == 3 )
return action[random(4)+1];
if (limit == 4 )
return action[random(5)+1];
if (limit == 5 )
return action[random(6)+1];
if (limit == 6 )
return action[random(7)+1];
if (limit == 7 )
return action[random(8)+1];
if (limit == 8 )
return action[random(9)+1];
if (limit > 8 && limit < 10)
return action[random(5)+5];
else
return action[random(4)+7];
}
void berserk(object me, object victim, object  weapon, int damage)
{
int i;
if(!me->query_temp("berserk" ))
{
me->set_temp("berserk", 1);
for(i = 0;i < 10; i++)
{
message_vision(HIC"����....ɱɱ!!!��\n"NOR, me, victim);
victim->add("kee",0);
me->add("force",0);
COMBAT_D->report_status(victim);
}
me->delete_temp("berserk");
message_vision(HIW"������ϡ�\n"NOR,me);
}
}
void killall(object me, object victim, object  weapon, int damage)
{
int i,hurt,j=0;
object *enemy;
me = this_player();
enemy = me->query_enemy();
i=sizeof(enemy);
hurt=me->query("PKS");
message_vision(HIW"ֻ��$N�ڵ����п���, ��Ѫ�Ĵ��ɽ���!!\n"NOR,me);
for (j=0 ; j < i ; j++)
{
if (random(100) > 20)
{
message_vision(HIR"$N���㲻��, ����������, ��Ѫ����!!\n"NOR,enemy[j]);
enemy[j]->receive_wound("kee",hurt);
COMBAT_D->report_status(enemy[j]);
}
else
{
message_vision(YEL"$N����һ��, �㿪����������һ��!!\n"NOR,enemy[j]);
}
}
} 
