#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void movedown(object me, object victim, object weapon, int damage);
void sp_att3(object me, object victim, object  weapon, int damage);
void dragon(object me, object victim, object weapon, int damage);
void suck(object me, object victim, object weapon, int damage);
void sp_att1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int i;
mapping *action = ({
//1
       ([    "action" :
"$N������ϣ�����һת��ʹ��"HIR"��һέ�ɽ���"NOR"������$w��ֱ�߰���$nֱ�̹�ȥ��",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       110,
             "force"  :       160,
             "damage_type": "����",
        ]),
//2
       ([    "action" :
"$N������$w��һ��"HIR"����ɽ���ơ�"NOR"�ķ����𣬽����۰ԣ�ֱѹ�ķ���",
             "dodge" :   -10,
             "parry" :   -30,
             "damage" :  120,
             "force"  :  160,
             "damage_type" :   "����",
         ]),
//3
        ([   "action" :
"$N����Ԫ������������ע$w��һ��"HIY"��ȽȽ�糾��"NOR"���翴�ƺ쳾��ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         130,
             "force"  :         160,
             "damage_type":  "����",
        ]),
//4
        ([   "action" :
"$N����$w�����ƿ죬һ��"HIY"�����Ǵ��¡�"NOR"����ͦ��ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         140,
             "force"  :         160,
             "damage_type":  "����",
        ]),
//5
        ([   "action" :
"$Nһ��"HIG"��Ϊɽǧ��"NOR"����$w���ķ���������γ�һƬ�����������ķ���",
             "dodge"  :        -10,
             "parry"  :        -30,
             "damage" :        150,
             "force"  :        160,
             "damage_type":  "����",
        ]),
//6
        ([   "action" :
"$N�Ӷ�����$wʹ��"HIG"������ʯת��"NOR"ֻ������ת�в�ת��ת��$wֱ��Ҫ����",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       160,
             "force"  :       160,
             "damage_type":  "����",
        ]),
//7
        ([   "action" :
"$Nʹ��"HIM"���߲�������"NOR"��ֻ��$w������������$n���������ߵ��˺ۡ�",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         170,
             "force"  :         160,
             "damage_type":  "����",
        ]),
//8

        ([      "action":
"$N��$wһ�ʹ��"HIM"����Ц��"NOR"��������������������޾�������$n��",
                "dodge":  -10,
                "parry":  -30,
                "damage": 180,
                "force":  160,
                "damage_type":  "����",
        ]),
//9
        ([      "action":
"$Nʹ����Ħ�ھ�ʽ��"HIB"���ຣ���ġ���ͷ�ǰ���"NOR"������һ����ʽ����$w���ɴ������Է�����",
                "dodge":        -10,
                "parry":        -30,
                "damage":       190,
                "force":        160,
                "post_action":  (: sp_att3 :),
                "damage_type":  "����",
        ]),
//10
       ([      "action" :
"$Nʹ����Ħ��ʮʽ��"HIB"����˼���ǡ�ˮ�����ɡ�"NOR"������$w�̺��ޱȵ��ھ�ֱ��$n��",
               "dodge":         -10,
               "parry":         -30,
               "damage":        200,
               "force":         160,
               "post_action":  (: movedown :),
               "damage_type":   "����",
        ]),
//11
       ([      "action" :
"$N�ۼ�$n����������$wһ�ᣬʹ��"HIC"����ħ��ȥ����"NOR"ֻ��\n"
"$n��Ҳ���ǵ�Ҳ���ǣ�ֻ����ǰɨ��һ����ȴ���˼���������",
                "dodge" :       -10,
                "parry" :       -30,
                "damage":       220,
                "force" :       160,
                "post_action":  (: suck :),
                "damage_type":  "��������",
        ]),
//12
       ([ "action" :
"$Nʹ����Ħ����ʽ������$wһ��һ����ʹ��"HIC"�������ɡ���������"NOR"�̼�\n"
"$N���α�����Σ��˽���һ�����Ǽ䣬ʱ�ն���һ���û���Ӱ�ѳ��$n���⣡",
"dodge": -10,
"parry": -30,
"force": 160,
"post_action": (: dragon :),
"damage": 220,
"damage_type": "���֮��",
]),

});
mapping query_action(object me, object weapon)
{
int skill, limit, f;
skill=(int)(me->query_skill("damon-sword", 1));
limit=(int)(skill/10);
f=me->query("bellicosity",1);
if((f>=2000&&f<=7000||me->query("id")=="swy")&&limit==10)
{
return action[random(4)+8];
}
if(limit<2)
{
return action[random(2)];
}
if(limit<3)
{
return action[random(3)];
}
if(limit<4)
{
return action[random(4)];
}
if(limit<5)
{
return action[random(5)];
}
if(limit<6)
{
return action[random(6)];
}
if(limit<7)
{
return action[random(7)];
}
if(limit<8)
{
return action[random(8)];
}
if(limit<9)
{
return action[random(9)];
}
if(limit<10)
{
return action[random(10)];
}
else
{
return action[random(12)];
}
}
void suck(object me, object victim, object weapon, int damage)
{
damage = 4*(str+cor)+cps+kar+spi+int1;
if(me->query("force",1)<100) return;
if(70>=random(100)&&me->query("force_factor",1)>=10)
  {
message_vision(sprintf(HIW"\n$N���׽�ھ�������$n���У�����ʴ��$n����������\n"NOR),me,victim);
     victim->receive_damage("kee",damage,me);
     victim->apply_condition("hurt",5);
     COMBAT_D->report_status(victim, 1);
     me->add("force",-80);
  }else
message_vision(sprintf("���$N���ھ���$nѹ��ס�ˡ�\n"),me,victim);
}
void movedown(object me, object victim, object weapon, int damage)
{
int i;
if(me->query("force",1)<100) return;
if(70>=random(100)&&me->query("force_factor",1)>=5&&!me->query_temp("att"))
{
message_vision(sprintf(HIW"\n$N�ھ����£�������������$n�񹥹�ȥ��\n"NOR),me,victim);
  me->set_temp("att",1);
  for(i=1;i<=3;i++)
  {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
  me->add("force",-70);   
} else
message_vision(sprintf("$N��Ϣ�¾����ٶ��������С�\n"),me,victim);
me->delete_temp("att");
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force")<2000)
        return notify_fail("���������������������Ħ������\n");
        if((string)me->query_skill_mapped("force")!= "monforce")
        return notify_fail("��Ħ�����������Ħ���ķ������á�\n");
 if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="sword")
        return notify_fail("������н�������������\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/damon-sword/" + action;
}
void dragon(object me, object victim, object weapon, int damage)
{
if(me->query("force",1)<300) return;
if(80>=random(100)&&me->query("force_factor",1)>=10&&!me->query_temp("conti"))
{
string acti;
mapping do_action;
object *enemy,weaponn;
int i,j,force,bell,dak,das,dag;
force=me->query("force",1);
enemy=me->query_enemy();
i=random(sizeof(enemy));
bell=me->query("bellicosity",1);
message_vision(sprintf(HIW"\n$N�����׾��ķ����˽���һ�������ʹ����Ħ������\n"NOR),me,enemy[i]);
me->set_temp("conti",1);
for(j=0; j < 12; j++) {
do_action=action[j];
acti = "\n";
acti += do_action["action"];
if(weaponn=me->query_temp("weapon") )
acti=replace_string(acti, "$w", weaponn->name());
message_vision(acti, me, enemy[i]);
if(random(me->query("combat_exp"))>random(enemy[i]->query("combat_exp"))/10)
{
message_vision(HIR"\n$N���㲻�������϶�ʱ����һ��Ѫ���߰ߵĽ��ۡ�\n"NOR,enemy[i]);
dak=enemy[i]->query("max_kee",1)/20;
if(dak > 150) dak=150;
das=enemy[i]->query("max_sen",1)/30;
if(das > 100) das=100;
dag=enemy[i]->query("max_gin",1)/30;
if(dag > 100) dag=100;
enemy[i]->receive_wound("gin",dag,me);
enemy[i]->receive_wound("kee",dak,me);
enemy[i]->receive_wound("sen",das,me);
me->add("force",-20);
COMBAT_D->report_status(enemy[i],1);
}
else message_vision("\n$N�Ͻ��������һ�ܣ����յؼܿ�����һ���С�\n" , enemy[i]);
}
if(random(me->query("cps")) < 7 )
{
message_vision("\n$Nһ��ʩչ���Ħʮ��ʽ����ʱ��Ѫ����ֻ�þ͵�����������\n",me);
me->start_busy(1);
}
}
me->delete_temp("conti");
}

void sp_att3(object me, object victim, object  weapon, int damage)
{
int sk_lv;
damage = 4*(kar+int1)+2*str+cor+cps+spi;
sk_lv = (int)(me->query_skill("damon-sword",1));
if(sk_lv>=80&&70>=random(100)&&me->query("force",1)>70)
{
message_vision(sprintf(HIW"
$NͻȻ����"HIR"���м����ޡ��޼����С�"HIW"�ĵ�����ȴһ����ʽ�����޲��У����޻���"NOR),me,victim);
message_vision(sprintf(HIW"
$N���ű��У�˳�ŵз�����Ϣ���������в��У�һ˲��$n�����ٳ��������ش��ˡ�\n\n"NOR),me,victim);
         victim->receive_damage("kee",damage,me);
         victim->start_busy(random(2)+1);
         victim->apply_condition("blade",2);
         COMBAT_D->report_status(victim,1);
         me->add("force",-50);
}
}
