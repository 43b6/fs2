
#include <ansi.h>

int exert(object me, object target)
{

        if( target!=me ) {
                tell_object(me, "��ֻ�ܰ��Լ����ˡ�\n");
                return 1;
        }
        if( me->is_fighting() ) {
                tell_object(me, "ս�����˹����ˣ�������\n");
                return 1;
        }
        if( (int)me->query("force") < 50 ) {
                tell_object(me, "����������㣬�޷�ʹ��ϴ�辭�����ˡ�\n");
                return 1;
        }

        if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 3 )
                return notify_fail("���Ѿ����˹��أ�ֻ��һ�������ᱻϴ�辢���ˣ�\n");

        write( HIW "�������ڵأ�����ϴ�辭������ȫ������ƣ�ʹ������ƺö��ˡ�\n" NOR);
        message("vision",
                me->name() + "����ϴ�辭��ʼ���ˣ�һ��������ͷ��ð�����³�һ����Ѫ���������ö��ˡ�\n",
                environment(me), me);

        me->receive_curing("kee", ( 10 + (int)me->query_skill("force")/10 + (int)me->query_skill("dragonforce")/10 ) * 3);
        me->add("force", -( 50 ) );
        if( me->query("force")<0 )
                me->set("force", 0);

        return 1;
}
