// �쾪�ض� by xman
// ���universe���sp1��sp5��д,Ŀ����������������һ���Լ��������
// �ȼ�Խ��Խ��,���õ�����Խ��,�˺�Խ��(���Ҵ�ܶ�:p)
#include <combat.h>
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
void tengin(object me, object target);
int perform(object me, object target)
{
        int lv,a,damage;
        lv = me->query("functions/tengin/level",1);
		if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
        if( !me->query("marks/tengin"))
          return notify_fail("�����߹���, ��ͼ�������֮��, ����ʲô����Ҳû������\n");
        if( me->query_skill("universe",1)<120 )
          return notify_fail("�������Ǭ������ֻ������԰�ĳ̶ȡ�\n");
        if( me->query("force")<500 )
          return notify_fail("�����������, �޷��������֮����\n");
        if( !target )
          target = offensive_target(me);
        if( !me->is_fighting(target) )
          return notify_fail("�쾪�ض�ֻ����ս����ʹ�á�\n");
        if(!target) return notify_fail("���Ҳ�������!!\n");
        message_vision(HIY"

                ͻȻ֮��, ���淢��ǿ��ĵ���, ����ǿ��, ���е���
                ����ö�������, ֻ��$N��ָ���, ʹ��"HIW"

                    ������Ǭ������"HIR"
                                    ���߾�"HIW"
                                            ��"HIC"��"HIG"��"NOR+YEL"��"HIB"��"HIW"��"HIY"

                ��������������֮����ŵ�֮����϶���, ��һʩչ, 
                ���������Ҿ�, ����ɽҡ, ʩչ�����������ݼ�����ת
                Ǭ������������Ȼ����, ��������, �����������, ��
                ���������, �����ܵ������������ϵؾۼ�����!!"NOR"\n\n",me,target);

  damage = 300+lv*20;
  if(80 > random(100))
        {
          me->set_temp("tengin",me->query("env/�쾪�ض�"));
          me->set_temp("tengin_power",damage);
          target->start_busy(1);
          message_vision(HIW"\n
                ����, ����֮�������ϼ�������, �ŵ�֮���ӵ������
                ����, ����������������, �����ɰ����ޱȵ�����!!"NOR"\n\n",me,target);
        }
        else
        {
          message_vision(HIR"\n
                $N�޷�����ԴԴ���������֮�������ڿ��, ֻ��ǿ��
                �չ�, Ȼ���������������ص�����!!"NOR"\n\n",me,target);
        }
        me->start_busy(1);
        if( lv < 100 )
        function_improved("tengin",random(500));
        return 1;
}

