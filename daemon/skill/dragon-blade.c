// ���ڼ��� killup ���Ը�����ҲҪ�� by swy
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
"$N������ϣ�����һת��ʹ��"HIW"������ն"NOR"֮"HIR"��������ն��"NOR"������$w��$n������ȥ��",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       200,
             "force"  :       200,
             "damage_type": "����",
        ]),
//2
       ([    "action" :
"$N������$w��һ��"HIW"������ն"NOR"֮"HIR"����ɽ���֡�"NOR"�����۰ԣ�ֱ��$n��",
             "dodge" :   -10,
             "parry" :   -30,
             "damage" :  200,
             "force"  :  200,
             "damage_type" :   "����",
         ]),
//3
        ([   "action" :
"$N����Ԫ������������ע$w��һ��"HIW"������ն"NOR"֮"HIG"������Х�족"NOR"ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         200,
             "force"  :         200,
             "damage_type":  "����",
        ]),
//4
        ([   "action" :
"$N����$w������һ��"HIW"������ն"NOR"֮"HIG"��ҹ��һ�桱"NOR"����ͦ��ֱ��$n��",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         250,
             "force"  :         250,
             "damage_type":  "����",
        ]),
//5
        ([   "action" :
"$Nһ��"HIW"������ն"NOR"֮"HIY"����پ��ᡱ"NOR"����$w���һƬ����������$n��",
             "dodge"  :        -10,
             "parry"  :        -30,
             "damage" :        250,
             "force"  :        250,
             "damage_type":  "����",
        ]),
//6
        ([   "action" :
"$N�Ӷ����е��У�ʹ��"HIW"������ն"NOR"֮"HIB"��һ�ֵ�����"NOR"ֻ��$w��һ�����磬ֱ�����¡�",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       250,
             "force"  :       250,
             "damage_type":  "����",
        ]),
//7
        ([   "action" :
"$Nʹ��"HIW"������ն"NOR"֮"HIM"���뵶��ն��"NOR"��ֻ��$w���ѩ��׷����¡�",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         300,
             "force"  :         300,
             "damage_type":  "����",
        ]),
//8

        ([      "action":
"$N��$wһ�ʹ��"HIW"������ն"NOR"֮"HIC"�������лڡ�"NOR"���������������$n��",
                "dodge":  -10,
                "parry":  -30,
                "damage": 300,
                "force":  300,
                "damage_type":  "����",
        ]),
//9
        ([      "action":
"$Nʹ��������ɱ����"HIM"��������ء�"HIY"�����졫�����޵ء������������֡�\n"NOR
"����$w������ת�����ܰ룬���ư��硣",
                "dodge":        -10,
                "parry":        -30,
                "damage":       300,
                "force":        300,
                "post_action":  (: sp_att3 :),
                "damage_type":  "����",
        ]),
//10
       ([      "action" :
"$Nʹ�������������"HIM"��ħ����ն��"HIY"�����졫������ء�����Ѫ���׷ɡ�\n"NOR
"����$w���˿����趯��֯��һ��������",
               "dodge":         -10,
               "parry":         -30,
               "damage":        350,
               "force":         350,
               "post_action":  (: movedown :),
               "damage_type":   "����",
        ]),
//11
       ([      "action" :
"$NͻȻ�����񣬿��д󺰣�"HIM"������������ħ����������������ɴ󷨡�"NOR"ֻ��$N\n"
"��$wָ��$n���˿ڣ������ȡ$n����Ѫ��",
                "dodge" :       -10,
                "parry" :       -30,
                "damage":       350,
                "force" :       350,
                "post_action":  (: suck :),
                "damage_type":  "����",
        ]),
//12
       ([ "action" :
"$N�ۼ�����֮����ʹ��[35m����ն��Ԫ��а��նԪ��[0m\n"
"[1;32m������[1;37m��"HIY"ħ"HIC"��"HIY"��"HIC"Ѫ"HIW"����"HIR"��"HIW"��"HIB"а"HIC"��"HIW"��[1;32m������[0m\n"
"$n���֮�ڣ�ֻ��$N��$w���ڵ��ϣ��������䣬˲ʱ����\��\n"
"����������ʡ�",
"dodge": -10,
"parry": -30,
"force": 400,
"post_action": (: dragon :),
"damage": 400,
"damage_type": "����",
]),
//13
([ "action" :
"$N���þŵ�֮����ʹ��[35m����ն��Ԫ��������Ԫ��[0m\n"
"[1;32m������[1;37m��"HIY"��"HIC"��"HIY"��"HIC"�"HIW"����"HIY"��"HIM"�"HIG"��"HIR"��"HIW"��[1;32m������[0m\n"
"�����������ڶ������Ǽ䣬��$w�ܳ��Ų�����˲ʱ������Χ��������֮������",
"dodge": -10,
"parry": -30,
"force": 400,
"post_action": (: sp_att1 :),
"damage": 400,
"damage_type": "����",
]),
//14
([ "action" :
"$Nʩչ����֮����ʹ��[35m����ն��Ԫ��ѩӰ��Ԫ��[0m\n"
"[1;32m������[1;37m��"HIY"��"HIC"��"HIY"ŭ"HIC"��"HIW"����"HIC"ѩ"HIM"Ӱ"HIB"��"HIC"˪"HIW"��[1;32m������[0m\n"
"$N������Ԫ���ֳ�$w����һ�ӣ���ʱ��ɽҡ�ض������Ʊ�ɫ����������\n"
"�ļ�����ת������ͻȻ��Ʈ������ѩ�ʡ�",
"dodge": -10,
"parry": -30,
"force": 400,
"post_action": (: sp_att2 :),
"damage": 400,
"damage_type": "����",
]),
});
mapping query_action(object me, object weapon)
{
int skill, limit, f;
object victim;
skill=(int)(me->query_skill("dragon-blade", 1));
limit=(int)(skill/10);
f=random(6);
victim=offensive_target(me);
if(random(100)>=70&&me->query("combat_exp")>200000 && victim) {
message_vision(HIW+@LONG

                    ���~��                        ���~��
                      ���~��========================���~��
========================���~��========================���~��
==========================�~�~==========================�~�~
========================���~��========================���~��
                      ���~��========================���~��
                    ���~��                        ���~��

LONG +NOR,me);
message_vision(HIY"$N���һ������˫�����������۰Թᴩ$n������\n"NOR,me,victim);
victim->receive_wound("kee",300,me);
COMBAT_D->report_status(victim);
}
if((me->query("family/family_name")=="ħ����"||me->query("family/family_name")=="ħ��Ī��")&&
me->query("m_blade")&&me->query("env/get_mblade")&&me->query("combat_exp")>3000000)
{
if(limit=12)
{
if(me->query_temp("mblade")==1) {
return action[13];
}
if(me->query_temp("mblade2")==1) {
return action[12];
}
if(me->query_temp("mblade3")==1) {
return action[11];
}
if((int)me->query("force")>2000)
{
if(f>3) return action[random(3)+11];
return action[random(3)+8];
}
if((int)me->query("force")>1500)
{
if(f>3) return action[random(2)+11];
return action[random(3)+8];
}
if((int)me->query("force")>1000)
{
if(f>3) return action[random(1)+11];
return action[random(3)+8];
}
}
}
if(limit<4)
{
return action[random(3)];
}
if(limit<5)
{
return action[random(4)];
}
if(limit<6)
{
return action[random(5)];
}
if(limit<7)
{
return action[random(6)];
}
if(limit<8)
{
return action[random(7)];
}
if(limit<9)
{
return action[random(9)];
}
if(limit<10)
{
return action[random(10)];
}
if(limit<11)
{
return action[random(10)];
}
if(limit<12)
{
return action[random(11)];
}
else
{
return action[random(11)];
}
}
void suck(object me, object victim, object weapon, int damage)
{
if(70>=random(100)&&me->query("force_factor",1)>=10&&me->query_temp("conti")==0
   && me->query("bellicosity")>11)
  {
     victim->receive_wound("kee",400,me);
     me->receive_curing("kee",400);
     me->receive_heal("kee",400);
     me->add("bellicosity",-10);
     victim->apply_condition("blade",3);
     COMBAT_D->report_status(victim);
     me->add("force",-70);
  } else
message_vision(sprintf("���$N��������$n�ƽ⡣\n"),me,victim);
}
void movedown(object me, object victim, object weapon, int damage)
{
int i,bell;
bell=me->query("bellicosity",1)/300;
if(bell < 1) bell=1;
if(bell > 6) bell=6;
if(70>=random(100)&&me->query("force_factor",1)>=5&&me->query_temp("conti")==0
   && me->query("env/ħ����ն")&& me->query("bellicosity")>11)
{
  for(i=1;i<=bell;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$Nʹ��ħ����ն֮"HIR"���졯"NOR"�����е���ն��$n�����š�\n"),me,victim);
     break;
     case 2: 
message_vision(sprintf("$Nʹ��ħ����ն֮"HIG"���ݡ�"NOR"�����е���ն��$n��������\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("$Nʹ��ħ����ն֮"HIY"��׼��"NOR"�����е���ն��$n���۾���\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("$Nʹ��ħ����ն֮"HIM"���ա�"NOR"�����е���ն��$n������\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("$Nʹ��ħ����ն֮"HIB"���ơ�"NOR"�����е���ն��$n�����ס�\n"),me,victim);
     break;
     case 6: 
message_vision(sprintf("$Nʹ��ħ����ն֮"HIC"����"NOR"�����е���ն��$n�ľ��ӡ�\n"),me,victim);
     break;
     }
message_vision(sprintf(HIW"$Nȷʵ����$nҪ����$n��ʱѪ�����ء�\n"NOR),me,victim);
          victim->receive_wound("kee",140,me);
          COMBAT_D->report_status(victim);
   }
if(!me->query_temp("six-hurt")) {
   me->start_busy(1);
}
   me->add("force",-70);
   me->add("bellicosity",-10);
   victim->apply_condition("blade",3);
} else
message_vision(sprintf("���$N��ħ�Բ���ʹ��������\n"),me,victim);
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force")<100)
        return notify_fail("�����������������������������\n");
        if((string)me->query_skill_mapped("force")!= "powerforce")
        return notify_fail("��������������������񹦲����á�\n");
 if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
        return notify_fail("������е�������������\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="blade" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("blademan") + "/dragon-blade/" + action;
}
void dragon(object me, object victim, object weapon, int damage)
{
if(me->query_temp("mblade3")==1) {
me->set_temp("mblade3",0); }
if(me->query("bellicosity")<21) return;
if(me->query("env/а������")) {
if(weapon->query("id")=="shi-blade" || (weapon->query("id")=="evil-mblade" &&
weapon->query("mblade-mark")))
{
string acti;
mapping do_action;
object enemy,weaponn;
int j,force,bell,dak,das,dag;
force=me->query("force",1);
enemy=offensive_target(me);
bell=me->query("bellicosity",1);
if(bell>=9000&&force>700&&me->query_temp("conti")==0)
{
message_vision(sprintf(HIM"
$N������ն��Ԫ����ֻ��$N�����˳����������ٵ���$n����������\n"NOR),me,enemy);
me->set_temp("conti",1);
for(j=0; j < 14; j++) {
do_action=action[j];
acti = "\n";
acti += do_action["action"];
if(weaponn=me->query_temp("weapon") )
acti=replace_string(acti, "$w", weaponn->name());
message_vision(acti, me, enemy);
if(random(me->query("combat_exp"))>random(enemy->query("combat_exp"))/10) {
message_vision(HIR"\n$N���㲻�������϶�ʱ����һ���˼����ǵĵ��ۡ�\n"NOR,enemy);
dak=enemy->query("max_kee")/30;
if(dak > 160) dak=160;
das=enemy->query("max_sen")/30;
if(das > 100) das=100;
dag=enemy->query("max_gin")/30;
if(dag > 100) dag=100;
enemy->receive_wound("gin",dag,me);
enemy->receive_wound("kee",dak,me);
enemy->receive_wound("sen",das,me);
me->add("force",-20);
COMBAT_D->report_status(enemy);
}
else message_vision("\n$N�˹�һԾ�����յ���������һ���С�\n" , enemy);
}
if(random(me->query("cps")) < 6 )
{
message_vision("\n$N����ɱ��ӿ���������Ծ�����ֻ���ͷ�Щ��\n",me);
me->start_busy(1);
me->add("bellicosity",-20);
}
me->delete_temp("conti");
}
} else {
int sp_1=4*(cps+kar)+str+cor+spi+int1;
int bell=me->query("bellicosity")/500;
if(bell < 1) bell=1;
if(bell > 8) bell=8;
for(i=1;i<=bell;i++)
{
message_vision(HIW"������У�����������������ʩչ����������\n"NOR,me,victim);
switch(i)
{
case 1:
message_vision(sprintf("$Nʹ����һʽ��"HIC"������ն"NOR"��ն��$n��\n"),me,victim);
break;
case 2:
message_vision(sprintf("$Nʹ���ڶ�ʽ��"HIC"��ɽ����"NOR"��ն��$n��\n"),me,victim);
break;
case 3:
message_vision(sprintf("$Nʹ������ʽ��"HIC"����Х��"NOR"��ն��$n��\n"),me,victim);
break;
case 4:
message_vision(sprintf("$Nʹ������ʽ��"HIC"ҹ��һ��"NOR"��ն��$n��\n"),me,victim);
break;
case 5:
message_vision(sprintf("$Nʹ������ʽ��"HIC"��پ���"NOR"��ն��$n��\n"),me,victim);
break;
case 6:
message_vision(sprintf("$Nʹ������ʽ��"HIC"һ�ֵ���"NOR"��ն��$n��\n"),me,victim);
break;
case 7:
message_vision(sprintf("$Nʹ������ʽ��"HIC"�뵶��ն"NOR"��ն��$n��\n"),me,victim);
break;
case 8:
message_vision(sprintf("$Nʹ���ڰ�ʽ��"HIC"�����л�"NOR"��ն��$n��\n"),me,victim);
break;
}
victim->receive_wound("kee",sp_1/2,me);
message_vision(sprintf(HIR"$n¶��������������ֱնҪ������Ѫֱ����\n"NOR),me,victim);
COMBAT_D->report_status(victim);
}
me->add("force",-50);
me->add("bellicosity",-20);
me->start_busy(1);
}
}
victim->apply_condition("blade",5);
}

void sp_att1(object me, object victim, object weapon, int damage)
{
int sp_2 = 4*(str+cor)+cps+kar+spi+int1;
if(me->query_temp("mblade2")==1) {
me->set_temp("mblade2",0);
me->set_temp("mblade3",1); }
if(me->query("bellicosity")<21) return;
if(weapon->query("id")=="ublade" || (weapon->query("id")=="evil-mblade" &&
weapon->query("mblade-mark")))
{
message_vision(HIY"���������춾�������ڵ������Ǽ����е���ɢ�������˺����������ķ���\n"NOR,me,victim);
message_vision(sprintf(HIB"$n��ɫ���ڣ��ƺ����˾綾��\n"NOR),me,victim);
         victim->receive_wound("kee",sp_2*2,me);
         victim->apply_condition("blade",7);
         victim->apply_condition("u-stial",7);
         victim->start_busy(1);
         COMBAT_D->report_status(victim);
         me->add("force",-120);
}
       else
{
if(me->query_temp("conti")==0) {
message_vision(HIY"�������ڵ�����ʹ��Ԫ��ֻ�����ڿշɳ���ֱ��$n�����š�\n"NOR,me,victim);
          victim->receive_wound("kee",sp_2,me);
          victim->apply_condition("blade",7);
          COMBAT_D->report_status(victim);
          me->add("force",-60);
 }
 }
 me->add("bellicosity",-20);
 }
void sp_att2(object me, object victim, object weapon, int damage)
{
int sp_3 = 4*(kar+int1)+2*str+cor+cps+spi;
if(me->query_temp("mblade")==1) {
me->set_temp("mblade",0);
me->set_temp("mblade2",1); }
if(me->query("bellicosity")<21) return;
if(weapon->query("id")=="iceblade" || (weapon->query("id")=="evil-mblade" &&
weapon->query("mblade-mark")))
{
message_vision(HIC"���е��У��������ޣ���֯����ѩ�ʣ�ֻ��$n�������С�\n"NOR,me,victim);
    victim->start_busy(1);
    victim->receive_wound("kee",sp_3*2,me);
    victim->apply_condition("blade",9);
    COMBAT_D->report_status(victim);
    me->add("force",-150);
}
    else
{
if(me->query_temp("conti")==0) {
message_vision(HIC"����ѩ�ʣ�ֻ��$n����ʧ�꣬�ѱ��������ˡ�\n"NOR,me,victim);
    victim->receive_wound("kee",sp_3,me);
    victim->apply_condition("blade",9);
    COMBAT_D->report_status(victim);
    me->add("force",-75);
} }
me->add("bellicosity",-20);
}
void sp_att3(object me, object victim, object  weapon, int damage)
{
int sk_lv;
sk_lv = me->query_skill("dragon-blade",1);
if(sk_lv>=105&&me->query_temp("conti")==0&&me->query("bellicosity")>11
&&70>=random(100)&&me->query("force",1)>70&&me->query("have_book",1))
{
message_vision(sprintf(HIR"
ͻȻ$N��¶�������ŭ�𣬿�����Ԫ����ʹ��ħ��ʧ��֮����"HIW"��¬ɽ����һ���ۡ�\n"NOR),me,victim);
message_vision(sprintf(HIB"$N���ŵ��У�˳���ļ�����ת����$n���������ꡯ����ҹ��"+
"����硯����ѩ��\n"HIY"$n����ɿ�Ե�������ס��һ˲��$n��������������ǵ��ĵ��˺�\n\n"NOR),me,victim);
         victim->receive_wound("kee",400,me);
         victim->start_busy(1);
         victim->apply_condition("blade",3);
         COMBAT_D->report_status(victim);
         me->add("force",-50);
         me->add("bellicosity",-10);
}
}
