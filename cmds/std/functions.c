#include <ansi.h>
inherit F_CLEAN_UP;

string *status = ({
        BLU "��ѧէ��" NOR,
        HIB "��ͨƤë" NOR,
        HIB "��������" NOR,
        HIB "������" NOR,
        HIB "�������" NOR,
        CYN "�������" NOR,
        CYN "����似" NOR,
        CYN "�����뻯" NOR,
        HIC "�Ƿ��켫" NOR,
        HIC "һ����ʦ" NOR,
        HIW "��ɲ�" NOR
	});
string get_status(int value);

varargs int main( object me, string arg, int mode )
{
	string msg;
	string *name;
	object ob;
	int i;
        if(!arg)
                ob = me;
        else{
		if(!wizardp(me))
			return notify_fail("ֻ����ʦ���ܲ鿴���ߵ����⹦��״����\n");
                ob = present(arg, environment(me));
                if (!ob) ob = find_player(arg);
                if (!ob) ob = find_living(arg);
		if (!ob) return notify_fail("��Ҫ�쿴˭�Ĺ�ϵ״̬ ?\n");
        }

	if( mode==1 )
		ob = me->query_temp("pal");

	if(!ob->query("functions"))
		return notify_fail((ob==me ? "��" : ob->name())+"Ŀǰ��û���κ����⹦�ܡ�\n");
	name=keys(ob->query("functions"));
	msg=(ob==me ? "��" : ob->name())+"Ŀǰ�����⹦�ܣ�\n\n";
	for(i=0;i<sizeof(name);i++)
		msg+=sprintf("  %-40s- %10s - %4d/%5d\n",
	to_chinese(name[i])+"("+name[i]+")",
	get_status(ob->query("functions/"+name[i]+"/level")),
	ob->query("functions/"+name[i]+"/level"),
	ob->query("functions/"+name[i]+"/learned"));
	msg+="\n";
	write(msg);
	return 1;
}
string get_status(int value)
{
        if(value > 100) return status[10];
        return status[value/10];
}
int help()
{
write(@LONG
ָ���ʽ : functions
ָ��˵�� :
           ���ָ��������ѯ������⹦�ܡ�
LONG);
	return 1;
}
