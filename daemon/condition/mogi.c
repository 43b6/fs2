// ħ��npc ʹ��֮ħ���涾
// ����condition ʮ�ֿ��£�����skill��ֹ�Ҽӳ�����ͬ��
// By Roger
#include <ansi.h>

int update_condition(object me, int duration)
{
  if( duration >= 30 )
  {
     tell_object(me,HIM"\n����֮����Ȼ��������ɲʱ����������ת���к�Ѫ���磡 \n"NOR);
     message("vision",me->name() + "������Ȼ���������º�Ѫʹ��ص��ڵ��ϰ����ţ�\n"NOR,
     environment(me), me);
     me->receive_wound("kee",1500);
     me->receive_damage("kee",1300);
        COMBAT_D->report_status(me, 1);
   }

  else if( duration >= 1 )
  {
     tell_object(me,HIM"\n����֮�������������Խ����ʹ������������������������������Խ�. \n"NOR);
     message("vision",me->name() + "�����跢��ͻȻ�³��˲��ٺڻ�Ѫˮ����ɫ��������֮�˸��ӲҰ��ˣ�\n"NOR,
     environment(me), me);
     me->receive_wound("kee",800);
     me->receive_damage("kee",400);
        COMBAT_D->report_status(me, 1);
   }
  if( duration < 1 )
  return 0;
  return 1;
}
