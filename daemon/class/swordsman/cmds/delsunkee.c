#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me)
{
        string type,name,ob_name;
        object ob;
        seteuid(getuid());
        if(!me->query_temp("usesunsword")) return notify_fail("�㲻��Ҫɢ����\n");
        if(me->is_fighting() ) return notify_fail("ս�����޷�ɢ����\n");
        message_vision(HIC"$N���������ɽ��ڹ�...˲��������â��$N����ɢ����\n"NOR,me);

        me->delete_temp("usesunsword");
        return 1;
}

int help (object me)
{
        write(@HELP
�ɽ�������ս����������̫��������������������ʱ,��������ɢ�������ڶ���Ľ���ɢ������
ָ���ʽ��cmd delsunkee
HELP
        );
        return 1;
}
