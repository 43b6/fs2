// time.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	write("������" + NATURE_D->game_time() + "��\n");
	return 1;
}

int help(object me)
{
     write(@HELP
ָ���ʽ : time
ָ��˵�� :
           ���ָ������(��)֪�����ڵĿ���ռ�ʱ����
�����ο� :
           date��uptime
HELP
    );
    return 1;
}
