//By sueplanȡ�ߵ��˵�weapon - �����е� 2000.7.27
#include <ansi.h>
inherit SSERVER;
object me=this_player();
int perform(object me, object target)
{
        if( me->query("force") < 1000 )
        return notify_fail("����������������ô˼ơ�\n");
        if( target != me)   
        return notify_fail("�˼�ֻ�ܶ��Լ��á�\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("usesky") == 1 )
        return notify_fail("��ʱ�����˺��Ѿ���������ס�ˡ�\n");
message_vision(HIC"$N����������еĹ���˵��֮�ƣ����Լ����ڲ���֮�ء�\n"NOR,me);
message_vision(HIC"$N�е��Լ����������ָ���һ���ˡ�\n"NOR,me);
        me->add_temp("apply/stabber",30);
        me->set_temp("usesky",1);
        me->add("force",-500);
        return 1;
}




