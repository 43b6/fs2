#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
  int value,k_level,unit=1,much;
  int kangfun=me->query("functions/kang-power/level");
  string msg;
  object ob;
  string *name;
  if( !target ) target = offensive_target(me);
  if(me->query_skill("haoforce",1) < 100 - ( me->query("con") + me->query("cps")*1.2 ) )
   return notify_fail("��ĺ����ķ��������죬�޷�����ָ�⡣\n");
  if( (string)me->query_skill_mapped("unarmed")!= "lungshan")
return notify_fail("�����\�����������ɽ��ѧ�����á�\n");
  if( me->query("family/family_name") != "��ɽ��" )
return notify_fail("�����\��ֻ����ɽ�ɵ����˲ſ���ʹ�á�\n");
  if(!(ob=me->query_temp("weapon")))
  {
   if(me->query_temp("secondary_weapon"))
    return notify_fail("��������ô�����վ�?\n");}
   if(ob=me->query_temp("weapon"))
    {
     if((string)ob->query("skill_type") != "unarmed")
      return   notify_fail("��������ô�����վ�?\n");
    }
   if(me->query("force")<400)
     return notify_fail("�������������\n");
   if(me->query("kee")<250)
     return notify_fail("�����������\n");
   if(!me->is_fighting(target))
    {
     tell_object(me,"�����\��Ψ��ս���в���ʹ�á�\n");
     return 0;
    }
    value = me->query("functions/kang_kee/level");
    value=value+((int)me->query_skill("haoforce",1) / 2);

    k_level = value;

    if(!target) return notify_fail("���Ҳ�����������!!\n");
   if ( (k_level > 110) && (me->query_skill("fire-kee",1) > 60))
   {
    message_vision(
       "[1m$N˫�ֺ�ʮ��ǰָȥ��ʹ�������\���еı�ɱ������--[1;31m���վ�[0m[1m--���\n
          ��ʱ��$N�����ջ�������������һ���������ҵ����������$N������\n
          $N��˫��ɢ�������ȵĹ�â��ָ��ۼ��������ŵ������Ĺ���\n\n",me,target);
    message_vision(
       "[1m$N���һ���������ġ������\������$n��ȥ��[1;31m\n
          -------------------------------------------------------------*
          -------------------------------------------------------------*
          -------------------------------------------------------------*
          -------------------------------------------------------------*
          -------------------------------------------------------------*
    [0m\n",me,target);
    me->add("kee",-70);
    me->add("force",-(k_level*4));
   }else
   if ( (k_level > 90) && (me->query_skill("fire-kee",1) > 30))
   {
    message_vision(
       "[1m$N��˫�Ƴɻ��Σ�ʹ�������\���еı�ɱ�����--[1;31m���վ�[0m[1m--���\n
          $N��ʮ���ڵ�����������˫��֮�ڣ�ֻ��$N��˫�Ʒ����������ȵ�����\n
          $N˫�Ʒ������ȣ����оۼ�һ�������Ĺ���\n\n",me,target);
    message_vision(
       "[1m$N˫����ǰһ�ƣ����еġ������\������$n�����[1;31m\n
          -------------------------------------------------------------*
          =============================================================***
          -------------------------------------------------------------*
    [0m\n",me,target);
    me->add("kee",-50);
    me->add("force",-(k_level*3));
   }else
   if ( k_level > 70)
   {
    message_vision(
       "[1m$N��������һָ����������\���еġ�[1;33m���վ�[0m[1m��\n
          $N��̫���Ĺ��߼��������У�һ���������ҵ��ھ��ӵ�������\n
          $Nȫ�������ȣ�ָ��ۼ�һ�������Ĺ���\n\n",me,target);
    message_vision(
       "[1m$N�˾�ָ�⣬һ���������\������$n��ȥ��[1;33m\n
                                                             * *
         =====================================================* *
                                                             * *
       [0m\n",me,target);
    me->add("kee",-40);
    me->add("force",-(k_level*2));
   }else
   {
    message_vision(
       "[1m$N�ͺ�һ��!!Ծ������ʹ�������\���еġ�[1;33m���վ�[0m[1m��\n
          $N�ڰ����̫����ɢ���������ҵ�������$N��������������\n
          �����ľۼ�ʹ$N��˫������ͨ�죬�������۹�â!!\n\n",me,target);
    message_vision(
       "[1m$N�˾����㣬���������\�����������$n��ȥ��[0m\n",me,target);
    me->add("kee",-30);
    me->add("force",-(k_level));
   }
if(80>random(100))
    {
     message_vision(
     "\n[1;31m$n��ܲ��������\�����У���ʱ�һ�����$nȫ��˻�����ϣ�\n[0m",me,target);
     message_vision( NOR,me);

if(me->query_temp("kang-power")&&me->query("id")==("master jen")) {
message_vision(HIW"$N���ϵġ�����������롮�����\�����ศ��������������ش���$n��"NOR,me,target);
message_vision("\n",me);
target->receive_wound("kee",4000);
}

     target->apply_condition("burn",random(15)+1);
     target->receive_wound("kee",(k_level*4)+200);
     COMBAT_D->report_status(target);
    }
   else
    {
     if (((string)target->query_skill_mapped("parry") == "fire-kee") &&
         (random(target->query_skill("fire-kee")) > 40))
      {
       message_vision(
"[1;37m\n$nʹ�����ջ�������֮�ռ����С�[1;33m--��--��--��--��--[1;37m��\n
ֻ��$N���\����$n����������ײ���䡫��һ���������ܷ�����������������[0m\n",me,target);
       message_vision( NOR,me);
      }
     else
     if (((string)target->query_skill_mapped("parry") == "snow-kee") &&
         (random(target->query_skill("snow-kee")) > 50))
      {
       message_vision(
      "[1;36m\n$nʹ��ѩ�Ժ���֮�ռ����С�[1;37m--��--��--ѩ--��--[1;36m��\n
ֻ��$N���\n����$n��������ײ���䡫��һ������ɢ��������[0m\n",me,target);
       message_vision( NOR,me);
      }
     else
      {
       message_vision(
       "[31m$n�˹��ܿ����������\����Ϯ��ֻ��$n���˿ڽ���һ�顣[0m\n",me,target);
       message_vision( NOR,me);
       target->apply_condition("burn",random(15)+1);
       COMBAT_D->report_status(target);
      }
    }
    message_vision(
    "�������\���������$N����������Ͻ��û���Ϣ��Ϣ\n",me,target);
    me->start_busy(1);
    if(me->query("functions/kang_kee/level") < 100)
    function_improved("kang_kee",random(me->query("max_force")/10));
    message_vision( NOR,me);
    return 1;
  }
