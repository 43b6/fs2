#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int k;
int conjure (object me, object target)
{
        string msg;
fun=me->query("spells/fireball/level");
if (!me->query("spells/fireball/level"))
     return 0;
if(me->query("class")!="dancer")
return notify_fail("�ⷨ��ֻ���������á�\n");
        if( !target ) target = offensive_target(me); 
        if(!me->is_fighting(target) )
        return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if(me->query("atman") < 50 )
        return notify_fail("��ķ�������\n");
        if(me->query_temp("fireball")==1)
        return notify_fail("������ʩ����\n");
if( fun <= 20) {
        msg = CYN "$NͻȻ���ţ�" NOR ;
        msg += HIR "�á���\n" NOR ;
        msg += HIW "$N����һ�Ż������$n��\n" NOR;
        k=fun*2;
} else if( fun>=21&&fun<=40) {
msg=CYN "$NͻȻ���ţ�" NOR ;
msg+= HIR "������\n" NOR;
msg += HIW "$N����һ�Ż������$n��\n" NOR;
k=fun*3;
} else if( fun>=41&&fun<=60) {
msg=CYN "$NͻȻ���ţ�" NOR ;
msg+= HIR "���������桫��\n" NOR;
msg += HIW "$N����һ�Ż������$n��\n" NOR;
k=fun*4;
} else if( fun>=61&&fun<=80) {
msg=CYN "$NͻȻ���ţ�" NOR ;
msg+= HIR "�졫��"+HIY+"�ء���"+HIB+"������\n" NOR;
msg += HIW "$N�������Ż������$n��\n" NOR;
k=fun*6;
} else if( fun>=81 && me->query("adv_dancer")==1)
{
msg=CYN "$NͻȻ�󺰣�" NOR ;
msg+= HIR "ŭ"+HIW+"��"+HIR+"��"+HIW+"��"+HIR+"��"+HIW+"��"+HIR+"��"+HIW+"��"+HIR+"��"+HIW+"��"+HIR+"��"+HIW+"��"+HIR+"�죡\n" NOR;
msg += HIW "ֻ��$n���Ծ����ޱ��޼ʵĻ𺣡�\n" NOR;
k=fun*12;
}
else{
msg=CYN "$NͻȻ���ţ�" NOR ;
msg+= HIM "�ۡ��ҡ�������������\n" NOR;
msg += HIW "$N����һƬ�𺣺���$n��\n" NOR;
k=fun*8;
}
        message_vision(msg, me, target);
        me->set_temp("fireball",1);
call_out("act1",6,msg,target,me);
       return 1;
}
int act1(string msg,object target,object me){
      me->set_temp("fireball",0);
if(me->is_fighting(target)) {
      if(80>random(100))
        {
                msg = HIM "���$p�ұ�$P���У�\n" NOR;
 target->receive_wound("kee",k+100);
 target->apply_condition("burn",random(10) +fun/10);
 
        } else {
                msg = HIM "���Ǳ�$p�㿪�ˡ�\n" NOR;
        }
        me->add("atman",-50);
        message_vision(msg, me, target);
		COMBAT_D->report_status(target);
if(fun<100) spell_improved("fireball",random(500));
}
        return 1;
}
