//������ѧ v1.00 by Santo
//����������ʽ by Dico 1999,6,18

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack1(object me, object victim, object weapon, int damage);
void attack2(object me, object victim, object weapon, int damage);
void attack3(object me, object victim, object weapon, int damage);
void again1(object me, object victim, object weapon, int damage);


mapping *action = ({
//0
(["action":"$N����΢�����ұ����䣬���ƻ��˸�ԲȦ�����֡�"+HIY"�����л�"NOR+"��������һ��������ȥ��
�ƾ�ֱֱ��ɨ��$n��$l��",
"dodge":-60,
"parry":50,
"force":60,
"damage":325,
"damage_type" : "����",
]),
//1
(["action":"$N����������˫��һ�ţ����岻ס��Ծ��˫���絶�Ƽ���һ�С�"+HIY"��������"NOR+"����������
$n��$l��ȥ��",
"dodge":-60,
"parry":50,
"force":70,
"damage":330,
"damage_type" : "����",
]),
//2
(["action":"$N�����������ڣ���������ٵذ㣬��"+HIY"ս����Ұ"NOR+"����һ������������$n���Ʋ��ɵ���",
"dodge":-90,
"parry":80,
"force":100,
"damage":335,
"damage_type" : "����",
]),
//3
(["action":"$N��������ʳ����ָ����ȭ���ƣ���$n��$l��ȥ����"+HIY"Ǳ������"NOR+"�����������������
ͬʱ���ﹳ�ã������󹳣��������ܡ�",
"dodge":-90,
"parry":80,
"force":100,
"damage":340,
"damage_type" : "����",
]),
//4
(["action":"$N����һ�������Ƹ���һ�գ��������ƣ���"+HIY"�����"NOR+"�����ƴ󿪴��أ��ƾ���͸������
��$n������ȥ��",
"dodge":-90,
"parry":80,
"force":100,
"damage":345,
"damage_type" : "����",
]),
//5
(["action":"$N˫��һ�ᣬ˫������������֮һ�£���"+HIY"�轥��½"NOR+"����������������ƽƽ������$n��",
"dodge":-90,
"parry":80,
"force":100,
"damage":350,
"damage_type" : "����",
]),
//6
(["action":"$N���λ����ƶ���ٿ�ؼ�˫��˳��һ�ƣ���"+HIY"ͻ������"NOR+"�����籩���������ƾ�������
Ϯ��$n��",
"dodge":-100,
"parry":80,
"force":100,
"damage":355,
"damage_type" : "����",
]),
//7
(["action":"$N���ƴ󿪴��أ�������������������䣬��ʽ������������$n��ȥ����"+HIY"�𾪰���"NOR+"����
���װ㾪�ˡ�",
"dodge":-100,
"parry":80,
"force":100,
"damage":360,
"damage_type" : "����",
]),
//8
(["action":"$N˲ʱ��һ����������ǰ̽������ٿ�ش����Ƶ��´��˳�ȥ��ǿ�С�"+HIY"��Ծ��Ԩ"NOR+"��ֱ��
��$n��$l��",
"dodge":-100,
"parry":80,
"force":110,
"damage":365,
"damage_type" : "����",
]),
//9
(["action":"$N�����ͻ���դ�����С�"+HIY"������\β"NOR+"����֮�������漴����һ��������$n��$l��",
"dodge":-100,
"parry":90,
"force":110,
"damage":370,
"damage_type" : "����",
]),
//10
(["action":"$N�������أ���ʽ�\��������˫������һ�ϣ���"+HIY"��������"NOR+"����ֱ�Ļ���$n��$l��",
"dodge":-100,
"parry":90,
"force":110,
"damage":375,
"damage_type" : "����",
]),
//11
(["action":"$N˫��ͬʱһ�٣����ű�����ǰһͦ��˫���뷢��һ�С�"+HIY"˫��ȡˮ"NOR+"������$n��",
"dodge":-100,
"parry":90,
"force":110,
"damage":380,
"damage_type" : "����",
]),
//12
(["action":"$N�ƾ�һ�ɣ���͸𤾢������һ����ǣ��$n�ķ���������"+HIY"Ⱥ������"NOR+"��˫������������
�ƾ����Ʈ����$n�ۻ����ҡ�",
"dodge":-100,
"parry":90,
"force":110,
"damage":385,
"damage_type" : "����",
]),
//13
(["action":"$N���β��ϻζ�������$n������ͻȻ�䣬������Ӱͬʱ��Ϯ��������"+HIY"ʱ������"NOR+"����Ⱥ��
���ɣ�������$n��",
"dodge":-100,
"parry":100,
"force":200,
"damage":390,
"damage_type" : "����",
]),
//14
(["action":"$N��Ӱ��סȫ������������$nȴ����$N���ܵ���Ӱ���ˣ����С�"+HIM"���Ʋ���"NOR+"���������
����һ����һ�ƻ���$n��",
"dodge":-110,
"parry":100,
"force":200,
"damage":395,
"damage_type" : "����",
]),
//15
(["action":HIW"                $Nʹ������ʧ����ѧ��һʽ\n"
"             ����"HIG"���������У��ڡ���"HIW"����\n"
"          ��Ϣ����������ͻȻ�������£��ھ�����˫������\n"
"            ���ⱻ"HIG"ϴ�辢"HIW"��������������ⲻ����Ϯ$n��\n"NOR,
"dodge":-110,
"parry":100,
"force":220,
"damage":400,
"damage_type" : "����",
"post_action" : (: attack1 :),
]),
//16
(["action":HIW"                $Nʹ������ʧ����ѧ�ڶ�ʽ\n"
"             ����"HIC"�����ģ�˪����������\��"HIW"����\n"
"$N��������һ��������������ϴ�辭����"HIR"����֮��"HIW"ת��Ϊ"HIB"����֮��\n"HIW
"   ��������΢̧��������֮������˫�ۣ���ȭ���ƣ�ֱ������\n"
"     �û�������"HIC"����"HIW"�����Ტ�ã�һ��һ���Ĵ���$n��$l��\n"NOR,
"dodge":-120,
"parry":100,
"force":250,
"damage":400,
"damage_type" : "����",
"post_action" : (: attack2 :),
]),
//17
(["action":HIW"                $Nʹ������ʧ����ѧ����ʽ\n"
"             ����"HIM"�����ƣ��򣭴���������"HIW"����\n"
"          $N����ϴ�辭ʮ�ɹ���������������˫�֣�����Ϊ��\n"
"�������ƣ�����"HIY"��â"HIW"����"YEL"Ѹ"HIY"��"BLU"��"HIB"��"HIW"��$n�໥������ȥ�����⽣��ͬʱ����$n��\n"NOR,
"dodge":-150,
"parry":100,
"force":250,
"damage":400,
"damage_type" : "����",
"post_action" : (: attack3 :),
]),
//18
(["action":HIW"$N�����һԾ���˺����ߣ�ȫ���Ĵ����ڵ�"HIY"������"HIW"���ھ��糱��ӿ��ǣ���ķ�����������ð��������̡�\n"
"�������ƣ����û��������Ƽٵ�"HIC"��������"HIW"�����������໥���������$nѪ�����ҡ�\n"
"ֻ��$N��Ȼ������״��ƽ������������"HIB"��������"HIW"��ȴ������ң��з�������֮����\n\n"NOR
"       ��ʱ$N"HIY"����"NOR"���֣����ڽ��������������ʹ���������հ��塣\n"NOR
HIW"            ����"HIR"�� ��  Х  ��  �� ��"HIW"����"NOR,
"dodge":-100,
"parry":100,
"force":150,
"damage":400,
"post_action":  (: again1 :),
"damage_type" : "����",
]),

});


mapping query_action(object me, object *weapon)
{
   int skill;

   skill=me->query_skill("dragonfist", 1);

   if( me->query("family/family_name")!="ؤ��" || !me->query("read_page_1",1)
       || !me->query("read_page_2",1) || !me->query("read_page_3",1)
       || !me->query("read_dragonfist",1) )
   {
    if( skill < 50)
       return action[random(7)];
    else if( skill < 60)
       return action[random(10)];
    else if( skill < 70)
       return action[random(12)];
    else if( skill < 80)
       return action[random(14)];
    else
       return action[random(15)];
   } else {if (random(100) > 80 )
       return action[random(10)+9];
    else 
       return action[random(9)+9];
   }
}
void attack1(object me, object victim, object weapon, int damage)
{
 int att_value,skill;
 skill=me->query_skill("dragonfist", 1);
 att_value = random(2*skill);
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIG"$N˫���̺���ϴ�辢�������׼������$n�ɱ���ȥ��$nӲ��֮��ϴ�辢�Ѵ��������������$n������\n"NOR,me,victim);
   victim->add("force",-att_value);
   COMBAT_D->report_status(victim, 1);
   victim->apply_condition("hart",random(15));
  }
}
void attack2(object me, object victim, object weapon, int damage)
{
 int busy_value,skill;
 skill=me->query_skill("dragonfist", 1);
 busy_value = skill / 50;
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
  {
   message_vision(HIC"��������������������$N�����ڣ��溮ʴ��ʹ$Nһʱ�޷��ж���\n"NOR,victim);
   victim->start_busy( random(busy_value) );
   COMBAT_D->report_status(victim, 1);
   victim->apply_condition("cold",random(15));
  }
}


void attack3(object me, object victim, object weapon, int damage)
{
 int att_value,skill;
 skill=me->query_skill("dragonfist",1);
 att_value=random(2*skill);
 if((me->query_skill_mapped("force")=="siseforce")&&(me->query("force_factor") >= 1 ))
 {
  message_vision(HIM"$N�ͺ�һ���������н�������$n��������ã�����ȥ��$n���޿ɱܣ����⽣�����塣\n"NOR,me,victim);
  victim->add("kee",-att_value);
  COMBAT_D->report_status(victim,1);
  victim->apply_condition("swordkee",random(15));
 }
}

void again1(object me, object victim, object weapon, int damage)
{
 int skilv,maxlv,i,j,mydamage;
 skilv=random(me->query_skill("dragonfist",1));
 maxlv=me->query_skill("dragonfist",1);
 j=skilv/10;
 if(j>9) {j=9;}
 for(i=0;i<=j;i++)
 {
  switch(i)
  {
  case 0:
  message_vision("$N����΢�����ұ����䣬���ƻ��˸�ԲȦ�����֡�"+HIY"�����л�"NOR+"��������һ��������ȥ���ƾ�ֱֱ��ɨ��$n��\n",me,victim);
  break;
  case 1:
  message_vision("$N����������˫��һ�ţ����岻ס��Ծ��˫���絶�Ƽ���һ�С�"+HIY"��������"NOR+"����������$n��֫��ȥ��\n",me,victim);
  break;
  case 2:
  message_vision("$N�����������ڣ���������ٵذ㣬��"+HIY"ս����Ұ"NOR+"����һ������������$n���Ʋ��ɵ���\n",me,victim);
  break;
  case 3:
  message_vision("$N��������ʳ����ָ����ȭ���ƣ���$n��ȥ����"+HIY"Ǳ������"NOR+"�����������������ͬʱ���ﹳ�ã������󹳣��������ܡ�\n",me,victim);
  break;
  case 4:
  message_vision("$N�����ͻ���դ�����С�"+HIY"������\β"NOR+"����֮�������漴����һ��������$n��\n",me,victim);
  break;
  case 5:
  message_vision("$N�������أ���ʽ�\��������˫������һ�ϣ���"+HIY"��������"NOR+"����ֱ�Ļ���$n��\n",me,victim);
  break;
  case 6:
  message_vision("$N˫��ͬʱһ�٣����ű�����ǰһͦ��˫���뷢��һ�С�"+HIY"˫��ȡˮ"NOR+"������$n��\n",me,victim);                                             break;
  case 7:
  message_vision("$N�ƾ�һ�ɣ���͸𤾢������һ����ǣ��$n�ķ���������"+HIY"Ⱥ������"NOR+"��˫�������������ƾ����Ʈ����$n�ۻ����ҡ�\n",me,victim);
  break;
  case 8:
  message_vision("$N���β��ϻζ�������$n������ͻȻ�䣬������Ӱͬʱ��Ϯ��������"+HIY"ʱ������"NOR+"����Ⱥ�����ɣ�������$n��\n",me,victim);
  break;
  }
   if( ((int)victim->query_skill("move",1)
        + random((int)victim->query_skill("dodge",1))*5)
        < skilv+random((int)me->query_skill("dodge",1)*i
        + (int)victim->query_skill("move",1)) )
    {
     message_vision(HIC"$N�ľ���������ӿ��$nһʱ�мܲ�ס����$Nһ�ƺ��У����ۣ���һ���³�һ����Ѫ����\n"NOR,me,victim);
     victim->receive_damage("kee",(skilv*i/10));
     COMBAT_D->report_status(victim,1);
     me->add("force",-(skilv*maxlv/100));
     mydamage = mydamage+(skilv*i)/10;
   } else
   {
    message_vision(HIW"$n����Ӱ�İ�Χ֮�£�����$N�������������Ҷ�Ķ����$N������ɱ��\n"NOR,me,victim);
     me->add("force",-skilv*maxlv/100);
     mydamage = mydamage+(skilv*i)/10;
   }
 }
 if(i>=9)
 {
  message_vision(HIR"$Nʹ����Х���������������ޣ���Ϣ���ң�����������֫��ʹ���Σ����ò��Ͻ�������Ϣ��\n"NOR,me);
        me->start_busy((skilv+maxlv)/50);
        COMBAT_D->report_status(victim,1);
 } else {
 message_vision(HIR"$N����"+chinese_number(i)+"�ƺ�����һɢ����������Ϊ�̣��������������ˣ��³�һ����Ѫ��\n"NOR,me);
 me->start_busy((skilv+maxlv)/100);
 me->receive_damage("kee",mydamage);
 COMBAT_D->report_status(victim,1);
 }
}

int practice_skill(object me)
{
  if ((int) me->query("max_force")<1000)
  return notify_fail("����ѧ֪ʶ���㣬�޷���͸������ѧ�ľ���֮��\n");
}

string perform_action_file(string action)
{
          return CLASS_D("beggar")+"/dragonfist/"+action;
}
int valid_learn(object me)
    {
        if( me->query("max_force") < 1500 ) {
            tell_object(me, "���������Ϊ����, ����Ҫ��һǧ��ٵ㡣\n");
            return 0;
        }
        if(!(me->query("class") == "beggar")) {
            tell_object(me, "ֻ��ؤ����Ӳ���ѧ������ѧ��\n");
            return 0;
        }
        if(!(me->query("beggar/quests 10") == 1 )) {
            tell_object(me, "ؤ�����Ҫ�������ʮ����ѧ��\n");
            return 0;
        }
        if( me->query("str") < 20) {
            tell_object(me, "��ı�����������ѧ������ѧ��\n");
            return 0;
        }
        if( me->query("force") < 500 ) {
            tell_object(me, "��Ŀǰ������������ٵ�, �޷����˾�ѧ��\n");
            return 0;
        }
        if( (me->query("potential") - me->query("learned_points")) < 3 ) {
            tell_object(me, "���Ǳ�ܲ�������, �޷����˾�ѧ��\n");
            return 0;
        }
       if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
       return   notify_fail("ѧ����ʮ���Ʊ�����֡�\n");

        tell_object(me, "ѧ�˾�ѧ���Ǳ�����㡣\n");
        me->add("potential", -3);
        return 1;
}
int valid_enable(string usage)
{        return ( usage=="unarmed" )||(usage=="parry");
}


