// snoop.c
// snoop ȡ����������, ���ǶԷ�Ҳ�ῴ���� snoop ��
// ����Է�����, ���� snoop....���ǶԷ�Υ��....
// ע��, �����Ȩ֪����ʦ�ļ���, ���������õ��ⲿ�ݹ���
// by wade (10/7/1995)

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob;
        me=this_player();
	seteuid(geteuid(me));
	if( !arg ) {
	  	if( objectp(ob = query_snooping(me)) )
			write("���������ڼ���" + ob->query("name") + "���յ���ѶϢ��\n");
		return 1;
	} else if( arg=="none" ) {
		if( objectp(ob = query_snooping(me)))
        	message_vision (HIW + "$Nֹͣ����$n���յ���ѶϢ��\n"+ NOR,me,ob);
		snoop(me,);
		write("Ok.\n");
		return 1;
	}

	ob = find_player(arg);
	if (!ob) ob = find_player(arg);
	if(!ob || (!ob->visible(ob))) return notify_fail("û������ˡ�\n");
        if (!interactive(ob))
           return notify_fail("���ܼ��������е�ʹ�������յ���ѶϢ��\n");
	if(wizhood(ob)=="(admin)"||wizhood(ob)=="(manager)")
		return notify_fail("�㲻����������\n");
	if( me==ob ) return notify_fail("���� snoop none ���������\n");
		
	snoop(me, ob);
	if( userp(ob) ) log_file("SNOOP_PLAYER",
		sprintf("%s(%s) snoops %s on %s.\n", me->name(1), geteuid(me), ob->name(1),
			ctime(time()) ) );
	write (HIW"�㿪ʼ����"+ob->name()+"���յ���ѶϢ��\n" + NOR);
	tell_object(ob, HIW + me->name(1) + "��ʼ���������յ���ѶϢ��\n" + NOR);

	return 1;
}

int help()
{
	write(@TEXT
ָ���ʽ��snoop [<ĳ��>|none]

    ��������ʹ������������ѶϢ��snoop none ��ȡ��������

    ע��: snoop ������������һ�������ʦ�������ģ�
          ����������ȡ������˽Ȩ�õģ��� snoop  ����֮ǰ���֪��Է�һ��
	  ����ץΥ����һ���ʦ, �����ֺ�������˽�ߣ��������ʵ�����

TEXT
	);
	return 1;
}
