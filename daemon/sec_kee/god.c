// gather.c 
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
 tell_object(me,"���Ծ���ʹ�á�����֮������!!!��\n");
 return 1; }
 message_vision(
          HIW "$N���І����д�!!��������������"HIM"����֮��"HIW"�ڳ���\n" NOR,me);
 message_vision(
          HIY "$N��ȫ������֮��������������ð�Ĺ�â!!\n" NOR,me,target);
        if(((int)me->query("kee")) < ((int)me->query("max_kee")))
        {
        me->add("kee",1000);
        me->add("force",200);
        }
       me->set_temp("super_god",1);
        me->apply_condition("god_out",me->query("s_kee")/10);
        me->set("s_kee",0);
     return 1;
}

