#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int conjure(object me, object target)
{
        string msg;
fun=me->query("spells/firedance/level");
     if (!me->query("spells/firedance/level"))
     return 0;

        if( !target ) target = offensive_target(me);
        if(!me->is_fighting(target) )
        return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");

if(me->query("family/family_name")!="ҹ��С��")
return notify_fail("ֻ�����߲���ʹ�á�\n");
        if((int)me->query("atman") < 150)
                return notify_fail("��ķ���������\n");

        if((int)me->query("gin") < 10 )
                return notify_fail("��ľ���û�а취��Ч���У�\n");

        me->add("atman", -150);
        me->receive_damage("gin", 10);

         write("[1;32m\n            ��������ҹ�����輰���������ľ��裬Ԥ��ʩչ[1;31m������[1;32m֮����\n[0m");
         msg = HIC "\n                   $N�����彥���ı������Χ����$N������Ҳ��" NOR;
         msg += HIY "\n                     ���Ļû�Ϊһֻ��ˣ�ֻ��һֻ����Ѹ�ٵ�" NOR;
         msg += HIG "\n                       ����$n��ȥ����$n�����мܡ�\n\n" NOR;
         message_vision(msg, me, target);
        if( 80 > random(100) ) {
                        write("[1;32m\n                     ����ɹ���ʩչ�������衣\n[0m");
                        say( "[1;31m                     "+target->query("name")+"���㲻�����������¶����˻�ʹ���쳣!!\n[0m");
         target->add("kee",-(fun*9+250));
		 target->apply_condition("burn",random(15) +fun);
                        if ( fun < 100)
                          me->spell_improved("firedance",random(700));
        } else {
                write("[1;31m\n                     ���˿��������������������� \n[0m");
                say( "[1;32m               ֻ��"+target->query("name")+"��Ѹ�ײ����ڶ�֮������������\n[0m");
                         if (fun < 100)
                         me->spell_improved("firedance",random(700));
}

        COMBAT_D->report_status(target);

me->start_busy(1);
        return 1;
}

