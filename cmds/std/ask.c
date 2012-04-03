// ask.c

#include <ansi.h>
inherit F_CLEAN_UP;

string *msg_dunno = ({
	"$nҡҡͷ��˵����û��˵����\n",
	"$n�����۾�����$N����Ȼ��֪��$P��˵ʲô��\n",
	"$n�����ʼ磬�ܱ�Ǹ��˵���޿ɷ�档\n",
	"$n˵������....���ҿɲ��������������ʱ��˰ɡ�\n",
	"$n����һ�����˵�����Բ������ʵ�����ʵ��û��ӡ��\n"
});

int main(object me, string arg)
{
	string dest, topic, msg;
	object ob;
	mapping inquiry;

	seteuid(getuid());

	if( !arg || sscanf(arg, "%s about %s", dest, topic)!=2 )
		return notify_fail("��Ҫ��˭ʲô�£�\n");
	dest = lower_case(dest);

	if( !objectp(ob = present(dest, environment(me))) )
		return notify_fail("����û������ˡ�\n");

	if( !ob->is_character() )
		return notify_fail ("�������"+ob->name()+"������....\n");
	if( ob->query("no_answer") )
		return 0;

	if (!ob->query("can_speak"))
		return notify_fail ("���ʻ��Ķ�����Ȼ��������Ļ�.\n");

	if( userp(ob) ) return 1;

	if( !living(ob) ) {
		message_vision(dest+"���Ǻ���Ȼ�ģ�$n���ڵ�״��û�а취��$N�κδ𸲡�\n",
			me, ob);
		return 1;
	}

	// by babe ���� "" �㲻˵��
	if( stringp( msg = ob->query("inquiry/" + topic ) ) )
		if( msg=="" )
			return 1;
		else {
       	        	message_vision( CYN "$n˵����" + msg + "\n" NOR, me, ob);
			return 1;
		}

	message_vision( CYN+msg_dunno[random(sizeof(msg_dunno))]+NOR, me, ob);
	return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ: ask <someone> about <something>
ָ��˵�� :
           ���ָ���ڽ���ʱ����Ҫ, ͨ��������ɴ�һָ�����
         ��ý�һ������Ѷ��
HELP
   );
   return 1;
}
