
// by airke
#include <ansi.h>
inherit F_SPELL;

void create() { seteuid(getuid());}
int conjure(object me, object target)
{
  object light;
  if( !me->query_spell("lightfire") )
       return 0;
  if( me->query("atman") < 3 )
       return notify_fail ("��ķ�������!!\n");
  me->add("atman",-3);
  light = new("/daemon/class/taoist/gmagic/obj/lightfire");
  light->move(me);
  message_vision ("$N��ָһ�ȣ������һö�ǹ�֮��Ʈ�ڿ��С�\n",me);
  return 1;
}

