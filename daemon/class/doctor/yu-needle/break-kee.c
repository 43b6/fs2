// break-kee.c
// ��Ѩָ : ע��:bleeding ����, ��������, ����������.
// ���¸�д..by chan
// �ֽ׶ν��Ͷ��ֵĹ�������������������.���ر��似
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect(object target, int amount);
int perform(object me, object target)
{
   string msg,*name;
   object ob,weapon;
   int value,sk_lv,em_lv,level,skill,sub_force,hurt;
if( !target ) target = offensive_target(me);
if(!target) return notify_fail("���Ҳ�������!!\n");
 if(!(weapon=me->query_temp("weapon"))
 ||      (string)weapon->query("skill_type")!="stabber" )
         return notify_fail("Ҫ���ʺϵ�������������Ѩ�롣\n");
if(me->query_skill("yu-needle",1)<60)
return notify_fail("�����������̶Ȳ������޷�ʹ����Ѩָ��\n");
if(!me->is_fighting(target))
return notify_fail("��ѨָҪ��ս���в���ʹ�á�\n");
if(me->query("family/family_name")!="������")
return notify_fail("�����书ֻ�������ŵ����˲ſ���ʹ�á�\n");
if((int)me->query("force")<150)
return notify_fail("�������������\n");
if(target->query_temp("break-kee"))
return notify_fail("�Է��Ծ�����,��Ѩָ�ˡ�\n");
 if(target->is_busy())
   level = 95;
 else
   level = 75;

 value = (int)query_function("break-kee");
 me->add("force",-150);
 sk_lv=me->query_skill("yu-needle",1);
 em_lv=target->query_skill("dodge"); //�����enable dodge��ֵ!!
 em_lv=em_lv /3;

message_vision("
"HIW"                 $N����ȫ���Ի�����������"HIG"�������"HIW"��"HIR"��Ѩָ"HIW"����\n\n"NOR""
""HIC"                         $N�����ڵ������������룬�漴��ʹ����\n\n"NOR""
""HIW"                                  "HIY"�� "HIW"Ӱ "HIM"�ã�"HIR"�� "HIG"Ѩ "HIC"�� "HIY"��\n\n"NOR""
""HIY"                         ͻȻ�䡫$N���е���ⷺ��һ��"HIR"��ɫ��â"HIW"��\n\n"NOR""
""HIW"                       ֻ��$N��Ӱ���ΰٻ���������"HIM"��Ӱ"HIW"������$n����\n\n"NOR,me,target);
value=random(value);
sk_lv=random(sk_lv);
sub_force=target->query("force");
if(random(100)<level) {//�Է���û��busyֻ��2�ɵĳɹ���....�еĻ����߳� //��������� by unfinished
if((value > 80) && (sk_lv > em_lv))
{
 message_vision(HIW"$N����Ѩ��,������$n������Ѩ,���ϵ������޷�����,ʹ�ù��������������������½��˳�!!!\n" NOR,me,target);
 skill=80;
 message_vision(HIY"$N����Ѩ��,������$n������Ѩ,����ֱ͸$nҪ��, ��ɼ�����˺�!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 10000) hurt = 10000;  //���������Ը�������Ĵ���mob
 sub_force=(sub_force*80)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 60) && (sk_lv > em_lv)) {
 message_vision(HIW"$N����Ѩ��,������$n������Ѩ,���ϵ������޷�����,ʹ�ù��������������������½��˳�!!!\n" NOR,me,target);
 message_vision(HIY"$N����Ѩ��,������$n������Ѩ,����ֱ͸$nҪ��, ��ɼ�����˺�!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 8000) hurt = 8000;  //���������Ը�������Ĵ���mob
 skill=80;
 sub_force=(sub_force*80)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 40) && (sk_lv > em_lv)) {
 message_vision(HIW"$N����Ѩ��,������$n�ľ���Ѩ,���ϵ������޷�����,ʹ�ù��������������������½�����!!!\n" NOR,me,target);
 message_vision(HIY"$N����Ѩ��,������$n������Ѩ,����ֱ͸$nҪ��, ��ɼ�����˺�!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 6000) hurt = 6000;  //���������Ը�������Ĵ���mob
 skill=60;
 sub_force=(sub_force*60)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 20 ) && (sk_lv > em_lv)) {
 message_vision(HIW"$N����Ѩ��,������$n������Ѩ,���ϵ������޷�����,ʹ�ù��������������������½��ĳ�!!!\n" NOR,me,target);
 message_vision(HIY"$N����Ѩ��,������$n������Ѩ,����ֱ͸$nҪ��, ��ɼ�����˺�!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 4000) hurt = 4000;  //���������Ը�������Ĵ���mob
 skill=40;
 sub_force=(sub_force*40)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
// target->start_call_out( (: call_other, __FILE__, "remove_effect", target, skill:), skill/2);
          }
else {
 message_vision(HIW"$N����Ѩ��,������$n����ͻѨ,���ϵ������޷�����,ʹ�ù��������������������½�����!!!\n" NOR,me,target);
 message_vision(HIY"$N����Ѩ��,������$n������Ѩ,����ֱ͸$nҪ��, ��ɼ�����˺�!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 2000) hurt = 2000;  //���������Ը�������Ĵ���mob
 skill=20;
 sub_force=(sub_force*20)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
     }
}
else
message_vision(MAG"$n��ʹ�Ṧ!!ǧ��һ��֮��!!�ܿ�$N�Ŀ��¹���!!!\n"NOR,me,target); 

message_vision(HIR"$Nʹ����Ѩ���!!�ھ���Ĺ��󣬸Ͻ�������Ϣ��\n"NOR,me);
me->start_busy(1);
COMBAT_D->report_status(target, 1);
 value = (int)query_function("break-kee");
if(value < 100)
function_improved("break-kee",random(me->query("max_force")/15+me->query_skill("yu-needle",1)/2));
        return 1;
}

void remove_effect(object target, int skill)
{
if(!target) return ;
target->delete_temp("break-kee");
target->add_temp("apply/dodge",skill);
target->add_temp("apply/parry",skill);
target->add_temp("apply/attack",skill);
message_vision(HIY"$N����סѨ�������⿪��,��ɥʧ�Ĺ���Ҳ�����ָ���!!!��\n"NOR,target);
}
