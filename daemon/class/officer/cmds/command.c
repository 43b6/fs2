// order.c

#include <skill.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	string type,name,ob_name;
	string st1;
	string file;
	object ob;

	// We might need to load new objects.
	seteuid(getuid());

	if( (int)me->query("sen") < 30 )
		return notify_fail("��ľ���̫��޷������\n");

	if( !arg
	||	sscanf(arg,"%s %s",ob_name,name)!=2)
		return notify_fail("ָ���ʽ��command <npc> <����>\n");
	arg = lower_case(arg);

	ob=present(ob_name,environment(me));
	if(!ob) return notify_fail("����û���ˡ�\n");
	if(!living(ob)) return notify_fail("���������� ?\n");
	if(ob->query("class")!="officer") return notify_fail("�㲻�ܶ��������\n");
	if(ob->query("officer_power")>me->query("officer_power"))
		return notify_fail("���Ȩ���������޷���������\n");
	if(ob->query("officer_power")/2>me->query("relation/"+ob->query("id")+"/value"))
		return notify_fail("������Ĺ�ϵ������\n");

	sscanf(name,"%s %s",name,st1);
	if( stringp( type = me->query_skill_mapped("be-officer"))) {
		if(file=SKILL_D(type)->command_file(name))
		{
			me->receive_damage("sen", 30);
			if(file_size(file+".c")<=0)
				return notify_fail("����ѧ������֮����û�������\n");
			file->do_command(me,ob,st1);
			return 1;
		}
		return notify_fail("����ѧ������֮����û�������\n");
	} else 
		return notify_fail("�������� enable ѡ��������⼼�ܡ�\n");

	return 1;
}

int help (object me)
{
        write(@HELP
ָ���ʽ��order <npc> <����>
˵�����Գ�͢�����´����

HELP
        );
        return 1;
}
