//harass.c ������Ҫ����ҷ��Ⱥ��ģ����ĸ�����Ҫ��ȥ�����ⷽ�棬��ӭ��
//
//���������¼�����������ѶϢ��
//
//by wade@FS 89/10/26

inherit F_CLEAN_UP;
int help (object);

int main(object me, string str)
{
  if (!str)
    return (help (me));

  if (str == "stop") {
    me->delete_temp ("��¼");
  }
  else {
    me->set_temp("��¼����", 0);
    me->set_temp("��¼", str);
  }
  return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : harass ����|stop

	���ָ�������ʦ��¼��������������ѶϢ��
	�������¼�� "/log/harass/����"
	Ҫֹͣ����  harass stop
	ע�⣺����ɼ�¼����������⡣
	      �������������趨��
		#define HARASS 100	<-- 100 ��

HELP
    );
    return 1;
}
