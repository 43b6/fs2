// fight.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	object obj, old_target;
        seteuid(getuid());
	if(!me->is_fighting())
            return notify_fail("ֻ��ս���в����á�\n");
          if(!me->query("sec_kee"))
                return notify_fail("�������û��������\n");
	if( !wizardp(me) && environment(me)->query("no_fight") )
		return notify_fail("�����ֹս����\n");

	if(!arg || !objectp(obj = present(arg, environment(me))))
		return notify_fail("���빥��˭��\n");

	if( !obj->is_character() )
		return notify_fail("�����һ�㣬�ǲ��������\n");


	if(wizardp(me)&&!wizardp(obj)&&wizhood(me)!="(manager)"&&wizhood(me)!="(admin)"&&wizhood(me)!="(arch)")
		return notify_fail("��ʦ���ܶ�����ʹ��������\n");

	if(obj==me)	return notify_fail("�㲻�ܹ����Լ���\n");
	SEC_KEE_D(me->query("sec_kee"))->kee_out(me,obj);
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
ָ���ʽ��usekee <Ŀ����>
 
˵���������ָ���������ʹ��������ս�����ܡ�
 
HELP
   );
   return 1;
}
