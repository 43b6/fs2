

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
  object room=environment(me);
  if( me->is_fighting() )
        return notify_fail("ս�����޷�ʹ�á�\n");
  if(room->query("no_transmit"))
	return notify_fail("������������������ƶ�\n");
  message_vision (HIY"$N����������һ˦��ʹ�����ع顱������\n"+
		HIW"ֻ��һ���������$N����ʷ�ȥ��\n"NOR,me);
  me->move("/open/tendo/room/t07");
  message_vision(
	HIW"һ����ƻ������£�$N��������������������\n"NOR,me);

  return 1;
}




