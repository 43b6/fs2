// lungshan.c
// Chan 15/5����������
// Chan 10/22���¸�д
// 1.���������ع� 2.����������
// Swy QC 87/10/22  δ����������޸�
#include <combat.h>
#include <ansi.h>
inherit SKILL;
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
// ���� damage and force ����Ϊ 190
mapping *action = ({
// 1
([
     "action"     :"$Nʹ����ɽ��ѧ������ʽ��һ��[1m��������ɽ��[0m����׼$n��$l�������׽����һȭ",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 30,
     "force"      : 50,
     "damage_type":"����"
 ]),
// 2
 ([
     "action"     :"$N�ͺ�һ��!!������˫�����ͳ���ʹ��һ��[1m���������¡�[0m����׼$n��$l���Ķ���",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 25,
     "force"      : 50,
     "damage_type":"����"
 ]),
// 3
 ([
     "action"     :"$N������ˮ����$n�Ĺ��ƣ�ʹ��һ��[1m��׷����Դ��[0m����$n��$l������ȥ",
     "dodge"      :-50,
     "parry"      :-10,
     "damage"     : 20,
     "force"      : 80,
     "damage_type":"����"
 ]),
// 4
 ([
     "action"     :"$N���һ����˫ȭһ�ᣬһ��[1m���������족[0m��$n�����Ҫ������",
     "dodge"      :-10,
     "parry"      :-25,
     "damage"     : 70,
     "force"      : 100,
     "damage_type":"����"
 ]),
// 5
 ([
     "action"     :"$N����һ�������������˫ȭ����ʹ��[1m��ǧ��������[0m����$n$l",
     "dodge"      :-30,
     "parry"      :-5,
     "damage"     : 90,
     "force"      : 190,
     "damage_type":"����"
 ]),
// 6
 ([
     "action"     :"$N����һԾ��ʹ����ɽȭ����[36m��ɽȪȺӿ��[0m��ȭ�������һ����ʮȭ����$n$l",
     "dodge"      :-30,
     "parry"      :-30,
     "damage"     : 110,
     "force"      : 150,
     "damage_type":"����"
 ]),
// 7
 ([
     "action"     :"$N˫ȭ��������������ʹ����ɽȭ����[1;36m��ɽ��ˮ����[0m�����֮������$n$l�������м�",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 130,
     "force"      : 140,
     "damage_type":"����"
 ]),
// 8
 ([
     "action"     :"$N˫���硸��ˮ���������ᡢ����գ�ʹ����ɽȭ�а���[1;32m��������Ϣ��[0m���������ް���$n$l����",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 135,
     "force"      : 140,
     "post_action":(: berserk1 :),
     "damage_type":"����"
 ]),
// 9
 ([
     "action"     :"$Nһȭ���ա�һȭ���ᣬʹ����ɽȭ����[1;36m��ɽ����ˮ��[0m�����Ტ�õ�һ����$n$l��ȥ���޷�����",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 145,
     "force"      : 160,
     "damage_type":"����"
 ]),
// 10
 ([
     "action"     :"$Nȭɢ��������ʱ�����������������$N����ӿ����ʹ����ɽȭ�ذ���[1;32m��ɽ�Ӿ���[0m��$n$l���ܿ���֮��������",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 150,
     "force"      : 150,
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
      "damage"    :   160,
      "force"     :   150,
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
     "damage"     :  170,
     "force"      :  190,
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
     "damage"     :  180,
     "force"      :  180,
     "post_action":(: fire3 :),
     "damage_type":"����",

     ]),
// 14
 ([
     "action"     :"$N������ɽȭ��֮---[1;5;36mǧɽ��ˮ�����಻��[0m---������ѧ����ɽȭ�����಻�����ʹ�ó���!!\n",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 50,
     "force"      : 50,
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
 int skill_level, limit ,test,f,k,i;
 object victim ,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 skill_level = (int)(me->query_skill("lungshan", 1));
 limit= (int)(skill_level/10);
 f = random(10);
 k = random(100);             //���������ع��Ĳ���.������Ϊ15%,�۵���kee 210
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //���Լ�force 200
if(me->query("family/family_name")=="��ɽ��"&&weapon->query("id")=="carzy dragon")
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
victim->add("kee",-70);
victim->apply_condition("burn",random(10));
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
       if((int)me->query("force") > 1000)
        {
         if (f< 1)
         return action[13];
         return action[random(5)+8];
        }
       if((int)me->query("force") > 750)
        {
         if (f< 1)
         return action[13];
         return action[random(5)+7];
        }
       if((int)me->query("force") > 500)
        {
         if (f< 1)
         return action[13];
         return action[random(5)+6];
        }
      }
    }
  }
    if (limit < 5 )
            return action[random(5)];
    if (limit < 6 )
    {
       return action[random(5)+1];
    }
    if (limit < 7 )
    {
       return action[random(5)+2];
    }
    if (limit < 8 )
    {
       return action[random(5)+3];
    }
    else if (limit < 9)
            {
         if (f< 1)
                return action[13];
                return action[random(5)+4];
            }
    else
    {
         if (f< 1)
       return action[13];
       return action[random(5)+5];
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
      victim->add("kee",-sp_value/2);
      me->add("force",-80);
      victim->apply_condition("burn",random(10)+((int)me->query_skill("haoforce", 1)/10));
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
message_vision(HIW"$N������������$n���γ�������У�ʹ$n�޷�����\n"NOR,me,victim);    
      victim->add("kee",-sp_value/2);
      victim->start_busy(1);
      me->add("force",-100);
      victim->apply_condition("burn",random(15)+((int)me->query_skill("haoforce", 1)/10));
      COMBAT_D->report_status(victim, 1);
}
}

void fire3(object me, object victim, object  weapon, int damage)
 {
     int skill_level;
skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level > 100)
{
     sp_value =4*(cor+int1)+3*str+spi+cps+kar;
message_vision(HIW"$n��$N������������������������в���˺�ѿ���\n"NOR,me,victim);     
        victim->add("kee",-sp_value/2);
        me->add("force",-170);
     victim->apply_condition("burn",random(10)+((int)me->query_skill("haoforce", 1)/10));
     COMBAT_D->report_status(victim, 1);
}
}

void berserk(object me, object victim, object  weapon, int damage)
{ //�������Ĳ���,�ֳɶ���.kee >1500(ָmob),kee<1600ָplayer
int bovalue,sklv,ko,bound=10,i,vdodge;//�۵�keeԼ����(mob��player�ȵĻ�)
vdodge=victim->query_skill("dodge",1);
if(vdodge>140)
 vdodge=140;
 sklv=(int)me->query_skill("lungshan",1)/10;
// �����ж� ��Ȼ���ܻ���100% ֻҪhaoforce�߾Ϳ��� By Swy
 ko=(int)me->query_skill("lungshan",1);
 ko=ko+((int)me->query_skill("unarmed",1)+(int)me->query_skill("fire-kee",1))/2;
//�������ĳ�,�ɹ���Լ50% ʮ��ȫ�п�kee 500,mob�Ļ�Լ1000ȫ�еĻ�
 for(i=0;i<sklv;i++)
 {
  switch(i) {
case 0:
 message_vision("$Nʹ����ɽ��ѧ������ʽ,[1m��������ɽ��[0m����׼$n��Ҫ���������׽����һȭ\n",me,victim);
break;
case 1:
 message_vision("$N�ͺ�һ��!!������˫�����ͳ���ʹ��һ��[1m���������¡�[0m����׼$nѨλ���Ķ���\n ",me,victim);
break;
case 2:
 message_vision("$N˫�ּ�תʹ����ɽ��ѧ֮[1m��׷����Դ��[0m���ٵ���$n������λ����\n ",me,victim);
break;
case 3:
 message_vision("$N���һ����˫ȭһ�ᣬһ��[1m���������족[0m��$n�����Ҫ������\n ",me,victim);
break;
case 4:
 message_vision("$N����һ�������������˫ȭ����ʹ��[1m��ǧ��������[0m����$nȫ��Ҫ��\n",me,victim);
break;
case 5:
 message_vision("$N����һԾ��ʹ����ɽȭ����[36m��ɽȪȺӿ��[0m��ȭ�������һ����ʮȭ����$n��Ҫ��\n ",me,victim);
break;
case 6:
 message_vision("$N˫ȭ��������������ʹ����ɽȭ����[1;36m��ɽ��ˮ����[0m�����֮������$nʹ$n�����м�\n",me,victim);
break;
case 7:
 message_vision("$N˫���硸��ˮ���������ᡢ����գ�ʹ����ɽȭ�а���[1;32m��������Ϣ��[0m��˫���������ް���$n���� ",me,victim);
break;
case 8:
 message_vision("$Nһȭ���ա�һȭ���ᣬʹ����ɽȭ����[1;36m��ɽ����ˮ��[0m�����Ტ�õ�һ����$n��ȥ���޷����� ",me,victim);
break;
case 9:
 message_vision("$Nȭɢ��������ʱ�����������������$N����ӿ����ʹ����ɽȭ�ذ���[1;32m��ɽ�Ӿ���[0m��$n���ܿ���֮�������� ",me,victim);
break;}
// ����Լ 50% By Swy 
if(random(ko)>vdodge-30){
message_vision(HIY"$n��$N�����쳣����ɽȭ������,$n���ϱ�����������ӡ��\n"NOR,me,victim);
bovalue=(int)victim->query("kee");
//mob�۶���,player��һ��
if(bovalue>1600) victim->add("kee",-bound);
        victim->add("kee",-bound);
        COMBAT_D->report_status(victim, 1);
        bound=bound+10;
  }
else{
message_vision(HIW"$n��ǧ��һ��֮�ʿ���$N��ɽȭ��������,�о����յض��˿�����\n"NOR, me, victim);
        bound=bound+10;
  }
 }
message_vision(HIR"$Nʹ�����಻����,ȫ��������\��,ʹ$N���ò��Ͻ�������Ϣ��\n"NOR,me);
    me->start_busy(1);
    me->add("force",-bound);
    COMBAT_D->report_status(victim, 1);
}

void berserk1(object me, object victim, object  weapon, int damage)
{
int skill_level;
skill_level = (int)(me->query_skill("lungshan", 1));
// ����Լ 50%
if(((skill_level+random(150)) > 160) && (me->query("super_fire",1)))
{
message_vision(HIC"$n����ɽȭ�������̺���ɽ����ˮ֮��Ϣ���֣�ʹ$n��ʧ��ɽˮ֮��\n"NOR,me,victim);
      victim->start_busy(1);
      me->add("force",-40);
      COMBAT_D->report_status(victim, 1);
}
}

void berserk2(object me, object victim, object  weapon, int damage)
{
int skill_level1,skill_level2;
skill_level1 = (int)(me->query_skill("lungshan", 1));
// haoforce ���� so ���� By Swy
skill_level2 = (int)(me->query_skill("haoforce", 1));
if(skill_level2 > 100) skill_level2=100;
// ���� 50% By Swy
if(((skill_level1+skill_level2+random(200)) > 285) &&
  ((string)me->query_skill_mapped("force") == "haoforce") &&
  (me->query("super_fire",1))&&(me->query("force")>200))
{
message_vision
( HIR"$N��ɫһ��,ȫ��ɢ�������ޱȵ�����,˫�������а�ʹ����ɽ��ѧ֮���ϼ�!!!\n\n"HIY
     "      ��"HIW"�𡫺����١���  "HIB"�����Ρ��ڡ�ӿ"HIY"�����\n"HIR
"ԴԴ���ϵ�������������˰�,һ����һ�����$n����ȥ,$n����Χ������֮��
$nֻ���޴��������������ȫ�����޷�����,�о��������ϵ�����ʧ֮��\n"NOR
      ,me,victim);
      victim->add("kee",-200);
      victim->add("force",-300);
victim->apply_condition("burn",random(10) +((int)me->query_skill("haoforce",1)/10));
     // delay �� condition 5 �� By Swy
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
