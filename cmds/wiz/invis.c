// invis

inherit F_CLEAN_UP;

#include <ansi.h>

int main(object me, string arg)
{

	if( me->query("env/invis")=="YES" )
        printf("���Ѿ�������������\n");
    else
    {
		me->set("env/invis","YES");
        message_vision(HIW + "$N�ó�һ�����涷��������һ�ף�����ʧ��Ӱ�ˣ�\n" + NOR, me);
    }
    return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : invis
 
���ָ�������ʦ��������
 
HELP
    );
    return 1;
}
