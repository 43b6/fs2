// hp cmds
 
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
	object ob;
	mapping my;
	string status_desc="";
	 
	seteuid(getuid(me));
 
	if(!arg)
		ob = me;
	else if (wizardp(me)) {
		ob = present(arg, environment(me));
		if (!ob) ob = find_player(arg);
		if (!ob) ob = find_living(arg);
		if (!ob) return notify_fail("��Ҫ�쿴˭��״̬��\n");
        } else
                return notify_fail("ֻ����ʦ�ܲ쿴���˵�״̬��\n");


	my = ob->query_entire_dbase();

	printf(HIG+""+ob->name()+"Ŀǰ����������Ϊ"HIY"%d"HIG"��\n"HIC+
                      ""+ob->name()+"�Ѿ��õ�����������Ϊ"HIR"%d"HIC"��ʣ��"HIM"%d"HIC"������\n"HIW+
		      ""+ob->name()+"Ŀǰ��"HIB"%d"HIW"������..\n"NOR,
		my["max_standby"],
		my["t_standby"],
		my["max_standby"] - my["t_standby"],
		my["standby"],);
	
	return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : ch-stdby
ָ��˵�� : 
           ���ָ�������ʾ��(��)Ŀǰ�����ʹ��״��
   �������һ��Ŀǰӵ�е����������Ѿ�������
   ʹ������������..�õ���������������ʹ����
   ������..���ǵ��㻻ȡ����ʱ����ֵ�Ż�����
�����ο� :
          
HELP
    );
    return 1;
}
