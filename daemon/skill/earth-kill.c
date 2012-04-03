#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void earthkill(object me,object victim,object weapon,int damage);
void killall(object me,object victim,object weapon,int damage);
void heartkill(object me,object victim,object weapon,int damage);
void threekill(object me,object victim,object weapon,int damage);
void skykill(object me,object victim,object weapon,int damage);
void bloodkill(object me,object victim,object weapon,int damage);
void burn(object me,object victim,object weapon,int damage);
void cold(object me,object victim,object weapon,int damage);

mapping *action = ({
(["action":"$N�������������޷�ʹ�á�",
"dodge":0,
"parry":0,
"damage":0,
"damage_type":  "����"
]),
(["action":HIW"$N�����������նʮʽ��һʽ���м���"HIR"��  ��"HIW"��, ����һ��, ���б����Ѿ�Ϯ��$n���㡣"NOR,
"dodge":                 -40,
"parry":                 -40,
"damage":                100,
"force":                 100,
"damage_type":  "����"
]),
(["action":HIW"$N�����������նʮʽ�ڶ�ʽ���м���"HIR"ɽ  �"HIW"��, �Ƚ��Ĺ����Ƶ�$n��æ���ҡ�"NOR,
"dodge":                -40,
"parry":                -40,
"damage":               110,
"force":                110,
"damage_type":  "����"
]),
(["action":HIW"$N�����������նʮʽ����ʽ���м���"HIR"��  ��"HIW"��, ֻ��$NѸ�ٵ��Ƶ�$n���׼������������һ����"NOR,
"dodge":                -50,
"parry":                -50,
"damage":               120,
"force":                120,
"post_action":               (: cold :),
"damage_type":  "����"
]),
(["action":HIW"$N�����������նʮʽ����ʽ���м���"HIR"��  Ϯ"HIW"��, ���б�������������$n��"NOR,
"dodge":                -50,
"parry":                -50,
"damage":               130,
"post_action":               (: burn :),
"damage_type":  "����"
]),
(["action":HIW"$N�����������նʮʽ����ʽ���м���"HIR"Ѫ  ɱ"HIW"��, $n��������Ѫ����Ĵ�Ʈɢ��"NOR,
"dodge":                -60,
"parry":                -60,
"damage":               145,
"force":                145,
"post_action":               (: bloodkill :),
"damage_type":  "����"
]),
(["action":HIW"$N���һζ�, ����ɢ������, ��Ӱ��Ȼ��ʧ�ڿ���֮��, ʹ��������������֮��"HIR"��  ��  ��"HIW"����"NOR,
"dodge":                -60,
"parry":                -60,
"damage":               150,
"force":                150,
"post_action":               (: skykill :),
"damage_type":  "����"
]),
(["action":HIW"$Nʹ�������������նʮʽ����ʽ���м���"HIR"��  ��  ն"HIW"��, ��������, �Ĵ���Ѫ�ɽ���"NOR,
"dodge":                -60,
"parry":                -60,
"damage":               200,
"force":                200,
"post_action":               (: threekill :),
"damage_type":  "����"
]),
(["action":HIW"$N����ȫ��ɱ��, һ�С�"HIR"��  ��  ��"HIW"�������˵İ�������$n��"NOR,
"dodge":                -70,
"parry":                -70,
"damage":               200,
"force":                200,
"post_action":               (: heartkill :),
"damage_type":   "����"
]),
(["action":HIW"$Nʹ����ն���塮"HIR"��  ��  ��"HIW"��, �ڼ��̵�ʱ���ڳ���$n�������������͹���"NOR,
"dodge":               -70,
"parry":               -70,
"damage":              200,
"force":               200,
"post_action":               (: earthkill :),
"damage_type":               "����"
]),        
(["action":HIW"$N����Ȱ��Ѹ���ƶ�����, ֻ������һ��, һ�С�"HIR"˲  ɱ  ��  ��"HIW"����������������"NOR,
"parry":             -70,
"dodge":             -70,
"damage":            250,
"force":             250,
"post_action":               (: killall :),
"damage_type":   "����"
]),
});
int valid_enable(string usage)
{
return usage=="dagger" || usage=="parry";
}

mapping query_action(object me, object weapon, object victim, object *enemy,object room)
{
int skill_level, limit, i, j=0,kill_hurt;
skill_level=(int)me->query_skill("earth-kill", 1);
limit=(int)(skill_level/10);
enemy=me->query_enemy();
i=sizeof(enemy);
victim=enemy[random(i)];
kill_hurt=(me->query("earth-kill/killsword/exp"));
if (kill_hurt > 1500) kill_hurt=1500;
if (me->query_skill("earth-kill",1) > 90 && random(me->query("functions/manakee/level")) > 120
    && me->query_temp("earthkill")!=1)
{message_vision(HIG"
                       �� ��  "HIR"�� �� ��  "HIG"�� ��
                  "YEL"��"HIB" �� �� �� �� ֮ �� �� �� ն "YEL"��

               "HIM"�� �B �� �� �� �� ��"HIW" ����"HIY"�� "HIC"��    �� "HIY"��
                        
               "GRN"�� �B �� �� �� �� ��"HIW" ����"HIY"��"YEL" ��    ն "HIY"��

"HIW"$N˫����ͬʱʩչ, ��ʽ���籩������Ϯ$n��\n"NOR,me,victim);
victim->receive_wound("kee",me->query_skill("force"));
victim->start_busy(1);
COMBAT_D->report_status(victim);
}
if (skill_level > 90 && random(100)>65 && me->query("bellicosity") > me->query("force")
    && me->query("bellicosity") > 8000 && me->query_temp("earthkill")!=1
    && me->query("quest/be_pker")==1 && me->query("force") > 1000)
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
me->do_command("haha");
}
if (random(15000)< (me->query("cor")+me->query("cps"))+me->query("quest/add_bak")+me->query("earth-kill/bak/exp"))
{
message_vision(HIY"\n$N����$n���ݵ����, ����$n�����ı���!!\n\n"NOR,me,victim);
if (victim->query("max_kee")/2 > 100000)
{
room=environment(me);
tell_object(users(),HIW"һ��ǿ��������"+room->query("short")+"����!!!!\n"NOR);
}
victim->receive_wound("kee",victim->query("max_kee")/2);
COMBAT_D->report_status(victim);
}
if (me->query("earth-kill/twoblade/exp") > 0 && me->query_temp("left_blade")==1
    && me->query_temp("right_blade")==1)
{
message_vision(HIW"\n$Nʹ��������˫�ֶ��м�֮��"HIR"˫  ��"HIW"��, ֻ��$NѸ�ٵĳ���$n�����͹���\n"NOR,me,victim);
if (random(100)>20)
{message_vision(NOR"����ճɷǳ����صĴ��ˡ�\n"NOR,me);
victim->receive_wound("kee",me->query("earth-kill/twoblade/exp"));
COMBAT_D->report_status(victim);}
else
{message_vision(NOR"���Ǳ�$N���ˡ�\n"NOR,victim);}
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
return action[random(7)+2];
if (limit == 9 )
return action[random(7)+3];
else
return action[random(6)+5];
}
void earthkill(object me, object victim, object  weapon, int damage)
{
int cor,j=0;
cor=me->query("cor");
if (random(me->query("functions/manakee/level")) > 55-cor && me->query_temp("earthkill")!=1 
    && me->query("bellicosity") > 3000)
{
me->set_temp("earthkill",1);
for(j = 0;j < 5; j++)
{
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
COMBAT_D->report_status(victim);
}
me->delete_temp("earthkill");
}
}
void killall(object me, object victim, object  weapon, int damage)
{
int i,hurt,j=0;
object *enemy;
enemy=me->query_enemy();
i=sizeof(enemy);
hurt=me->query("PKS")+600;
if (hurt > 1500) hurt=1500;
if (random(me->query("functions/manakee/level")) > 40 && me->query_temp("earthkill")!=1)
{
message_vision(HIW"ֻ��$N�ڵ����п���, ��Ѫ�Ĵ��ɽ���!!\n"NOR,me);
for (j=0 ; j < i ; j++)
{
if (random(100) > 20)
{
message_vision(HIR"$N���㲻��, ����������, ��Ѫ����!!\n"NOR,enemy[j]);
enemy[j]->receive_wound("kee",hurt);
me->add("force",-400);
COMBAT_D->report_status(enemy[j]);
}
else
{
message_vision(YEL"$N����һ��, �㿪����������һ��!!\n"NOR,enemy[j]);
}}}}

void heartkill(object me, object victim, object  weapon, int damage)
{
int hurt;
me=this_player();
hurt=me->query("bellicosity")/25;
if (hurt > 800) hurt = 800;
if (random(me->query("functions/manakee/level")) > 80 && me->query_temp("earthkill")!=1 && me->query("force") > 500
    && me->query("bellicosity") > 500 )
{
message_vision(HIC"$N��$nɢ������ǿ����Ϣ����ס, ȫ���޷�����!!\n"NOR,victim,me);
victim->receive_damage("kee",hurt);
me->add("force",-300);
if (random(100) > 20 ) victim->start_busy(1);
me->add("bellicosity",-40);
}
}

void skykill(object me, object victim,object weapon,object *enemy)
{
int hurt;
me=this_player();
enemy=me->query_enemy();
hurt=me->query("bellicosity")/20;
if (hurt > 800) hurt = 800;
if (random(me->query("functions/manakee/level")) > 40 && me->query_temp("earthkill")!=1 && me->query("bellicosity")> 600)
{
message_vision(YEL"��"HIB"�٨B���B���B�ߨB�ԨB��B�ШB�ڨBǰ"YEL"��"HIW"����$N����Ĭ��������������!!\n"NOR,me);
message_vision(HIY"$N�ı�����Ȼ����������������$nֱ����ȥ, ֻ��$n���ܲ���, ��$N�ĵ������С�!!\n"NOR,me,victim);
victim->receive_wound("kee",hurt);
me->add("bellicosity",-30);
me->add("force",-200);
COMBAT_D->report_status(victim);
}}
void threekill(object me, object victim, object  weapon,object *enemy)
{
int i,hurt,k,j=0;
me=this_player();
enemy=me->query_enemy();
i=sizeof(enemy);
hurt=me->query("bellicosity")/25;
if (hurt > 250) hurt = 250;
if (random(me->query("functions/manakee/level")) > 50 && me->query_temp("earthkill")!=1 && me->query("bellicosity")> 600)
{
for (j=0 ; j < 3; j++)
{
message_vision(HIG"$N������Ϣ���Ƶ�$n���, �䲻������$n�������һ��!!\n"NOR,me,victim);
victim->receive_wound("kee",hurt);
me->add("bellicosity",-20);
me->add("force",-50);
COMBAT_D->report_status(victim);
}
}}
void bloodkill(object me, object victim, object  weapon,object *enemy)
{
int str,cor,intt,spi,cps,per,con,kar,hurt;
me=this_player();
str=me->query("str");
cps=me->query("cps");
per=me->query("per");
con=me->query("con");
kar=me->query("kar");
intt=me->query("int");
cor=me->query("cor");
spi=me->query("spi");
hurt=(str+cor+intt+spi+cps+per+con+kar)*3;
if (random(me->query("functions/manakee/level")) > 40 && me->query_temp("earthkill")!=1 && me->query("bellicosity")> 600)
{
message_vision(HIR"$N��ȡ����Ʈɢ����Ѫ, ��Ѫ����Ϊ����!!\n"NOR,me);
victim->receive_wound("kee",hurt);
me->receive_curing("kee",hurt);
me->receive_heal("kee",hurt);
me->add("bellicosity",-150);
me->add("force",-200);
COMBAT_D->report_status(victim);
}}
void burn(object me, object victim, object  weapon,object *enemy)
{
int hurt;
me=this_player();
hurt=me->query("functions/manakee/level")*3;
if (random(me->query("functions/manakee/level")) > 50 && me->query_temp("earthkill")!=1 && me->query("bellicosity")> 600)
{
message_vision(HIR"��$Nɱ�⼤���������׾�������Ϯ$n!!\n"NOR,me,victim);
victim->receive_wound("kee",hurt);
victim->apply_condition("burn",10);
me->add("bellicosity",-25);
me->add("force",-100);
COMBAT_D->report_status(victim);
}}
void cold(object me, object victim, object  weapon,object *enemy)
{
int hurt;
me=this_player();
hurt=me->query("functions/manakee/level")*3;
if (random(me->query("functions/manakee/level")) > 50 && me->query_temp("earthkill")!=1 && me->query("bellicosity")> 600)
{
message_vision(HIC"��$Nɱ�⼤�������ĺ���������Ϯ$n!!\n"NOR,me,victim);
victim->receive_wound("kee",hurt);
victim->apply_condition("cold",10);
me->add("bellicosity",-25);
me->add("force",-100);
COMBAT_D->report_status(victim);
}}
string perform_action_file(string action)
{
return CLASS_D("killer")+"/earth-kill/"+action;
}
int valid_learn(object me)
{
tell_object(me,"��ն�޷���ѧϰ�л�ý�չ, �����Լ����з��гɹ�!!\n");
return 0;
}
