#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
        if(me->query("s_kee")<10)
     {
          tell_object(me,"�����������������\n");
             return 1;
     }
     if(me->query_temp("super_god")==1) {
 tell_object(me,"���Ծ���ʹ�á�"HIR"Ѫħ����"NOR"����!!!��\n");
 return 1; }
 message_vision(
          HIW "$Nһ�����!!���ϱ�������Ѫ�⣬ǣ������"HIR"Ѫħ����"HIW"��\n" NOR,me);
 message_vision(
          HIY "$N��ȫ��Ѫħ������������������Ĺ�â!!\n" NOR,me,target);
        if(((int)me->query("kee")) < ((int)me->query("max_kee")))
        {
        me->add("kee",1000);
        me->add("force",200);
        }
        me->set("s_kee",0);
     return 1;
}
