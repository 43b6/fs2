#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun,range,action,force_cost,k;
string *ATTACK_MSG=({
BLU"$N�ֶ����鿵��Ϊ֮��������˫鮡�, ��������, �鶯֮ò����$n��\n"NOR,
RED"$N��д����֮�����ִ�䡷, �����, ����̶�, һ�ɽ�Ӳ֮������$n��\n"NOR,
YEL"$N�ֵ㵤��, ������٥֮���ݽ��塷, ����һ��֮��, ��Ȼһ������ֱ��$n��\n"NOR,
GRN"$N��ص��ٳ�ŷ��ѯ֮���ųɹ���Ȫ����, �ñʽ��ַ����Ͻ�, ����$n֮һ��һ����\n"NOR,
CYN"$N�����������ͤ����, ��������֮��, ���ʶ���, ����������$nȫ��\n"NOR,
HIB"$Nд����κ����ʯ�ߡ�κ��ء�, �־�����, ��������, ��ɽ��֮��, ֱѹ$n��ȥ��\n"NOR,
HIR"$N�����Ʒ�, ˫��ͬʱ���������ࡱ,���౦�ӱ������������ձ���, �������ͷɶ�������Ʈ��, ǰ��֮��Χ��ס$n��\n"NOR,
HIY"$N��ļ����ʥ���Ҿ�֮��ʮ������, �������ݡ��ķɶ��۳�֮��, ������Ȥһ�ʲ��������㽫$n������ס��\n"NOR,
HIG"$N������д������֮����ʾ��, ׿������֮��, һ�¿���֮д��, ׼ȷ����ϵ��$n��ǰ��Ѩ֮�С�\n"NOR,
HIC"$N�ٷ�������������, ��ͷ��β, ��Բת��, ÿһƲ��ÿһ�����׼$n�����Ѩ��\n"NOR,
HIC"$N���顶����׭��, ����Ӳ��, ����һ���ο�ʯ��ѹ��$n����, �޷�������\n"NOR,
HIW"$N����һ��, ���ֳ�һ��ׯ�����µ����÷��, ���ƻ��¡���Զ����, �����ܽ��ġ�֮�����ѽ�$n���ν��ơ�\n"NOR,
HIW"$N����ͻȻһ��, �����̱�, ��������֮��, ��Ȼ��ʧ���Ѿ�֮Զ�š��׹�������, ��������$n�����Ѩ��\n"NOR
});
int sp_perform(object me);//��ȫ�壬���Բ��ô�target
int perform(object me, object target)
{
        int six;
        object weapon;
        weapon= me->query_temp("weapon");
        fun=me->query("functions/handwriting/level");
        if(fun<=35) k=2;
        if(fun>=36&&fun<=70) k=3;
        if(fun>=71) k=4;
        range = me->query_skill("six-fingers",1)+me->query_skill("literate",1)+me->query("functions/handwriting/level")/15;
        if( range > sizeof(ATTACK_MSG) )
          range = sizeof(ATTACK_MSG);
        action = random(range);
        six = (me->query_skill("six-fingers",1))/10;
        force_cost = 30;
        if( !me->query_skill("literate") )
          return notify_fail("���ѧʶ���㡣\n");
        if( !me->is_fighting(target) )
          return notify_fail("��ֻ����ս����ʹ���������Ѩ����\n");
        if(target)
         if( target == me )
          return notify_fail("���ܶԸ��Լ�ѽ!!\n");
        if( me->query("force") < 100 )
          return notify_fail("�������������\n");
        if(weapon&&weapon->query("skill_type")!="stabber"&&weapon->query("skill_type")!="unarmed")
          return notify_fail("'��˿'����ม�\n");
        if(me->query("family/family_name")!="�μ�")
          return notify_fail("���ǶμҲ����á�\n");
//�����Ѩ���Ժ�ɼ�ǿ���� by bss
        if(me->query("marks/handwriting") && //��������Ѩ
           me->query("marks/linpo-steps") && //����貨΢��
           (me->query_skill_mapped("dodge") == "linpo-steps") && //ʹ���貨΢��
           fun >= 100 ) //fun 100����
           return sp_perform(me);
        if( !target )
          target = offensive_target(me);
        if(!target) return notify_fail("�����Ǿ�����ҵĹ�ϵ,�㾹Ȼ�Ҳ�������!!\n");
        if(target->is_busy())
          return notify_fail("�����Ѩ�޷�������æ�ҵ���\n");
        message_vision("\n"+ATTACK_MSG[action]+"\n",me,target);
        if(80>random(100))
        {
          message_vision(HIW"$N�ɹ��Ľ�$n������ס��!!!\n"NOR,me,target);
          target->start_busy(k);
          if(me->query("functions/handwriting/level")>=100 && 60 > random(100)){
            target->apply_condition("blockade",3);
            message_vision(HIR"$Nʩչһ��ָ�еĵ�Ѩ�������ֵ���$n�����д�Ѩ��\n"NOR,me,target);
          }
          if ( (random(10) >8 ) && me->query("force_factor",1) > 9)
          {
            message_vision(HIR"$N��������ʧ , ����������$n�񹥶�ȥ!!!\n"NOR,me,target);
            me->set_temp("super",1);
          }
          if(me->query_function("handwriting")<100)
          {
            function_improved("handwriting",random(800));
          }
        }
        else
        {
          message_vision("��ϧ$Nʧ����..\n",me);
          if(me->query_function("handwriting")<100)
          {
            function_improved("handwriting",random(500));
          }
        }
        me->add("force",-force_cost);
        me->start_busy(1);
        return 1;
}
int sp_perform(object me)
{
    int level;
    int i,flag,chance;
    object *enemy;

    level=(int)((fun-100)/10)+1;
    if(level > 4) level=4;

    enemy=me->query_enemy();
    if(sizeof(enemy) < 1)
      return notify_fail("�����Ǿ�����ҵĹ�ϵ,�㾹Ȼ�Ҳ�������!!\n");
    if(sizeof(enemy) < level) level=sizeof(enemy);
    flag=0;
    for(i=0;i<level;i++)
    {
      if(!enemy[i]) continue;
      if(environment(me) != environment(enemy[i])) continue;
      flag++;
      action=random(range);
      message_vision("\n"HIY"$N"HIY"ʩչ"HIC"���貨΢����"HIY"���߱�ȫ������$n"HIY"ʩչ�����Ѩ֮����\n"NOR,me,enemy[i]);
      message_vision(ATTACK_MSG[action]+"\n",me,enemy[i]);
      if(80>random(100))
      {
        message_vision(HIW"$N�ɹ��Ľ�$n������ס��!!!\n"NOR,me,enemy[i]);
        enemy[i]->start_busy(k);
        if(me->query("functions/handwriting/level")>=100 && 60 > random(100))
        {
          enemy[i]->apply_condition("blockade",3);
          message_vision(HIR"$Nʩչһ��ָ�еĵ�Ѩ�������ֵ���$n�����д�Ѩ��\n"NOR,me,enemy[i]);
        }
        chance=10;
        if(fun == 150) chance=4;
        else if(fun >= 140) chance=6;
        else chance=8;
        if ( ( random(10) > chance ) && me->query("force_factor",1) > 9)
        {
          message_vision(HIR"$N��������ʧ , ����������$n�񹥶�ȥ!!!\n"NOR,me,enemy[i]);
          me->set_temp("super",1);
          COMBAT_D->do_attack(me,enemy[i],me->query_temp("weapon"));
        }
        if(me->query("functions/handwriting/level")<150)
        {
          function_improved("handwriting",random(1000));
        }
      }
      else
      {
        message_vision("��ϧ$Nʧ����..\n",me);
      }
    }
    if(!flag)
      return notify_fail("�����Ǿ�����ҵĹ�ϵ,�㾹Ȼ�Ҳ�������!!\n");
    else
    {
      me->add("force",-(30*flag));
      me->start_busy(1);
    }
    return 1;
}
