#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int ski_value,fun,lv,a;
        string msg;
        object ob;
        fun=me->query("functions/god_wind/level");
lv = random(fun/19);
        if( !target ) 
        target = offensive_target(me);
        if(!target) 
        return notify_fail("���Ҳ�������!!!\n");
        if( me->query_skill("god-shooting",1) < 100 )
        return notify_fail("��ļ������ɲ��㡣\n");
if( me->query("family/family_name") != "������" && me->query("id")!="superobs" )
        return notify_fail("ֻ�������ɵĵ��Ӳ�����ʮ���\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
        return notify_fail("Ҫװ���������ðɡ�\n");
        if(me->query("force")<400)
        return notify_fail("�������������\n");
        if(me->query("kee")<150)
        return notify_fail("�����������\n");
        if(!me->is_fighting(target))
        return notify_fail("����������ս���в���ʹ�á�\n");
message_vision(HIR"
$N���ڹ���Ǳ�ˣ�����ԴԴ������������ת�����м����ڷ�ת�м������ǣ�ֱϮ���

                           ���Ǽ�����ʽ֮һ

                       ��"HIM"��������"HIR"��

�����ɿ�ֱȡ$n�����������߶�����ȼ�����ܿ���������棬˲ʱһƬ��⣡

"NOR,me,target);
if (70 > random (100))
{
   for( a=1;a<=lv;a++)
{
message_vision(HIW"����"HIC"����"HIW"����������ʳ�$n��������Ϯȥ!"NOR"\n",me,target);
           target->receive_damage("kee",fun*3,me);
        function_improved("god_wind",random(500));
           COMBAT_D->report_status(target);
}
}
else
{
write(HIR"����׼ͷʧȥ����ƫ��Ŀ��!"NOR"\n",me,target);
}
      }
