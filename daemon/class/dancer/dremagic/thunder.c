#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int k;
int skl;
int fk;
int conjure(object me, object target)
{
        string msg;
fun=me->query("spells/thunder/level");
skl = (int)(me->query_skill("dremagic", 1));
if(me->query("class")=="dancer")
{
fk=(fun+skl)/2;
}
else{
fk=(fun+skl)/4;
}
if (!me->query("spells/thunder/level"))
     return 0;

        if( !target ) target = offensive_target(me);
        if( !me->is_fighting(target) )
        return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if(me->query("atman") < 100 )
        return notify_fail("��ķ�������\n");
        if(me->query_temp("thunder")==1)
        return notify_fail("������ʩ����\n");
if(fun<=20) {
        msg = CYN "$N��������ţ�" NOR ;
        msg += HIR "���ס�����\n" NOR ;
        msg += HIW "$N����һ���������$n��\n" NOR;
k=fk*2;
} else if(fun>=21&&fun<=40) {
        msg = CYN "$N��������ţ�" NOR ;
        msg += HIG "�á��ס�����\n" NOR ;
        msg += HIW "$N����һ���������$n��\n" NOR;
k=fk*3;
} else if(fun>=41&&fun<=60) {
        msg = CYN "$N��������ţ�" NOR ;
        msg += HIB "�����ס�����\n" NOR ;
        msg += HIW "$N����һ���������$n��\n" NOR;
k=fk*4;
} else if(fun>=61&&fun<=80) {
        msg = CYN "$N��������ţ�" NOR ;
        msg += HIC "�졫�ס�����\n" NOR ;
        msg += HIW "$N����һ���������$n��\n" NOR;
k=fk*6;
} else if(fun>=81) {
        msg = CYN "$N��������ţ�" NOR ;
        msg += HIY "ŭ���ס����Σ�\n" NOR ;
        msg += HIW "$N����һ���������$n��\n" NOR;
k=fk*8;
}
    message_vision(msg, me, target);
call_out("act1",3,msg,target,me,fun,k);
    me->set_temp("thunder",1);
       return 1;
}
int act1(string msg,object target,object me,int fun,int k)
{
   if(!me) return 1;
	me->delete_temp("thunder");
    if(!target) return 1;
if(!this_player()) return 1;
fun=me->query("spells/thunder/level");
if(me->is_fighting(target)) {
if(80>random(100))
        {
                msg = HIM "���$p�ұ�$P������У�����һƬ���ڣ�\n" NOR;

				if(me->query("class")!="dancer")
				 {
                target->receive_damage("kee",k/2+100,me);
                  }
				  else
				  {
				   target->receive_damage("kee",k+100,me);
				   }
				  if ( fun < 100)
                       { spell_improved("thunder",random(700));}
       }
  else {
                msg = HIM "���Ǳ�$p�㿪�ˡ�\n" NOR;
                       if ( fun < 100)
                       { spell_improved("thunder",random(700));}
        }
        me->add("atman",-100);
        message_vision(msg, me, target);
}
        return 1;
}
