#include <ansi.h> 
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        object ob; 
if(me->is_fighting()) {
target = offensive_target(me);
} else {
   if(!target) return notify_fail("��Ҫ��˭��\n");
}
        if(me->query("family/family_name")!="ڤ��ħ��")
        return notify_fail("�㲻��ħ��ͽ��\n");
        if(!ob = present("faint poison",me))
                return notify_fail("�������û��һ���㡣\n");
	if( environment(me)->query("no_fight") )
		return notify_fail("���ﲻ׼ս����\n");
	if( target->query("no_kill") )
		return notify_fail("����һ��㲻�ܶ����ǲ��ܶ���\n");
     if(target->is_busy())
     return notify_fail("���� BUSY �У��칥����\n");

       msg=HIY "$N�ӿ��зų����̣���$n��ȥ��\n" NOR;
       me->start_busy(1);        
if(80>random(100)) {
        msg+= GRN "$nһ�������������̣��ж��仺�ˡ�\n" NOR;
 target->start_busy(3);
        } else {
        msg+=HIG "$nʶ����$N�Ķ��У�����һ�࣬���˿�ȥ��\n" NOR;
        }
        message_vision(msg, me, target);
        me->kill_ob(target);
        target->kill_ob(me);
        ob->add_amount(-1);
        return 1;
}
 
