#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
int value,k_level,unit=1,i,hart=150;
  int other;
  string msg;
  object ob,victim = target;
  string *name;
  if( !target ) target = offensive_target(me);
  if(!target) return notify_fail("���Ҳ�������!!\n");
  if((me->query_skill("snow-martial",1) < 50) || (me->query_skill("snowforce",1)<60) )
   return notify_fail("���ѩ����ѧ��ѩ���ķ��������죬�޷�������˪��\n");
  if( (string)me->query_skill_mapped("force")!= "snowforce")
   return notify_fail("ѩӰ��ָ����ʹ��ѩ���ķ����ܷ���������\n");
  if( me->query("family/family_name") != "ѩ����" )
   return notify_fail("ѩӰ��ָֻ��ѩ���ɵ����˲ſ���ʹ�á�\n");

  if(!(ob=me->query_temp("weapon")))
  {
   if(me->query_temp("secondary_weapon"))
    return notify_fail("���������ϵ���������ֹ��!!\n");}
   if(ob=me->query_temp("weapon"))
    {
     if((string)ob->query("skill_type") != "unarmed")
      return   notify_fail("��������ôʹ�û�ָ!!\n");
    }
   if(me->query("force")<500)
     return notify_fail("�������������\n");
   if(me->query("kee")<200)
     return notify_fail("�����������\n");
   if(!me->is_fighting(target))
    {
     tell_object(me,"ѩӰ��ָֻ����ս���в���ʹ�á�\n");
     return 0;
     }
   value = me->query("functions/ice-fingers/level");
   if ( value < 10 ) value = 10;
   if ( value > 50 ) value = 50;
   value = value / 10;
   for (i=0;i<value;i++)
    {
      switch (i)
      {
       case 0:
        message_vision(HIW"$Nʹ��ѩӰ��ָ֮��"NOR""CYN"ѩӰ��"HIW"��,����ָӰ������������$n��쭶�����\n"NOR, me, target);
        break;
       case 1:
        message_vision(HIW"$Nʹ��ѩӰ��ָ֮��"CYN"ѩ������"HIW"��,�������ơ�����������$n��Ϯ������\n"NOR, me, target);
        break;
       case 2:
        message_vision(HIW"$Nʹ��ѩӰ��ָ֮��"HIB"��ѩ����"HIW"��,��񺮾����޾���Ӱ��$n�񹥶�����\n"NOR, me, target);
        break;
       case 3:
        message_vision(HIW"$Nʹ��ѩӰ��ָ֮��"HIM"ѩ÷����"HIW"��,����÷��������������$n��ɨ������\n"NOR, me, target);
        break;
        case 4:
        message_vision(HIW"$Nʹ��ѩ�ð���֮��"RED"��ѩ��Ϯ"HIW"��,������Ӱ���޾�������$n���������\n"NOR, me, target);
        break;
      }
// ����ȫ������ by swy
        message_vision(MAG"$n��$N��ѩӰ��ָ׼ȷ������ҪѨ,$n���ϼ���������ɫ��ָ��\n"NOR, me, target);
        target->receive_damage("kee",hart);
        target->apply_condition("cold",random(15)+1);
        me->add("force",-40);
        COMBAT_D->report_status(target);
        hart = hart + (int)me->query("max_force")/100;
    }
    message_vision(HIR"$Nʹ��ѩӰ��ָ��!!�ھ���Ĺ����޷��ƶ���\n"NOR,me);
    me->start_busy(1);
    COMBAT_D->report_status(target, 1);

if(me->query("functions/ice-fingers/level") < 100)
{
function_improved("ice-fingers",random(me->query("max_force")/15+
me->query_skill("snow-martial")));
}
    message_vision( NOR,me);
    return 1;
}

