#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) return 0;
tell_object(me,HIR
"��ĵ��˸������˿ڱ�������ʴ��ǣ����س�Ѫ��\n"NOR);
message("vision",HIR+me->name()+"���˷������ף���ʱȫ�������������ڵأ�\n"NOR,environment(me),me);
if(me->is_fighting()) me->start_busy(1);
me->receive_wound("kee",250);
me->apply_condition("blade",duration-1);
if(duration<1) return 0;
return 1;
}
