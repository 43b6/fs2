//��ˮ֮�� by sueplan ������
#include <ansi.h>
object me=this_player();
int perform(object me, object target)
{
        int sk;
        sk=me->query_skill("plan",1);
        if( target != me)   
        return notify_fail("�˼�ֻ�ܶ��Լ��á�\n");
        if(me->query("family/family_name")!="����")
        return notify_fail("�㲻�����ŵĲ����á�\n");
        if( me->query("force") < 1000 )
        return notify_fail("�������������\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if(me->query_temp("no-fear")== 1 )
        return notify_fail("�㱳ˮһս�����ʿ���ˡ�\n");
message_vision(HIG"$N�����󺰣�������������һս��\n"NOR,me);
        me->set_temp("oldenforce",me->query("force_factor"));
        me->set("force_factor",10+5);
        me->add("force",-500);
        me->add_temp("apply/dodge",-20);
        me->add_temp("apply/move",-20);
        me->add_temp("apply/attack",sk);
        me->set_temp("no-fear",1);
        me->add("force",-500);
        me->add("bellicosity",-5);

        return 1;
}
