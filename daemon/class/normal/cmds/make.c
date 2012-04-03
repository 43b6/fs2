// make.c

#include <skill.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	string type,name,ob_name;
	object ob;

	// We might need to load new objects.
	seteuid(getuid());
	if(me->is_fighting() ) return notify_fail("ս���в������춫����\n");
	if( (int)me->query("sen") < 30 )
		return notify_fail("��ľ���̫��������춫����\n");

	if( !arg
	||	sscanf(lower_case(arg),"%s %s",ob_name,name)!=2)
		return notify_fail("ָ���ʽ��make <����> <��Ʒ>\n");


	if( stringp(type = me->query_skill_mapped(ob_name))) {
		if(SKILL_D(type)->make(me,name)){
			if (me->is_fighting()) me->start_busy(1);
			me->recieve_wound("kee", 2);
			me->recieve_damage("sen", 10);
			return 1;
		}
		return 0;
	} else 
		return notify_fail("�������� enable ѡ��������⼼�ܡ�\n");

	return 1;
}

int help (object me)
{
        write(@HELP
ָ���ʽ��make <����> <��Ʒ>

HELP
        );
        return 1;
}
