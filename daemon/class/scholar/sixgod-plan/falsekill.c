// �������� By sueplan - ֻ�ܶ�ͬһppl��һ��
#include <ansi.h>
inherit SSERVER;
object me=this_player();
object target=me->query_enemy(me);
int perform(object me, object target)
{
        if( me->query("force") < 1000 )
        return notify_fail("����������������ô˼ơ�\n");
        if( target->query_temp("no_falsekill") == 3 )
        return notify_fail("�Է��ѱ���ļ����ƭ��������, �ڱ�Ҳ��������ƭ�˰ɡ�\n");
        if(me->query_temp("nouse")==1)
        return notify_fail("�Է�������ļ���޷�ֱ�мܵ���!!\n");
        if( me->query("sen") < 100 )
        return notify_fail("������������ô˼ơ�\n");
        if( me->query("gin") < 100 )
        return notify_fail("����ľ��������ô˼ơ�\n");
        if( me->query("family/family_name") != "����")
        return notify_fail("�������������������֣���^_^\n");
        if(!me->is_fighting())
        return notify_fail("��������ֻ����ս����ʹ�á�\n");
        me->add("sen",-30);
        me->start_busy(1);
message_vision(HIY"$N��Ȼʹ�������������ļ�ƣ���$n�޷���Ӧ��\n"NOR,me,target);
        target->add_temp("no_falsekill",1);
        me->set_temp("nouse",1);
        target->set_temp("no_power",1);
        call_out("delnopower",60,target);
        return 1;
}

int delnopower()
{
        if (target) {
        target->detele_temp("no_power");
        me->delete_temp("nouse",1);
        }
        return 1;
}

