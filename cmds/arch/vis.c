// vis

inherit F_CLEAN_UP;

#include <ansi.h>

int main(object me)
{

	if( me->query("env/invis") )
  {
		me->delete("env/invis");
        message_vision(HIW + "$NͻȻ�ӿ��������˳�����\n" + NOR, me);
  } else
        printf("�㲢û�д������¡�\n");
  return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : vis
 
���ָ�������ʦ��������
 
HELP
    );
    return 1;
}
