#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int ski_value,fun;
        string msg;
        object ob;
        fun=me->query("functions/ten_kee/level");
        if( !target ) target = offensive_target(me);
        if(!target) return notify_fail("���Ҳ�������!!!\n");
        if( me->query_skill("god-shooting",1) < 20 )
        return notify_fail("��ļ������ɲ��㡣\n");
if( me->query("family/family_name") != "������" && me->query("id")!="swy" )
        return notify_fail("ֻ�������ɵĵ��Ӳ�����ʮ���\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
return notify_fail("Ҫװ���������ðɡ�\n");
        if(me->query("force")<150)
        return notify_fail("�������������\n");
        if(me->query("kee")<150)
        return notify_fail("�����������\n");
        if(!me->is_fighting(target))
        return notify_fail("ʮ�����ս���в���ʹ�á�\n");
if(target->is_busy())
return notify_fail("���� BUSY �У��칥���ɣ�\n");
ski_value=random(50)+fun*2;
message_vision(HIR"
       $N���ڹ���Ǳ�ˣ�����ԴԴ������������ת�����������γ���ڤ֮��

       �������翵�����$n���ܻ��ƣ���ڤ���������ڹ������ƴ���

                    $N����ڤ���ų����γ����Ǽ���֮����ʽ

                                 ��"HIM"ʮ���"HIR"��

       ��ڤ�����ٷų�����ȼ�����ܿ���������棬˲ʱһƬ��⣡

"NOR,me,target);
// ���ϳɹ��� by swy
// �ٸ���͵���Ҿ� ooxx by swy
if(80>random(100)) {
        if( ski_value <= 25 ) {
           me->add("force",-100);
          write(HIR"�ڹ������֮ǰ����ڤ���������š�\n"NOR);
          }
          else if( ski_value < 80 )
          {
          me->add("force",-100);
          target->receive_damage("kee",(fun*3),me);
          target->start_busy(1);
          write ( "�Լ���������������տ������������������\n");
          }
          else if( ski_value < 120)
          {
           me->add("force",-100);
           target->start_busy(2);
           target->receive_damage("kee",(fun*5),me);
           write(HIR"��ڤ�����ܴӵ�����ߺ�Х������ʹ�ĵ����ܴ���С��\n"NOR);
                 }
          else if( ski_value < 160 )
          {
           me->add("force",-100);
           target->start_busy(3);
           target->receive_damage("kee",(fun*7),me);
           write(HIR"��ڤ�����ܰ˳ɻ������жԷ���ʹ�����ܵ����ص����ˡ�\n"NOR);
          }
          else
          {
           me->add("force",-100);
           target->start_busy(4);
           target->receive_damage("kee",(fun*9),me);
           write(HIR"����Ĺ���֮�£���ڤ����ȷ�����е��ˣ�����ʹ��ĵ��ڵ���������\n"NOR);
           }
           }
else {
message_vision(HIW"$N����ڤ��ȫ����$n����ˡ�\n"NOR,me,target);
}
        if(fun < 100) {
        function_improved("ten_kee",random(500)); }
        me->start_busy(1);
        COMBAT_D->report_status(target);
        message_vision( NOR,me);
        return 1;
}
