#ifdef WEATHER
// light
// �� wade ׫д
// Ҫ����������ϱ�����һ����: (int)light_up
// �ñ�����ֵ�ǿ��Ե������, ����Ǹ�ֵ, ����Զ��Ч
 
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
  int		light;
  object	ob, *myob;
 
  seteuid(getuid(me));
 
  if(!arg) return notify_fail("unlight <���>  <-- �� unlight torch\n");
  arg = lower_case(arg);

  if (!ob = present (arg, me)) return
    notify_fail ("������û������������\n");

  if (!ob->query("had_light"))
    return notify_fail (sprintf ("��%s%s��û�б�������\n",
      ob->query("unit"), ob->name()));

  message_vision("$NϨ����һ"+ob->query("unit")+ob->name()+"��\n", me);

  ob->delete("short");
  ob->delete("had_light");
  return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : unlight <���>
��    �� : unlight torch
ָ��˵�� : 
           ���ָ���������(��)Ϩ��ĳЩ�ض������
HELP
    );
    return 1;
}
#endif
