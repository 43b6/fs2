// throw.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	object obj,ob;
	object target;
	string st1,st2;
	int re_value;
	int ob_value;
	if(!arg || sscanf(arg,"%s use %s",st1,st2)!=2 )
		return notify_fail("ָ���ʽ��bribe <��> use <��Ʒ>\n");
	if(!ob=present(st2,me))
		return notify_fail("�������û�����ֶ�����\n");
	if(me->is_fighting())
		return notify_fail("ս�����޷���¸��\n");

	if(!st1 || !objectp(obj = present(st1,environment(me))))
		return notify_fail("����û���ˡ�\n");

	if( !obj->is_character() )
		return notify_fail("�����һ�㣬�ǲ��������\n");

	if(wizardp(obj)) return notify_fail("��¸��ʦ ?\n");
	
	if(obj->query("class")!="officer")
		return notify_fail("��ֻ�ܻ�¸¸��͢���١�\n");
 
	message_vision(
	"$N�������ó�"+ob->name()+"����$n��\n",me,obj);
	message_vision(
	CYN "$N˵��������һ��С��˼����Ц�ɡ�\n" NOR,me);
	me->add("sen",-10);
	re_value=me->query("relation/"+obj->query("id")+"/value");
	if(ob->query("value")) ob_value=ob->query("value");
		else ob_value=ob->query("base_value");
 	if(obj->query("officer_att")!="good")
		if(ob_value<re_value*obj->query("max_officer_power")*5||(re_value<0&&ob_value<re_value*(-1)*obj->query("max_officer_power")*10))
		{
		message_vision(
		CYN "$n˵������ô���ƶ���Ҳ�������� !!\n" NOR,me,obj);
		message_vision(
		"$n��"+ob->name()+"����$N��\n",me,obj);
		if(re_value>0)
		me->add("relation/"+obj->query("id")+"/value",random(10)*(-1));
		else
		me->add("relation/"+obj->query("id")+"/value",random(3)*(-1));
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		me->add("office_exp",1);
		}
		else
		{
		message_vision(
		CYN "$nЦ������Ȼ"+me->name()+"������ô��������Ҳ�͹�����������ˡ�\n" NOR,me,obj);
		me->add("relation/"+obj->query("id")+"/value",1);
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		destruct(ob);
		me->add("office_exp",random(me->query("relation/"+obj->query("id")+"/value")*500));
		}
	else
	{
		message_vision(
		CYN "$N�ȵ�����������Ϊ���������������֮�� !!\n" NOR,obj);
		message_vision(
		"$n��"+ob->name()+"����$N��\n",me,obj);
		me->add("relation/"+obj->query("id")+"/value",random(10)*(-1));
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		me->add("office_exp",1);
	}
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
ָ���ʽ��bribe <��¸> use <��Ʒ>
 
˵�������ָ����������¸��͢���١�
 
HELP
   );
   return 1;
}
