//By sueplan ����ɱ��50�� - �����
//DELAY TIME 60�� 
#include <ansi.h>
inherit SSERVER;
 int delup(object me);
int perform(object me, object target)
{
        int bell=me->query("bellicosity");
        if( target != me)
                return notify_fail("�˼�ֻ�ܶ��Լ��á�\n");
        if(me->query("force")<1000)
                return notify_fail("�������������\n");
        if(me->query("bellicosity")>2000)
                return notify_fail("���Ѿ��޷����������ɱ���ˡ�\n");
        if( me->query("family/family_name") != "����")
        return notify_fail("�㲢�����ŵ��ˣ����������֣���^_^\n");
        if( me->query_temp("bellup"))
        return notify_fail("�����Ѿ������, ��ʱ�������޷�����ܾ��ĵġ�\n");
        message_vision(
        HIY "$N��֪��������ԡ������֮�����������������к�ս����־!!\n" NOR,me);
        me->add("bellicosity",50);
        me->set_temp("bellup",1);
        me->add("force",-500);
         call_out("delup",20,me);
        return 1;
}
 int delup(object me)
{
        if(me) {
        me->delete_temp("bellup");
        }
        return 1;
}


