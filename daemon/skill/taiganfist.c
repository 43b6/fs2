//�����Ʒ� by bss

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void cold(object me, object victim, object  weapon, int damage);
void fire(object me, object victim, object  weapon, int damage);
void again1(object me, object victim, object weapon, int damage);
void together(object me, object victim, object  weapon, int damage);

mapping *action = ({
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIC"��"NOR"�е�����ʽ"HIC"������ӭ�͡�"NOR"������ƽ�ƶ�����һ��������$N�����ĳ������˲������������\n",
"dodge":-60,
"parry":50,
"force":60,
"damage":50,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIR"��"NOR"�е�����ʽ"HIR"�����ż�����"NOR"���������϶�������������һ���ȷ�����$N�����ƶ�����ʹ�����ֲ���������ȸС�\n",
"dodge":-60,
"parry":50,
"force":70,
"damage":55,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"��÷ѩ������"NOR"��������ѩ�����ɻ���$n��\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":60,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��÷ѩ���ġ�"NOR"���������������$n�ĳ���һʮ���ơ�\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":65,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����֦��б��"NOR"������ƽ�٣���������в��б������������$n��$l��\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":70,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��������֦��"NOR"�����Ƹ߾٣�Ѹ�ٵ����Ļ���$n��$l��\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":75,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"������������"NOR"�����Ʋ�ָ�ɽ���Ѹ�װ����$n��$l��\n",
"dodge":-100,
"parry":80,
"force":100,
"damage":80,
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��ǧ��ѹ�ա�"NOR"�����ƴ�ָ�ɵ������������$n��$l��\n",
"dodge":-100,
"parry":80,
"force":100,
"damage":85,
"damage_type" : "����",
]),

(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����ɳçç��"NOR"�������������п���ɳ֮��ѹ����$n͸����������\n",
"dodge":-100,
"parry":80,
"force":110,
"damage":90,
"post_action":  (: cold :),
"damage_type" : "����",
]),
(["action":
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"���󺣳�ɳ��"NOR"��������������ŭ������֮��ӿ����$n�ľ�������\n",
"dodge":-100,
"parry":90,
"force":110,
"damage":95,
"post_action":  (: fire :),
"damage_type" : "����",
]),
(["action":
HIY"$N��ʱ�����ˡ�"HIC"��"HIR"��"NOR"ѭ����"HIB"������Ϣ"NOR"���ĵ����������Ʒ��ںϺ�������"
NOR,
"dodge":-100,
"parry":100,
"force":90,
"damage":40,
"post_action":  (: again1 :),
"damage_type" : "����",
]),
(["action":
"$N����"HIC"��"HIR"��"NOR"�ϱڣ��ض��쾪��֮���壬�������ƽ�����������Ϻ��ĳ���˲���γ�һ�����Ϯ��$n��\n",
"dodge":-500,
"parry":-500,
"force":0,
"damage":-100,
"post_action":  (: together :),
"damage_type" : "����",
]),

});

mapping query_action(object me, object weapon)
{
   int skill_level, limit;
   skill_level = (int)(me->query_skill("taiganfist", 1));
   limit= (int)( skill_level/ 10);
      if (limit < 2 )
         return action[random(4 )];
      else if (limit < 3 )
         return action[random(5 )];
      else if (limit < 4 )
         return action[random(6 )];
      else if (limit < 5 )
         return action[random(7)];
      else if (limit < 6 )
         return action[random(8 )];
      else if (limit < 7 )
         return action[random(10)];
      else if (limit < 8 )
         return action[random(11)];
         return action[random(12)];
}
void cold(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("taiganfist", 1);
   message_vision("$N�ܵ������Ʒ�����������Ϯ���������ܵ��˶�����\n",victim);
   victim->apply_condition("cold",random(5)+((int)me->query_skill("taiganfist",1)/5));
   victim->receive_damage("kee", (skill* 3));
   COMBAT_D->report_status(victim);
}
void fire(object me, object victim, object  weapon, int damage)
{
   int skill = me->query_skill("taiganfist", 1);
   message_vision("$N�ܵ������Ʒ�����������Ϯ���������ܵ���������\n",victim);
   victim->apply_condition("burn",random(5)+((int)me->query_skill("taiganfist",1)/5));
   victim->receive_damage("kee",(skill* 3));
   COMBAT_D->report_status(victim);
}

void again1(object me, object victim, object weapon, int damage)
{
 int skill_level=me->query_skill("taiganfist",1),bound;
 bound = victim->query("max_kee"); //���ݶ��ֵ�kee�������۶���
 bound = (bound/100)*5;            //��5%��kee
    if( random(100) < 50 && me->query("force",1) > 100 )
  {
       message_vision(
sprintf(HIW"\n$N����̫���\����ȫ��������һƬ�����ƺ��������!!\n\n"NOR),me ,victim);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIC"��"NOR"�е�����ʽ"HIC"������ӭ�͡�"NOR"������ƽ�ƶ�����һ��������$N�����ĳ������˲������������\n"),me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIR"��"NOR"�е�����ʽ"HIR"�����ż�����"NOR"���������϶�������������һ���ȷ�����$N�����ƶ�����ʹ�����ֲ���������ȸС�\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"��÷ѩ������"NOR"��������ѩ�����ɻ���$n��\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��÷ѩ���ġ�"NOR"���������������$n�ĳ���һʮ���ơ�\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����֦��б��"NOR"������ƽ�٣���������в��б������������$n��\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��������֦��"NOR"�����Ƹ߾٣�Ѹ�ٵ����Ļ���$n��\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"������������"NOR"�����Ʋ�ָ�ɽ���Ѹ�װ����$n��\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��ǧ��ѹ�ա�"NOR"�����ƴ�ָ�ɵ������������$n��\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����ɳçç��"NOR"�������������п���ɳ֮��ѹ����$n͸����������\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
sprintf("$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"���󺣳�ɳ��"NOR"��������������ŭ������֮��ӿ����$n�ľ�������\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
        me->start_busy(1);
}
}
void together(object me, object victim, object  weapon, int damage)
 {
     int skill_level;
     skill_level = (int)(me->query_skill("taiyiforce", 1));
if (skill_level >= 90 )
{
message_vision(HIW"$n��$N������������������������У��������顫������һ�����������ѿ�����$n�����������Զ��\n"NOR,me,victim);
        me->add("force",-170);
        victim->apply_condition("hart",random(5)+((int)me->query_skill("taiyiforce",1)/10));
        victim->receive_damage("kee",700);
        victim->start_busy(1);
        COMBAT_D->report_status(victim);
}
}

int valid_learn(object me)
{
        int level,skill;
        level=me->query("taigan_level",1);
        skill=me->query_skill("taiganfist",1);
        if(me->query("class")!="taigan"){
                return notify_fail("ֻ��̫����ѧ�����Ʒ�");
                return 0;
                }
       if( me->query_temp("weapon") || me->query_temp("secondary_weapon") ){
       return   notify_fail("ѧ�����Ʒ�������֡�\n");
       return 0;
       }
        switch(level){
                case 5:
                        return 1;
                        break;
                case 6:
                        if(skill>80){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 7:
                        if(skill>60){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 8:
                        if(skill>40){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 9:
                        if(skill>20){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                default:
                        write("�㲻��̫�࣬�޷�ѧϰ�����似��\n");
                        return 0;
                        break;
  }
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" );
}
