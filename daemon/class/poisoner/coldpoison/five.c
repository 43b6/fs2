#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int perform(object me, object target)
{
	string msg;
	object ob;
if(me->is_fighting()) { target = offensive_target(me);
} else { if(!target) return notify_fail("��Ҫ��˭��\n"); }
    if(target==me) return notify_fail("�����Լ�???������?\n");
	if(!(ob=present("five poison",me)))
	return notify_fail("�������û���嶾��\n");
	if( environment(me)->query("no_fight") )
	return notify_fail("���ﲻ׼ս����\n");
if(target->query_temp("five-1")==1)
return notify_fail("���ض�����ֻ����һ�Ρ�\n");
        if(me->query("family/family_name")!="ڤ��ħ��")
        return notify_fail("�㲻��ħ��ͽ��\n");
        if(me->query_temp("is_five"))
        return notify_fail("������ʹ�á�\n");
        msg=HIC "$N�����嶾���۾������Ż�������\n"NOR;
        message_vision(msg, me);
	ob->add_amount(-1);
        me->set_temp("is_five",1);
    call_out("act1",5,msg,target,me);  
        return 1;
}
int act1(string msg,object target,object me) {
if(!me) return 1;
fun=me->query("functions/five/level");
me->delete_temp("is_five");
if(!target) return notify_fail("�����Ǿ�����ҵ�Ե��,�㷢���㾹Ȼ�Ҳ�������!!\n");
if(environment(me)!=environment(target))
return notify_fail("���˲����⡣\n"); 
if(!target) return notify_fail("���˲����ˡ�\n");
if(!living(target)) return notify_fail("���������ˡ�\n"); 
        if(80>random(100))
	{
        msg=HIR "$N������������һ����$n����������һ������ӡ��\n" NOR;
        target->apply_condition("five_poison",5);
    target->set("five",me->query("functions/five/level"));   
if(target->query("id")=="degu sa") target->set_temp("five-1",1);
        target->kill_ob(me);
        me->kill_ob(target);
} else msg= HIG "$N������������һ����$n������Σ���������㿪��\n"NOR;
message_vision(msg, me, target);
if(fun<100) function_improved("five",random(700));   
return 1;
}
