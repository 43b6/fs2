// by swy ���� mk-blade
#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) return 0;
tell_object(me , HIW"��ġ�"HIR"Ѫ������"HIW"����Ѹ�����ӱ���ȫ��\n" NOR);
message("vision",HIC+me->name()+"ȫ���졮"HIR"Ѫ������"HIC"��ɢ��ȫ����Բʮ�ﶼ¤����Ѫ��֮�¡�\n"NOR,environment(me),me);
me->apply_condition("bloodcloth",duration-1);
if (duration < 1) return 0;
return 1;
}
