#ifdef WEATHER
// light
// �� wade ׫д
// Ҫ����������ϱ�����һ����: (int)light_up
// �ñ�����ֵ�ǿ��Ե������, ����Ǹ�ֵ, ����Զ��Ч
 
#include <ansi.h>
 
int main(object me, string arg)
{
  object	*light;
  object	ob;
  string	unit;
 
  seteuid(getuid(me));
 
  if(!arg) return notify_fail("light <���>  <-- �� light torch\n");

  arg = lower_case(arg);
  if (!ob = present (arg, me))
    return notify_fail("������û������������\n");
    if ( ob->query("had_light") )
    return notify_fail("���Ѿ������ˡ�\n");

  if (!ob->query("light_up"))
    return notify_fail ("���ʲô��.\n");

  unit = ob->query("unit");
  if (!unit) ob->set("unit", unit="��");
  message_vision("$N����һ"+unit+ob->name()+"��\n", me);

  ob->set("short", sprintf ("�����ŵ�%s(%s)",ob->name(),ob->query("id")));
  ob->set("had_light",1);
  return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : light <���>
ָ��˵�� :
           ���ָ���������(��)������ѡ�
��    �� : light torch
�����ο� :
           unlight
HELP
    );
    return 1;
}
#endif
