#include <ansi.h>
inherit F_GUILDCMDS;
string *status = ({
	HIR "��������" NOR,
	HIR "ˮ����" NOR,
	RED "�������" NOR,
	RED "ӡ�󲻺�" NOR,
	BLU "��̽��·" NOR,
	HIB "Щ΢����" NOR,
	HIB "��������" NOR,
	CYN "�����п�" NOR,
	CYN "����Ƶ��" NOR,
	HIC "��ϵ�Ƿ�" NOR,
	HIC "�Ǳ�Ѱ��" NOR,
	HIW "���ɸ���" NOR,
	});
string get_status(int value);
int main(object me,string arg)
{
	string msg;
	string *name;
	object ob;
	int i;
        if(!arg)
                ob = me;
        else{
		if(!wizardp(me))
			return notify_fail("ֻ����ʦ���ܲ鿴���ߵĹ�ϵ״����\n");
                ob = present(arg, environment(me));
                if (!ob) ob = find_player(arg);
                if (!ob) ob = find_living(arg);
		if (!ob) return notify_fail("��Ҫ�쿴˭�Ĺ�ϵ״̬ ?\n");
        }

	if(!ob->query("relation"))
		return notify_fail((ob==me ? "��":ob->name())+"��û�к��κι�Ա�����κι�ϵ��\n");
	name=keys(ob->query("relation"));
msg = (ob==me ? "��" : ob->name() ) + "Ŀǰ�͸�����Ա֮��Ĺ�ϵ��\n\n";
	for(i=0;i<sizeof(ob->query("relation"));i++)
		msg+=sprintf("  %-45s- %10s - (%d)\n",
	ob->query("relation/"+name[i]+"/name")+"("+name[i]+")",
	get_status(ob->query("relation/"+name[i]+"/value")),
	ob->query("relation/"+name[i]+"/value"));
	msg+="\n";
	write(msg);
	return 1;
}
string get_status(int value)
{
	if(value>-40&&value<70) return status[value/10+4];
	else if(value>=70) return status[11];
	else return status[0];
}
int help(object me)
{
  write(@HELP
ָ���ʽ�� relation

˵�������ָ��������Բ鿴���������Ա��Ĺ�ϵ��
HELP
  );	
  return 1;
}
