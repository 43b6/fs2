// ��Ӱ��ʽ����
//��������
//���������޸Ķ���
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void sp_attack0(object me, object victim, object  weapon, int damage);
void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;
mapping *action = ({
//1
        ([
                "action"     :               BLK"$N�չ�Ϊ�����ճ��ᣬ���еĳ�����ʧ�ںڰ��У����ܽ�â��ʱ��ʧ����������ʹ����Ӱ��ʽ�����¡���˲��$n��ȫ�޷����⣬ֻ���������$n$l"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                330,
                "force"      :                330,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
        ]),
//2
        ([
                "action"     :               BLK"һƬ�谵��ͻ��һ�������ֻ��$N�����ι�ʹ����Ӱ��ʽ�����¡��������Ĵܣ�һ�����Ľ�ѹ���رƽ�$n"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                340,
                "force"      :                340,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "����"
        ]),
//3
        ([
                "action"     :               BLK"$N�����ԾٿȻʹ������Ӱ��ʽ�����¡���������Բ�������ڰ���ֱָ$nü��"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                350,
                "force"      :                350,
                "post_action":                (: sp_attack2 :),
                "damage_type":               "����"
        ]),
//4
        ([
                "action"     :               BLK"$N�����羲���ľ���������Ӱ��ʽ����ȱ�����𲨲�ɱ��������$n������ȥ"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                370,
                "force"      :                370,
                "post_action":                (: sp_attack3 :),
                "damage_type":               "����"
               ]),
//5
        ([
                "action"     :               BLK"����֮����$N����ĳ�������һ����Բ����Ӱ��ʽ�����ҡ���Ӱ�ƿն�����$n����"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                380,
                "force"      :                380,
                "post_action":                (: sp_attack4 :),
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :               BLK"����֮����$N�����г������·ת���¶��ϻ�����Բ��Ӱ����Ӱ��ʽ�����ҡ�����Ӱ�������������¶���ֱ��$n�Ŀ�"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                390,
                "force"      :                390,
                "post_action":                (: sp_attack5 :),
                "damage_type":               "����"
        ]),
//7
         ([     "action"     :               BLK"$N���彣�������У���Ӱ��ʧ�ںڰ��У���Ӱ��ʽ��ʴ��������������ɱ����ֱ��$n"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack6 :),
                "damage_type":               "����",
]),
//8
 (["action":"$N�����ɽ��޷������Ӱ��ʽ���塣",
  "force":10,
  "damage":10,
  "damage_type":"�׳���",
]),
});

int valid_learn(object me)
{
       if(!me->query("quest/moon_sword",1)){
        tell_object(me,"�㻹�����ʸ�����Ӱ��ʽ��\n");
        return 0;
                                               }
       if( !me->query_temp("weapon")){
        tell_object(me,"����Ӱ��ʽ�������ðѽ���\n");
        return 0;
                                     }
       if( (me->query("potential") - me->query("learned_points")) < 5 ) {
        tell_object(me, "���Ǳ�ܲ�����㣬�޷����˽�����\n");
        return 0;
                                                           }
        me->add("potential", -5);
        return   1;
}
int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}
mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;
 skill_level = (int)(me->query_skill("moon_sword",1));
 limit= skill_level;
if(me->query("family/family_name")!="�ɽ���")
return action[7];
        if (limit < 15)
                return action[random(1)];
        else if (limit < 30)
                return action[random(2)];
        else if (limit < 45)
                return action[random(3)];
        else if (limit < 60)
                return action[random(4)];
        else if (limit < 75)
                return action[random(5)];
        else if (limit < 90)
                return action[random(6)];
        else
          return action[random(7)];
}
void sp_attack0(object me, object victim, object  weapon, int damage)
{
  sp_value =5*(str+cor)+cps+kar+spi+int1;
    message_vision(BLK"
��ѹ����������$N������Խ��ǿ�ң���Ӱ��ʽ��������Ӱ��ѹ��$n�޴ӷ���������ȫȫ�ܵ���ѹ�Ŀ��ƣ�˲���ѱ��ڰ���û\n"NOR,me,victim);
   victim->receive_damage("kee",sp_value,me);
 //  COMBAT_D->report_status(victim);
}
void sp_attack1(object me, object victim, object  weapon, int damage)
{
  sp_value =5*(str+cor)+cps+kar+spi+int1;
    message_vision(BLK"
�ܵ���ѹ�Ŀ��ƣ���Ӱ��ʽ�����»�ü�������Ľ����ڿ��в�ͣ�ؾۺ�������ɲ�Ǽ�!!��ر�ɫ������ӿ��һ�������ڿ���֮�����ζ���$n�����龰�����壬˲���ѱ���û�ںڰ���\n"NOR,me,victim);
   victim->receive_damage("kee",sp_value,me);
// COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
void sp_attack2(object me, object victim, object  weapon, int damage)
{
  sp_value =5*(spi+int1)+cps+kar+str+cor;
    message_vision(BLK"
����ͬʱ��$N������һ�����£���Χ��Ϣȫ�����������գ�$N�����··���Ϊһ�����ܵ�һ�з·���ȫֹͣ����Ӱ��ʽ��Բ��ɱ�С�Ѹ���׹�����$n\n"NOR,me,victim);
   victim->receive_damage("kee",sp_value,me);
   victim->set_temp("no_power",1);
   victim->apply_condition("no_power",2);
//   COMBAT_D->report_status(victim);
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
void sp_attack3(object me, object victim, object  weapon, int damage)
{
  sp_value =4*(cps+kar)+str+cor+spi+int1;
    message_vision(BLK"
$N�ھ���תʹ����Ӱ����֮�У�˲ʱ��һ�ɺ����������ԣ�ֻ�����ϱ�������óɱ�����$N��ʹ���죬������ӿ����˲ʱѹ��������ʱ����ˮ�������仯��ǧ��$n˲��ֲ��彣�ںη�, ���ڳ���֮�ʣ�$Nһʽ������Ӱȱ����������ˮ��ֱ��$n�Ŀ�\n"NOR,me,victim);

    victim->receive_damage("kee",sp_value,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);}
void sp_attack4(object me, object victim, object  weapon, int damage)
{
  sp_value =4*(cps+kar)+str+cor+spi+int1;
    message_vision(BLK"
գ�ۼ䣬������ˮ�������¹�΢΢����$n��$N�绯��Ӱȫ������ʹ����Ӱ��ʽ֮���������ҡ������г����ڰ���л���һ���������ν�â������ǧ���䵶һ˲��$n����ȫ�����ν�â����"NOR,me,victim);
    victim->receive_damage("kee",sp_value+40,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);}
void sp_attack5(object me, object victim, object  weapon, int damage)
{
  sp_value =5*(cps+kar)+str+cor+spi+int1;
    message_vision(BLK"
$N���Ʒ����Ծ��б�ؽ��⣬��ת�鶯ʹ�����������ҡ�����ʱɱ��񱼣�����Ѫ���޷����ƣ����ķ������������������η��У�����ι����ղ���"NOR,me,victim);
victim->receive_damage("kee",sp_value+80,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);}
void sp_attack6(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =5*(str+cor+cps)+spi+int1+kar;
   if( weapon->query("id")=="moon_sword" || "sun_moon_sword"){
    message_vision(BLK"
˲�䣬$N�ս����ʣ�����һʽ����ʴ�̺ۡ��������������ʧ��һƬ�ڰ��У�˲�䳤��������ֱ�������š��̺���ʴ����һʽɢ����Ǳ�ص�������ɲ�Ǽ佣���Ƴ��ޱȾ޴�ĺڶ�����â��ȫ���գ�ֻ��$n����Ŀ�ɿڴ���һ����ѣ���޷��ֱ涫������\n"NOR,me,victim);
    victim->receive_wound("kee",sp_value+130,me);
    victim->start_busy(2);
    victim->set_temp("no_power",1);
victim->apply_condition("no_power",2);
//    COMBAT_D->report_status(victim);
}
   else{
    victim->receive_wound("kee",sp_value,me);
    victim->start_busy(1);
    COMBAT_D->report_status(victim);
       }
       }
string perform_action_file(string action)
{
          return CLASS_D("swordsman")+"/moon_sword/"+action;
}
