#include <ansi.h>
// By Sueplan ����� - ���ű����¼�ı
//����Ҫ��Ҫ��call_outʱ����plan��temp����
//�����ıֻ����������������plan, ���ܵ�sixgod-plan
inherit SSERVER;
object me=this_player();
int perform(object me,object target)
{
        if( me->query("sen") < 100 )
                return notify_fail("��ľ��񲻹����޷�ʹ�á�\n");
        if( target != me ) 
                return notify_fail("��Ҫ��˭�ü� ?\n");
        if(me->is_fighting(target))     
                return notify_fail("�����ֻ����ս��ǰʹ�á�\n");
        if( me->query("force") < 2500 )
                return notify_fail("����������������ô˼ơ�\n");
        if( me->query_temp("no-plan") == 1 )
        return notify_fail("���Ѿ�ʹ��������ˡ�\n");
message_vision(HIY"$N����������еĲ���ƣ�ʹ�Լ����±�ļ�ı��\n"NOR,me);
        me->set_temp("speed",1);
        me->set_temp("empty",1);
        me->set_temp("mount",1);
        me->set_temp("false",1);
        me->set_temp("lock-link",1);
        me->set_temp("ghost",1);
        me->set_temp("rob",1);  
        me->set_temp("no-plan",1);
        me->add("force",-2000);
        return 1;
}
