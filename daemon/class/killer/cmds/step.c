// �ֹ���Ӱ�� ֮ �� Ӱ
// ��һ��command�����ṩ��Ҿ����Ƿ�������Ӱ�����Ƿֹ�
// ���Բ�����ȥ�۵���ҵ��κζ�����
// һ�����Ļ����º����
// ��Ϊ��ϵͳ����Ӱ����ҵ�expȡ��
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        int i;
        
        if( !arg )
             return notify_fail("ָ���ʽ��cmd step shadow/share/none \n");
        
   if (arg=="none")
   {
        	if (me->query_temp("step-shadow"))
        	{
        		me->delete_temp("step-shadow");
        		return notify_fail("���Ѿ�ֹͣʹ�û�Ӱ��\n");
	        	}
        		if (me->query_temp("step-share"))
	        	{
        			me->delete_temp("step-share");
        			return notify_fail("���Ѿ�ֹͣʹ�÷ֹ���\n");
	        	}
        		return notify_fail("����������û��ʹ����\n");
       }
        if (arg=="shadow")
        {
             if (!me->query("dark-steps/shadow/enable"))
             	return notify_fail("�����û��ѧ����Ӱ��\n");
             if (me->query_temp("step-shadow"))
                 return notify_fail("���Ѿ�ʹ���˻�Ӱ��\n");
             if (me->query_temp("step-share") ||  !me->query_temp("step-shadow"))
             {
                 message_vision(HIC"$NĬ�˻�Ӱ���Ĳ���......��\n"NOR,me);
                 me->set_temp("step-shadow",1);
                 me->delete_temp("step-share",1);
                 return notify_fail("�ֹ�����Ч����ʧȥ\n");
             }
        }
        if (arg=="share")
        {
             if (!me->query("dark-steps/share/enable"))
             	return notify_fail("�����û��ѧ���ֹ���\n");
             if (me->query_temp("step-share"))
                 return notify_fail("���Ѿ�ʹ�÷ֹ���\n");
             if (me->query_temp("step-shadow")|| !me->query_temp("step-share"))
             {
                 message_vision(HIC"$NĬ�˷ֹ����Ĳ���......��\n"NOR,me);
                 me->set_temp("step-share",1);
                 me->delete_temp("step-shadow",1);
                 return notify_fail("��Ӱ����Ч����ʧȥ\n");
             }
       }
       return 0;
}

int help(object me)
{
    write(@HELP
 
ָ���ʽ�� cmd step shadow/share/none
 
˵��������ʹ�÷ֹ���Ӱ���Ļ�Ӱ�����Ƿֹ���
      
HELP
);
     return 1;
}

