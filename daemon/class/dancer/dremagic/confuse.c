#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int conjure(object me, object target)
{
        string msg;
        int k;
	fun=me->query("spells/confuse/level");
	if(fun<=35) k=1;
	if(fun>=36&&fun<=70) k=2;
	if(fun>=71) k=3;
     if (!me->query("spells/confuse/level"))
     return 0;
        if( !target ) target = offensive_target(me);

        if(!target) return notify_fail("���Ҳ�������!!\n");
        if(!me->is_fighting(target))
                return notify_fail("�λ�֮��Ψ��ս���в���ʹ�á�\n");

  if( target->is_busy() )
 return notify_fail("��ķ������Ի��ŵ��ˣ�����������!\n");

if(me->query("family/family_name")!="ҹ��С��")
return notify_fail("ֻ�����߲���ʹ�á�\n");
        if((int)me->query("atman") < 75 )
                return notify_fail("��ķ���������\n");
        if((int)me->query("gin") < 30 )
                return notify_fail("��ľ���û�а취��Ч���У�\n");

        me->add("atman", -70);
        me->receive_damage("gin", 10);

         write("[1;32m\n                    ����Ȼ������ҹ���������λ�֮��ľ�ѧ��\n[0m");
         msg = HIC "\n                     $N��Ȼ��Ȼ���裬��ǰֻ��$N����������Ӱ��" NOR;
         msg += HIC "\n                     ��������������貽�����˿������������" NOR;
         msg += HIC "\n                          �������·�������������֮�С�\n\n" NOR;
         message_vision(msg, me, target);
if(80>random(100)) {
                        write("[1;32m\n                     ����ɹ���ʩչ���λ�֮�衣\n[0m");
                        say( "[1;35m                     "+target->query("name")+"¶���������ı��飬��������ʧ�˻��Ƶ�!!\n[0m");
                        target->start_busy(k);
                        me->improve_skill("dremagic", 1, 1);
                        if ( fun < 100)
                        me->spell_improved("confuse",random(1000));
                } else {
                write("[1;31m\n                     ���˿��������������������� \n[0m");
                say( "[1;32m                     ����"+target->query("name")+"˿����Ϊ������\n[0m");
                if ( fun < 100)
                me->spell_improved("confuse",random(1000));

}

        COMBAT_D->report_status(target);
        return 1;
}

