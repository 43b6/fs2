// jail.c
#include <ansi.h>
#define JAIL_ROOM "/open/wiz/jail.c"

int main(object me, string arg)
{
	object ob;
	string player,reason;
	int days;

	//seteuid(getuid());

	if (!arg) return notify_fail("<Syntax>: jail <ʹ����id> <ʱ��> because <ԭ��>\n");

	if( sscanf(arg, "%s %d because %s", player, days, reason)!=3 ) {
		return notify_fail("<Syntax>: jail <ʹ����id> <ʱ��> because <ԭ��>\n");
	}
	if (days<=0) days=1;

	if ( ! (ob = find_player(player)) )
		return notify_fail("��... ���������?\n");
	tell_room(environment(ob),"��������һֻ���ְ�"+
		(string)ob->query("name")+"ץ������, Ȼ�󲻼���.\n", ob);
	tell_object(ob,"һֻ�ְ���ץ������, ����ǰһ���....\n");
	ob->move(JAIL_ROOM);
	ob->set("startroom", base_name(environment(ob)));
	message("system",HIY + "\t\t"+(string)ob->query("name")+" ��Ϊ "+
		reason + " �� "+
		(string)me->query("name")+" ץȥ�ص����ι�"+days+"��\n" NOR,users());
	log_file("JAIL",sprintf("%s ��Ϊ %s �� %s(%s) %d�� ��%s\n",
	me->name(1), reason,ob->name(1), geteuid(ob), days, ctime(time()) ) );

        ob->set("tmp_title", ob->query("title"));
       ob->set("title",HIG"����"HIR"["HIW+reason+HIR"]"HIG"�ķ���"NOR);
	tell_object(me, "���"+(string)ob->query("name")+"ץ�����ι�����.\n");
	tell_object(ob,".... ����ʱ������"+(string)me->query("name")+
		"����ص�����.\n");
	tell_room(environment(ob),(string)ob->query("name")+"ͻȻ����"+
		"������ǰ\n",({me,ob}));
	//ob->set("out_jail_time",ob->query("mud_age")+days*60*1);//һ��86400��
	ob->set("jail_time",ob->query("mud_age")+days*60*60*24);//һ��86400��
	ob->save();
	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ��jail <ʹ����id> <ʱ��> because <ԭ��>

�Ѳ��Ե� user ��������
HELP
	);
	return 1;
}
