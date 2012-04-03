#include <ansi.h>
#define INTERMAIL "/data/mailo"

inherit F_CLEAN_UP;
 
int help (object);

void done_mail (object me, string who, string str)
{
  string	*msg;
  int		i;

  write_file (INTERMAIL, "#mailto: "+who+"\n");
  write_file (INTERMAIL, sprintf (@BASIC_MSG
--> ��! %s, ����һ��������·�ϵĶ�����Ϸվ������,
--> ��վλ�� telnet 140.122.77.123 4000, ��ӭ��ǰ���ι�, �������ɸ�
--> վ�ϵ� %s(%s) ������, �����Ҫ����, �����ŵĵ�һ��д:
--> #mailto: %s
BASIC_MSG
, who, me->name(), me->query ("id"),  me->query ("id")));

  msg = explode (str, "\n");
  for (i=0; i<sizeof (msg); i++)
    if (msg[i][0..7] == "#mailto:")
      msg[i] = ">"+msg[i];
  str = implode (msg, "\n");
  write_file (INTERMAIL, str);
  tell_object (me, "����, �������żĳ�ȥ��.\n");
}

int main(object me, string arg)
{
  seteuid(getuid(me));
 
  if (!arg) return help (me);

  write ("��������Ҫ�ĵ�����.\n");
  me->edit ( (: done_mail, me, arg :) );
  return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : email e-mail-address
ָ��˵�� :

  mud --> internet
  ================
  email jjchen@ice.ntnu.edu.tw  <-- �Ϳ�ʼ����༭ģʽ���� post һ��.

  internet --> mud
  ================
  ��Ȼ���� internet �ϣ��繤��վ�ʺ��£��� linux �¡�
  �����ڵ�һ��д�� #mailto: WHO  <-- WHO ���� mud �е� id����:
#mailto: wade                    <-- ����ӵ�һ��ʼЩม�
  �����������ڹ���վ�ʺ��£���������� mail ָ����ţ�
  Ҫ�ĵ� mud ͨͨ�Ǽĸ� jjchen@ice.ntnu.edu.tw���Ǿ��ǿ���Ĳ����������:
  mail jjchen@ice.ntnu.edu.tw    <-- ����㼴���Խ�����

�����ο� :
           post, mail(�뵽�ʾ�ʹ��)
HELP
    );
    return 1;
}
