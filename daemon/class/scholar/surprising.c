//��ʾ������.....һ����ɽ��
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int perform(object me, object target)
{
        string *ATTACK_MSG=({
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIY"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIR"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIY"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIG"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIG"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIR"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIW"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIC"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIM"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIC"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR,
WHT"              $N��Ȼ������˲������ƣ��漴���������ǡ�����������е�һʽ
                                  "BLINK+HIB"һ����ɽ�ӡ�֮����������"NOR""WHT"
      ֻ��$N�ɰٻ������������̣��漴���ܷ�Բ���･������һ������ɫ��â�������C�ֵ���˸�š�
      ����$n���ϼ��е�һ��Ī���ġ�ǿ��ġ����ɴݵ�ǿ��ѹ����¤����$n��Ӱ����!!\n"NOR
        });
        int action,range,sur,k;
        int force_cost;
        object weapon;
        weapon= me->query_temp("weapon");
        fun=me->query("functions/surprising/level");
        sur=(int)(me->query_skill("surprise-ten",1));
        if(fun<=35) k=2;
        if(fun>=36&&fun<=89) k=5;
        if(fun>=90) k=10;
          range = (me->query_skill("surprise-ten",1)+me->query_function("surprising"))/10;
        if( range > sizeof(ATTACK_MSG) )
          range = sizeof(ATTACK_MSG);
          action = random(range);
          //six = (me->query_skill("surprise-ten",1))/10;
          force_cost = 500;
        if( sur<=90 )
          return notify_fail("����ѧ�ľ���ʮʽδ��¯���ݼ֮���硣\n");
        if( !me->is_fighting(target) )
          return notify_fail("��ֻ����ս����ʹ����һ����ɽ�ӡ���\n");
        if( target == me )
          return notify_fail("���ܶԸ��Լ�ѽ!!\n");
        if( me->query("force") < 3000 )
          return notify_fail("�������������\n");
        if(weapon&&weapon->query("skill_type")!="unarmed")
          return notify_fail("'��˿'����ม�\n");
        if( !target )
          target = offensive_target(me);
        if(target->is_busy())
          return notify_fail("һ����ɽ���޷�����æ���е���\n");
/*��ʱ��������
      if(me->query("family/family_name")!="�μ�")
      return notify_fail("���ǶμҲ����á�\n");
*/
          message_vision("\n"+ATTACK_MSG[action]+"\n",me,target);
if(95>random(100))
        {
          message_vision(HIW"$n��$Nǿ�������������ס�ˣ�����¶����ʹ������飬���ζ�������!!!\n"NOR,me,target);
          target->start_busy(k);
            if ( (random(10) >9 ) && me->query("force_factor",1) > 9)
            {
          message_vision(HIR"$N�������������������������Ʈ�ݵĳ�$n�칥��ȥ!!!\n"NOR,me,target);
          me->set_temp("super",1);
            }
          if(me->query_function("surprising")<100)
            {
function_improved("surprising",random(500));
            }
        }
        else
        {
          message_vision("��ϧ��$n������..\n",me);
      if(me->query_function("surprising")<100)
            {
        function_improved("surprising",random(800));
            }
        }
        me->add("force",-force_cost);
        me->start_busy(1);
        return 1;
}
