//By sueplanȡ�ߵ��˵�weapon - �ݴ���� 2000.7.27
//�޸�Ϊ��ͬһ������ֻ�������� by sueplan
#include <ansi.h>
inherit SSERVER;
int delwap(object me);
int perform(object me, object target)

{
        object ob=this_object();
        object ewp;
        int i;
        if( !target ) target = offensive_target(me);
        if( !me->is_fighting(target) )
        return notify_fail("�ݴ����ֻ����ս����ʹ�á�\n");
        ewp=target->query_temp("weapon");
        if( !ewp || target->query("id")=="fire king" || target->query("id")=="degu sa" )
        return notify_fail("�������в�û�б�����\n");
        if( me->query("force") < 500 )
        return notify_fail("�������������\n");
        if( userp(target) ) 
        return notify_fail("���ж�����û�á�\n");
        if( me->query("kee") < 300 )
        return notify_fail("�����������\n");
        if( me->query_temp("getwap") == 1 )
        return notify_fail("�������˼ƣ��������ǻᱻ�Է����Ƶġ�\n");

message_vision(HIG"���΢Ц���ƺ�$n�ľٶ���������֮�С�\n"NOR,me,target);
message_vision(HIY"ֻ��$N����$n�ı�����һ���������ı�����\n"NOR,me,target);
        if( environment(me) == environment(target) ) 
          i=random(100);
           if( i > 50 )
          {
          ewp->unequip();
message_vision(HIR"$N��Ѹ�ײ����ڶ�֮��������������вݴ�����Ĺ��򣬽��$n�ⲻ֪���е�"+ewp->query("name")+HIR"�ѱ�ȡ�ߡ�\n"NOR,me,target);
          ewp->set("value",1);
          ewp->move(me);
          target->rest_action();
          } 
        else 
        {
message_vision(HIC"����ȴ��$N��˫���޷�����$n�ı�����\n"NOR,me,target);
        me->add("kee",-100);
        }
        me->set_temp("getwap",1);
        me->add("force",-500);
        call_out("delwap",5,me);
//Ϊ�˱�������̫�����ӵ�DELAY TIME
        return 1;
}
int delwap(object me)
{
        if(me) {
        me->delete_temp("getwap");
        }
        return 1;
}



