//�긴�� by sueplan - ���ٻظ�kee���˵������ֵ
#include <ansi.h>
inherit SSERVER;
int delfullkee(object);
int perform(object me, object target)
{
        int force=me->query_skill("force");
        if( me->query("force") < 1000 )
        return notify_fail("�������������\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( target != me)   
        return notify_fail("�˼�ֻ�ܶ��Լ��á�\n");
        if( me->query_temp("fullkee") == 1 )
        return notify_fail("���Ѿ������긴�ƣ���Ȼ����á�\n");
          message_vision(HIW"$N�ó���������е��긴�ƣ�һ�������$N�춥ǰ�ӹ���\n"NOR,me);
        message_vision(HIG"$N���ܵ�����һ�����������������ظ��˲��١�\n"NOR,me);
        me->receive_curing("kee",force*3);
        me->set_temp("fullkee",1);
        me->add("force",-500);
        call_out("delfullkee",10,me);
        return 1;
}
int delfullkee(object me)
{

        if(me) {
        me->delete_temp("fullkee");
        }
        return 1;
}


