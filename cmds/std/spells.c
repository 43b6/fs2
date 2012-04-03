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
              	ob = present(arg, environment(me));
                if(wizardp(me)) {
		  if (!ob) ob = find_player(arg);
                  if (!ob) ob = find_living(arg);
		  if (!ob) ob = me;
                }
	  if( !ob && !wizardp(me) ) return notify_fail("����û����ˡ�\n");

	}

	if ( ob!=me && !wizardp(me) && !ob->is_apprentice_of(me) &&
		!ob->query("guild_master") &&
		!me->is_apprentice_of(ob) )
	{
	  return notify_fail("ֻ����ʦ����ʦͽ��ϵ�����ܲ쿴���˵ļ��ܡ�\n");
	}
	
	if( mode==1 )	
		ob = me->query_temp("pal");

	if(!ob->query("spells"))
		return notify_fail((ob==me ? "��" : ob->name())+"Ŀǰ��û��ѧ���κη�����\n");
	name=keys(ob->query("spells"));
	msg= ob->name()+"\nĿǰ����һ����-------------------------------------------------------------\n\n";
	for(i=0;i<sizeof(name);i++)
		msg+=sprintf("[ %3d]%-40s������ :%5d    - %10s -\n",
	ob->query("spells/"+name[i]+"/level"),
	to_chinese(name[i])+"("+name[i]+")",
	ob->query("spells/"+name[i]+"/learned"),
	get_status(ob->query("spells/"+name[i]+"/level")));
	
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
ָ���ʽ : spells
ָ��˵�� :
           ���ָ��������ѯ��ѧ��ķ�����
LONG);
	return 1;
}
