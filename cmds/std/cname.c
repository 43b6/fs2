// cname.c

#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;

  if (!arg) return notify_fail("��Ҫ���Լ�ȡʲô���֣�\n");
  if (arg=="������") return notify_fail("�㲻��ȡ�������");
  {
  }
//  tmp = remove_color (arg);
  if( strlen(arg) > 14 )
    return notify_fail("�������������̫�ŵĹ��Ų�����һ����һ��ġ�����һ��ġ�\n");
if( me->query("bank/coin") < 100000000 )
return notify_fail(" ��Ĵ���,�޷�֧������.\n");
/*
// Ӧ����ȡ���ºŰ�... edit by lys
	if (arg == "none") {
		me->delete("nickname");
		write ("��Ĵº�ȡ����.\n");
		return 1; 
	}
*/

  //      arg = trans_color(arg);

	me->set("name", arg );
	write("�㻨��һ����ʯ�Ĵ��۸���Ϊ"+me->name()+"\n");
	me->add("bank/coin", -100000000);
	tell_object(users(),HIW"��ϵͳ��"HIC+me->query("id")+HIW"�����������Ϊ"HIG+me->name()+"��\n"NOR);
	log_file("cname",sprintf("%s����Ϊ%s��%s\n",
        me->query("id"),me->query("name"),ctime(time())));
	return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : cname <�Լ�������>
ָ��˵�� :
           ���ָ���������Ϊ�Լ�ȡһ�����������֡�
һ����ķ�һ����ʯ,��ʹ����������Υ�߿���..

HELP
        );
        return 1;
}
