// ����fs�Ľ������� lungshan ����ϼ� by swy
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me,object victim,object weapon,int damage);
void berserk1(object me,object victim,object weapon,int damage);
void berserk2(object me,object victim,object weapon,int damage);
void fire1(object me, object victim, object  weapon, int damage);
void fire2(object me, object victim, object  weapon, int damage);
void fire3(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;
// ���� damage and force ����Ϊ 500
mapping *action = ({
// 1
([
     "action"     :"$Nʹ����ɽ��ѧ������ʽ��һ��[1m��������ɽ��[0m����׼$n��$l�������׽����һȭ",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 50,
     "force"      : 50,
     "damage_type":"����"
 ]),
// 2
 ([
     "action"     :"$N�ͺ�һ��!!������˫�����ͳ���ʹ��һ��[1m���������¡�[0m����׼$n��$l���Ķ���",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 100,
     "force"      : 100,
     "damage_type":"����"
 ]),
// 3
 ([
     "action"     :"$N������ˮ����$n�Ĺ��ƣ�ʹ��һ��[1m��׷����Դ��[0m����$n��$l������ȥ",
     "dodge"      :-50,
     "parry"      :-10,
     "damage"     : 150,
     "force"      : 150,
     "damage_type":"����"
 ]),
// 4
 ([
     "action"     :"$N���һ����˫ȭһ�ᣬһ��[1m���������족[0m��$n�����Ҫ������",
     "dodge"      :-10,
     "parry"      :-25,
     "damage"     : 200,
     "force"      : 200,
     "damage_type":"����"
 ]),
// 5
 ([
     "action"     :"$N����һ�������������˫ȭ����ʹ��[1m��ǧ��������[0m����$n$l",
     "dodge"      :-30,
     "parry"      :-5,
     "damage"     : 250,
     "force"      : 250,
     "damage_type":"����"
 ]),
// 6
 ([
     "action"     :"$N����һԾ��ʹ����ɽȭ����[36m��ɽȪȺӿ��[0m��ȭ�������һ����ʮȭ����$n$l",
     "dodge"      :-30,
     "parry"      :-30,
     "damage"     : 300,
     "force"      : 300,
     "damage_type":"����"
 ]),
// 7
 ([
     "action"     :"$N˫ȭ��������������ʹ����ɽȭ����[1;36m��ɽ��ˮ����[0m�����֮������$n$l�������м�",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 350,
     "force"      : 350,
     "damage_type":"����"
 ]),
// 8
 ([
     "action"     :"$N˫���硸��ˮ���������ᡢ����գ�ʹ����ɽȭ�а���[1;32m��������Ϣ��[0m���������ް���$n$l����",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 400,
     "force"      : 400,
     "post_action":(: berserk1 :),
     "damage_type":"����"
 ]),
// 9
 ([
     "action"     :"$Nһȭ���ա�һȭ���ᣬʹ����ɽȭ����[1;36m��ɽ����ˮ��[0m�����Ტ�õ�һ����$n$l��ȥ���޷�����",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 400,
     "force"      : 400,
     "damage_type":"����"
 ]),
// 10
 ([
     "action"     :"$Nȭɢ��������ʱ�����������������$N����ӿ����ʹ����ɽȭ�ذ���[1;32m��ɽ�Ӿ���[0m��$n$l���ܿ���֮��������",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 400,
     "force"      : 400,
     "post_action":(: berserk2 :),
     "damage_type":"����"
 ]),
// 11
 ([  "action"     :             "$Nʹ���������Ƶ�һʽ\n"
                         "--"HIR"�������ƿա�"NOR"--\n"
             HIW"$N������������������ָ�ϣ���ʱ��ָ����˿˿������\n"
                "$N�о������ϵĺ�������Խ��Խ�ߣ�ʮֻ��ָ����ҫ�۵Ĺ�â\n"
                "$N�ͺ�һ����ʮ�������������������$n\n"NOR,
      "dodge"     :   80,
      "parry"     :   50,
      "damage"    :   500,
      "force"     :   500,
      "post_action":  (: fire1 :),
      "damage_type":  "����",
     ]),
// 12
 ([   "action"     :                 "$Nʹ���������Ƶڶ�ʽ\n"
                         "--"HIR"���������졯"NOR"--\n"
             HIW"$N���˺����������������������ƣ�˲ʱ˫��ͨ��\n"
                "$N���еĺ����������ˮ������Ϲ������������²���\n"
                "$N��˫����ǰһ�ƣ������������������˰�Ϯ��$n\n"NOR,
     "dodge"      :  80,
     "parry"      :  50,
     "damage"     :  500,
     "force"      :  500,
     "post_action":(: fire2 :),
     "damage_type":"����",

      ]),
// 13
  ([ "action"     :               "$Nʹ�����������ռ�����\n"
                         "--"HIR"��������ء�"NOR"--\n"
             HIW"$NԾ������н�����������ɢ��������������\n"
                "$N���һ��Ю����������������׹�ذ��׹����\n"
                "���������Ӱ�����������γ�������Χ��$n\n"NOR,

     "dodge"      :  80,
     "parry"      :  50,
     "damage"     :  500,
     "force"      :  500,
     "post_action":(: fire3 :),
     "damage_type":"����",

     ]),
// 14
 ([
     "action"     :"$N������ɽȭ��֮---[1;5;36mǧɽ��ˮ�����಻��[0m---������ѧ����ɽȭ�����಻�����ʹ�ó���!!\n",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 200,
     "force"      : 200,
     "post_action":(: berserk :),
     "damage_type":"����"
 ]),

});

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
        return   notify_fail("ѧ��ɽ��ѧ������֡�\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" );
}

mapping query_action(object me, object  weapon)
{
 int skill_level, limit ,f,k,i,j,l,m,a;
 object victim ,*enemy,room,*all;
 enemy = me->query_enemy();
 i=sizeof(enemy);
victim=offensive_target(me);
if(!victim) return action[random(5)];
 room = environment(me);
 all = all_inventory(room);
 m=sizeof(all);
 skill_level = (int)(me->query_skill("lungshan", 1));
 limit= (int)(skill_level/10);
 f = random(10);
 k = random(100);
if(me->query("combat_exp")>1500000) {
if(!me->is_busy() && userp(me) && 20>random(100) && me->query("family/family_name")=="��ɽ��") {
for(a=0;a<i;a++) {
if(!enemy[a]) continue;
if(enemy[a]->query("family/family_name")!="ѩ����") continue;
enemy[a]->set_temp("is_enemy",1);
}
for(j=0;j<m;j++) {
if(!userp(all[j])) continue;
if(!all[j]->is_fighting()) continue;
if(all[j]->query_temp("is_enemy")) continue;
if(all[j]->query_temp("use-two-power")) continue;
if(all[j]->query("family/family_name")!="ѩ����") continue;
for(l=0;l<10;l++) {
message_vision(HIW"ֻ��"+me->query("name")+"��"+all[j]->query("name")+"���֣�����ɽ����ѩ���ɵľ�ѧ�ں�һ�£�ʹ����"HIC"����"HIR"�һ�"HIB"��"HIW"����$N�񹥶�ȥ��\n"NOR,victim);
victim->receive_damage("kee",500);
COMBAT_D->report_status(victim);
}
m=0;
all[j]->set_temp("use-two-power",1);
me->start_busy(1);
all[j]->start_busy(1);
victim->start_busy(1);
}}}
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //���Լ�force 200
if(me->query("family/family_name")=="��ɽ��"&&weapon->query("id")=="crazy dragon")
  {
if((k>85)&&(skill_level>90)&&(me->query_skill_mapped("force")=="haoforce"))
{
message_vision(HIW"$N���ϵ�"HIY"����������"HIW"��$N�ĺ�����������,�û���һ���޴����!!\n"NOR,me,victim);
message_vision(HIR+@LONG

                             /           /
                            /' .,,,,  ./
                           /';'     ,/
                          / /   ,,//,`'`
                         ( ,, '_,  ,,,' ``
                         |    /@  ,,, ;  `
                        /    .   ,' /' `,``
                       /   .     ./, `,, ` ;
                    ,./  .   ,-,',` ,,/''\,'
                    |   /; ./,,'`,,'' |   |
                    |     /   ','    /    |
                     \___/'   '     |     |
                       `,,'  |      /     `\
                            /      |        ~\
                           '       (
                           :
                          ; .         \--\----

LONG+NOR,me);
 for(i=0;i<3;i++)
 {
message_vision(HIR"���͵Ļ�����$n��������Ȼ���,˲ʱ$n����������Χ,ȫ��ʹ�಻����\n"NOR,me,victim);
victim->receive_damage("kee",100);
victim->apply_condition("burn",random(10)+1);
COMBAT_D->report_status(victim, 1);
  }
message_vision(HIW"$N���ϵ�"HIY"����������"HIW"��һ���׹�,������ʧ�ڰ׹�֮���ˡ�\n"NOR,me);
me->add("force",-200);
}
}
}
 if(me->query("family/family_name")=="��ɽ��"&& me->query("fire_strike",1))
  {
    if( (string)me->query_skill_mapped("force") == "haoforce")
    {
    if (limit = 10)
      {
       if((int)me->query("force") > 3000)
        {
if(f<2)
         return action[12];
return action[random(10)+4];
        }
       if((int)me->query("force") > 2000)
        {
if(f<2)
         return action[11];
return action[random(10)+4];
        }
       if((int)me->query("force") > 1000)
        {
if(f<2)
         return action[10];
return action[random(10)+4];
        }
      }
    }
  }
    if (limit < 5 )
            return action[random(5)];
    if (limit < 6 )
    {
       return action[random(6)];
    }
    if (limit < 7 )
    {
       return action[random(6)+1];
    }
    if (limit < 8 )
    {
       return action[random(6)+2];
    }
    else if (limit < 9)
            {
if(f<2)
                return action[13];
                return action[random(6)+3];
            }
    else
    {
if(f<2)
       return action[13];
       return action[random(6)+4];
    }
}

void fire1(object me, object victim, object  weapon, int damage)
{
int skill_level;
skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level > 80)
{
      sp_value =4*(cps+kar)+str+cor+spi+int1;
      message_vision(HIW"��ʮ������������$n�����Ҵܲ��񱬿���\n"NOR,me,victim);
      victim->receive_damage("kee",(100+2*sp_value));
      me->add("force",-100);
      victim->apply_condition("burn",random(10)+1);
      COMBAT_D->report_status(victim, 1);
}
}

void fire2(object me, object victim, object  weapon, int damage)
{
    int skill_level;
    skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level > 90)
{
    int i;
    sp_value =4*(str+cor)+cps+2*kar+spi+int1;
    message_vision(HIW"$N������������$n���γ�������У�ʹ$n�����ܴ�\n"NOR,me,victim);
      victim->receive_damage("kee",(150+2*sp_value));
      me->add("force",-150);
      victim->apply_condition("burn",random(15)+1);
      COMBAT_D->report_status(victim, 1);
}
}

void fire3(object me, object victim, object  weapon, int damage)
 {
     int skill_level;
skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level >= 100)
{
     sp_value =4*(cor+int1)+3*str+spi+cps+kar;
     message_vision(HIW"$n��$N������������������������в���˺�ѿ���\n"NOR,me,victim);
      victim->receive_damage("kee",(200+2*sp_value));
      me->add("force",-200);
     victim->apply_condition("burn",random(20)+1);
     COMBAT_D->report_status(victim, 1);
}
}

void berserk(object me, object victim, object  weapon, int damage)
{
int bovalue,sklv,ko,bound=50,i;
sklv=(int)me->query_skill("lungshan",1)/10;
if((me->query("id")=="cgy"||me->query("id")=="master jen")||(60>random(100)&&me->query("env/��ɽ����")&&me->query("family/family_name")=="��ɽ��")) {
 for(i=0;i<sklv;i++)
 {
  switch(i) {
case 0:
 message_vision("$Nʹ����ɽȭ����һ��"HIC"��������ɽ��"NOR"���������»���$n��\n",me,victim);
break;
case 1:
 message_vision("$Nʹ����ɽȭ���ڶ���"HIC"���������¡�"NOR"���������»���$n��\n ",me,victim);
break;
case 2:
 message_vision("$Nʹ����ɽȭ��������"HIC"��׷����Դ��"NOR"���������»���$n��\n ",me,victim);
break;
case 3:
 message_vision("$Nʹ����ɽȭ��������"HIC"���������족"NOR"���������»���$n��\n ",me,victim);
break;
case 4:
 message_vision("$Nʹ����ɽȭ��������"HIC"��ǧ��������"NOR"���������»���$n��\n",me,victim);
break;
case 5:
 message_vision("$Nʹ����ɽȭ��������"HIC"��ɽȪȺӿ��"NOR"���������»���$n��\n ",me,victim);
break;
case 6:
 message_vision("$Nʹ����ɽȭ��������"HIC"��ɽ��ˮ����"NOR"���������»���$n��\n",me,victim);
break;
case 7:
 message_vision("$Nʹ����ɽȭ���ڰ���"HIC"��������Ϣ��"NOR"���������»���$n��\n",me,victim);
break;
case 8:
 message_vision("$Nʹ����ɽȭ���ھ���"HIC"��ɽ����ˮ��"NOR"���������»���$n��\n",me,victim);
break;
case 9:
 message_vision("$Nʹ����ɽȭ����ʮ��"HIC"��ɽ�Ӿ���"NOR"���������»���$n��\n",me,victim);
break;
}
// ����ȫ���� By Swy
message_vision(HIY"$N�����쳣����ɽȭ������$n��������������ӡ��\n"NOR,me,victim);
        victim->receive_damage("kee",bound);
        COMBAT_D->report_status(victim, 1);
        bound=bound+10;
 }
// ȡ������ busy by swy
/*
message_vision(HIR"$Nʹ�����಻����ȫ��������\�ߣ����ò��Ͻ�������Ϣ��\n"NOR,me);
if(me->query("del_delay") != 1) {
    me->start_busy(1);
}
*/
    me->add("force",-bound);
    COMBAT_D->report_status(victim, 1);
}
}

void berserk1(object me, object victim, object  weapon, int damage)
{
// ��������� by swy
if(60>random(100) && me->query("super_fire",1))
{
message_vision(HIC"$n����ɽȭ�������̺���ɽ����ˮ֮��Ϣ���֣�ʹ$n����һ����Ѫ��\n"NOR,me,victim);
      victim->receive_damage("kee",350);
      me->add("force",-50);
      COMBAT_D->report_status(victim, 1);
}
}

void berserk2(object me, object victim, object  weapon, int damage)
{
// ��������� by swy
if(60>random(100) &&
  ((string)me->query_skill_mapped("force") == "haoforce") &&
  (me->query("super_fire",1))&&(me->query("force")>200))
{
message_vision
( HIR"$N��ɫһ��,ȫ��ɢ�������ޱȵ�����,˫�������а�ʹ����ɽ��ѧ֮���ϼ�!!!\n\n"HIY
     "      ��"HIW"�𡫺����١���  "HIB"�����Ρ��ڡ�ӿ"HIY"�����\n"HIR
"ԴԴ���ϵ�������������˰�,һ����һ�����$n����ȥ,$n����Χ������֮��
$nֻ���޴��������������ȫ�����޷�����,�о��������ϵ�����ʧ֮��\n"NOR
      ,me,victim);
      victim->receive_damage("kee",500);
      victim->add("force",-200);
victim->apply_condition("burn",random(15)+1);
victim->apply_condition("hart",random(10)+1);
      me->add("force",-200);
      COMBAT_D->report_status(victim, 1);
}
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query("force") < 3 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query_skill("literate") <= ( (int)(me->query_skill("lungshan", 1)*0.75) ) )
                return notify_fail("�����ѧ֪ʶ���㣬�ƺ��޷���͸��ѧ��ɽˮ֮�塣");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("fighter")+"/lungshan/"+action;
}
