// reply.c

#include <ansi.h>
#include <net/dns.h>

inherit F_CLEAN_UP;

int help(object me);

void create() {seteuid(getuid());}

int main(object me, string arg)
{
	string target, mud;
	object obj;

	if( !arg || arg=="" )
		return notify_fail("��Ҫ�ش�ʲô��\n");

	if( !stringp(target = me->query_temp("reply")) )
		return notify_fail("�ղ�û���˺���˵������\n");

        target = lower_case (target);
	if( sscanf(target, "%s@%s", target, mud)==2 ) {
                write ("[test]: "+ target + "@" + mud + ": " + arg + "\n");
		GTELL->send_gtell(mud, target, me, arg);
		write("��·ѶϢ���ͳ�������Ҫ�Ժ���ܵõ���Ӧ��\n");
		return 1;
	}

	obj = find_player(target);
	if( !obj )
		return notify_fail("�ղź���˵�����������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
    if(target=="cgy"&&obj->query("env/no_tell"))
	    return notify_fail("�ղź���˵�����������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
     if ((obj->gage(me) || obj->query("env/no_tell")) && wiz_level(obj) > wiz_level(me))
                return notify_fail(obj->name()+"���ڲ����ܴ��š�\n");

	write( HBRED "����ǧ�ﴫ���ش�" + obj->name(1) + "��" + arg + "\n" NOR);
	tell_object(obj, sprintf( HBRED"%s��ǧ�ﴫ���ش��㣺%s\n"NOR,
		me->name(1), arg ));

	obj->set_temp("reply", me->query("id"));
	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : reply <ѶϢ>
ָ��˵�� :
           ���ָ�������ش�ղ��� tell ����˵����ʹ���ߡ�
����ָ�� :
           tell��say
HELP
	);
	return 1;
}
