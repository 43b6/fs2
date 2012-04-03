// finger.c
#include <ansi.h>
 
#define INFO "/data/info/"
inherit F_CLEAN_UP;
 
void create()
{
        seteuid(getuid());
}
 
int main(object me,string arg)
{
string msg;
 
  if (arg) arg = lower_case(arg);
 
  if (wizardp (me)) {
    if( !arg )
      me->start_more( FINGER_D->finger_all() );
    else {
      msg = FINGER_D->finger_user(arg);
      me->start_more(msg);
    }
  }
  else {
        if( !arg ) {
                if( (int)me->query("sen") < 30 )
                        return notify_fail("��ľ����޷����С�\n");
                me->receive_damage("sen",30);
                write( FINGER_D->finger_all() );
        } else {
                if( (int)me->query("sen") < 15 )
                        return notify_fail("��ľ����޷����С�\n");
                me->receive_damage("sen",15);
                write( FINGER_D->finger_user(arg) );
        }
  }
        return 1;
}
 
int help(object me)
{
  write(@HELP
ָ���ʽ : finger [ʹ��������]
ָ��˵�� :
           ���ָ����û��ָ��ʹ��������������ʾ������
         ����������ҵ��������ϡ���֮�������ʾ�й�ĳ����
         �ҵ����ߣ�Ȩ�޵����ϡ�
�����ο� :
           who
HELP
    );
    return 1;
}
