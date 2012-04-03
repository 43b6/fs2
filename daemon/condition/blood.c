#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
    if (me->query("max_force") < 400)
    { //force more high have differnce
       me->receive_wound("kee",55-me->query_skill("force",1)/20);
       me->receive_wound("sen",25-me->query_skill("spell",1)/20);
       me->receive_wound("gin",30-me->query_skill("magic",1)/20);
       me->start_busy(3);
       me->apply_condition("blood",duration-1);
       tell_object(me,HIM "�����˺�Ѫ����֮��������΢������е�ȫ����񾭶������\n" NOR);
       message("vision",HIM+me->name()+"�����ٻ������������˺�Ѫ����֮��\n" NOR,environment(me),me);
       if( duration < 1 ) return 0;
	return 1;
    }
    if (me->query("max_force") < 1000)
    { //force more high have differnce
       me->receive_wound("kee",50-me->query_skill("force",1)/20);
       me->receive_wound("sen",20-me->query_skill("spell",1)/20);
       me->receive_wound("gin",25-me->query_skill("magic",1)/20);
       me->start_busy(2);
       me->apply_condition("blood",duration-1);
       tell_object(me,HIM "������ѹ��һ���ݺ�Ѫ���붾�ԣ����Ըе����Ե�ǿ��\n" NOR);
       message("vision",HIR+me->name()+"�����ٻ������������˺�Ѫ����֮��\n" NOR,environment(me),me);
       if( duration < 1 ) return 0;
	return 1;
    }
    if (me->query("max_force") < 2000)
    { //force more high have differnce
       me->receive_wound("kee",45-me->query_skill("force",1)/20);
       me->receive_wound("sen",20-me->query_skill("spell",1)/20);
       me->receive_wound("gin",25-me->query_skill("magic",1)/20);
       me->start_busy(2);
       me->apply_condition("blood",duration-1);
       tell_object(me,HIY "�㿿����ѹ�Ʋ��ֵ����붾�ԣ�����������ʴ���������\n" NOR);
       message("vision",HIM+me->name()+"�����ٻ������������˺�Ѫ����֮��\n" NOR,environment(me),me);
       if( duration < 1 ) return 0;
	return 1;
    }
    if (me->query("max_force") < 5000)
    { //force more high have differnce
       me->receive_wound("kee",40-me->query_skill("force",1)/20);
       me->receive_wound("sen",20-me->query_skill("spell",1)/20);
       me->receive_wound("gin",25-me->query_skill("magic",1)/20);
       me->start_busy(1);         //force is much so busy 1
       me->apply_condition("blood",duration-1);
       tell_object(me,HIG "�㿿���������ѹ�ƺ�Ѫ����֮�������������ܵ�������˺�\n" NOR);
       message("vision",HIM+me->name()+"�����ٻ������������˺�Ѫ����֮��\n" NOR,environment(me),me);
       if( duration < 1 ) return 0;
	return 1;
    }
//mean force point more than 5000
      me->receive_wound("kee",35-me->query_skill("force",1)/20);
      me->receive_wound("sen",15-me->query_skill("spell",1)/20);
      me->receive_wound("gin",20-me->query_skill("magic",1)/20);
      me->start_busy(1);
      me->apply_condition("blood",duration-1);
      tell_object(me,HIB"���Ծ��˵�����ѹ������֮���������ܵ����Ե�ǣ��\n" NOR);
      message("vision",HIM+me->name()+"�����ٻ������������˺�Ѫ����֮��\n" NOR,environment(me),me);
      if( duration < 1 ) return 0;
	return 1;
}

