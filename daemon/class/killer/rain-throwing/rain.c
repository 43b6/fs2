inherit SSERVER;
#include <ansi.h>
int perform(object me, object target)
{
       string msg;
       int ski_value, kee_lv, bellpower, max_lv;
       ski_value= random(me->query_skill("rain-throwing",1));
       max_lv=me->query_skill("rain-throwing",1);
       bellpower= me->query("bellicosity")/5;
// func_rules By Swy
       if(bellpower > 1000) bellpower=1000;
       kee_lv=me->query_skill("rain-throwing",1)+bellpower;

        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("����ʽֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if( me->query_skill_mapped("throwing")!="rain-throwing" )
         return notify_fail("��û��װ�������ꡣ \n");
   if( me->query_skill("rain-throwing",1)<20 )
         return notify_fail("��İ����꼼�ɲ��㡣 \n");
   if( me->query_skill("throwing",1)<10 )
         return notify_fail("��İ���׼�Ȳ��á� \n");
   if(me->query("force")<60)
         return notify_fail("�������������\n");
   if( target->is_busy() )
      return notify_fail(target->name() + "Ϊ�˶�������ذ���,Ŀǰ���Թ˲�Ͼ!\n");

 msg ="          ֻ��$N���Ϸ���һ��ǿ���ɱ��,ȫ�����൭�Ĺ�â��\n
 $N�����൭�Ĺ�â�𽥵�����˫����˫����ȥ,��˫�����γ���������ɫ�Ĺ�Ȧ��\n
              $Nٿ�ش��һ��������ʽ��\n\n";

     if( ski_value == random(max_lv)){
     msg += "����ɱ�� ��ħѪ��ɱ��\n\n$n�⵽ǰ��δ�еĴ����\n";
     target->add("kee",-250-kee_lv);
     me->add("force",-50);  }
     
    else if( ski_value < 12 ){
      msg +="$N���ۼ���ɱ��������,�Ե��˺���Ӱ�졣\n";
      me->add("force",-50); }

    else if( ski_value <  40 ){
     msg += "��һ�� ��ɱ�����ޡ�\n\n$n��$N���˸����ֲ���,����һ��С�ˣ�\n";
     target->add("kee",-20-kee_lv);
     me->add("force",-50);    }
    
    else if( ski_value <  60 ){
     msg += "�ڶ��� �������˷桯\n\n$n�����в���,����һЩ���ˣ�\n";
     target->add("kee",-60-kee_lv);
     me->add("force",-50);    }

     else  if( ski_value < 80){
     msg += "������ ��Ѫ��׷ɡ�\n\n$n��ʮ֮�˾ŵĹⵯ������,�ܵ����صĴ��ˡ�\n";
     target->add("kee",-100-kee_lv);
     me->add("force",-50);  }

    else                    {
     msg += "������ ��ħ����⡯\n\n$n�޷����,�����еĹⵯ����,�ܵ��޷����Ƶ��˺���\n";
     target->add("kee",-150-kee_lv);
     me->add("force",-50);  }
     message_vision(msg, me, target);
     me->start_busy(1);
        return 1;
}
