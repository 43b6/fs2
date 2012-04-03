#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit SKILL;

int perform(object me, object target)
{
  int wave_lv;
  object ob,victim = target;
  wave_lv=me->query("functions/wave/level");
  if( !target ) target = offensive_target(me);
  if(me->query_skill("dragonfist",1) < 80 )
   return notify_fail("��Ľ�����ѧ�������죬ʹ������������\n"); 
  if( me->query("family/family_name") != "ؤ��" )
   return notify_fail("��������ֻ��ؤ����Ӳ���ʩչ��\n"); 
   if(me->query("force")<wave_lv)
     return notify_fail("�������������\n");
   if(!me->is_fighting())
    {
     tell_object(me,"������������ս���м�����\n");
     return 0;
   }
 
if(target->is_busy())
 return notify_fail("���˲��ܶ��У��칥���ɣ�\n");

    if(!me->query_temp("wave"))
	{
 me->set_temp("wave",1);
     message_vision(HIY"$N˫��һ��,������ɢת��,����ǰ����ɽ������....."NOR,me);
     if(wave_lv<=25){
	message_vision(HIR"$N��ʹǿ�У�����΢΢һ�ϡ�\n"NOR,me);
            me->start_busy(1);
            call_out("do_wave",14,target,me);
     } else if(wave_lv<=50){
	message_vision(HIR"$N��ʹǿ�У�����΢΢һ�ϡ�\n"NOR,me);
            me->start_busy(1);
	call_out("do_wave",10,target,me);
     } else if(wave_lv<=75) {
  	call_out("do_wave",6,target,me);
     } else {
	call_out("do_wave",2,target,me);	
     }     
    function_improved("wave",random(me->query("force")/10));
    message_vision( NOR,me);
    return 1;
  }
}
int do_wave(object victim,object me)
{
     int i; 
     int wave_lv;
     wave_lv=me->query("functions/wave/level");
     if(wave_lv<=25){
	message_vision(HIW"$N��Ǳ����Х�������������ƿ�����!\n"NOR,me);
            COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
     } else if(wave_lv<=50){
	message_vision(HIW"$N�����������ȣ���������һ�ƿ��һ��!!\n"NOR,me);
            for(i=0;i<2;i++){
 	COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);	
            }
     } else if(wave_lv<=75) {
            message_vision(HIW"$N�������,�����������������,�Ʋ��ɵ�!!!\n"NOR,me);
	for(i=0;i<3;i++)
	{
           COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            }
     } else {
	message_vision(HIC"��������---��---��---��---��---!!!\n"NOR,me);
	for(i=0;i<4;i++){
            COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);	
    	} 
    }     
    me->delete_temp("wave");
    return 1;
}
