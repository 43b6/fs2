#include <ansi.h>
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
        seteuid(getuid(me));
 
        if (me->query_temp("brief_mode")) {
          me->delete_temp("brief_mode");
          write ("��ѶϢ�Uʽ��\n");
        }
        else {
          me->set_temp("brief_mode",1);
          write ("��ѶϢ�Uʽ��\n");
        }
        return 1;
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : brief
ָ��˵�� :
           ���ָ����������Գ�ѶϢģʽ���ѶϢģʽ��ʾ���������Ķ�����
           ���Ǹ����أ����㴦�ڳ�ѶϢģʽʱ�����л�����ѶϢģʽ����֮
           ��Ȼ��Ҳ���ǻ��ڴ�����ģʽ֮���л���
HELP
    );
    return 1;
}
