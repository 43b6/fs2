inherit ITEM;
#include <ansi.h>

void create()
{
	set_name("������",({"paper"}));
	set_weight(10);
	if(clonep())
		set_default_object(__FILE__);
	else
	{
		set("value",10);
		set("unit","��");
		set("long","
����һ��������������Խ���ǧ�ﴫ��(send)�ĸ�����ǩ��\n");
	}
	setup();
}

void init()
{
add_action("do_send","send");
add_action("do_sign","sign");
}

int do_send(string arg)
{
object me,ob,target;
int j;
	me=this_player();
	ob=this_object();
	if(!arg)
		return 0;
	if(ob->query_temp("paper_owner")!=me->query("id"))
		return notify_fail("���޷�ʹ���������ӡ�\n");
	if((int)ob->query_temp("paper_count_times") > 5)
		return notify_fail("�����룺ǩ�������Ѿ����ˡ�\n");
	for(j=1;j<7;j++)
		if(ob->query_temp("sign_id_"+j)==arg)
			return notify_fail("�Ѿ�ǩ��������޷��ٶ�ǩ��\n");		
	target = find_player(arg);
	if(!target)
		return notify_fail("����Ŀǰ�������ϡ�\n");
	if(me->query("id")==arg)
		return notify_fail("�������޷��Լ�ǩ��\n");
	message_vision(HIY"$N�����е��������ĸ���$n��\n"NOR,me,target);
	ob->set_temp("paper_send",arg);
	ob->set("long","
����һ����"+me->query("name")+"����������������

����д�ţ�

	�������Ϊ "+me->query("name")+" ���ʸ񴳡���а�����Ļ�

		��ǩ��(sign)��Ĵ�����\n
");
	ob->move(target);
	tell_object(target,HIR"\n\n���յ���һ����������\n"NOR);
return 1;
}
	
int do_sign(string arg)
{
object me,ob,target;
string owner,word;
int i,j,count;
	me=this_player();
	ob=this_object();
	owner=ob->query_temp("paper_owner");
	count=(int)ob->query_temp("paper_count");
	if(me->query("id")!=ob->query_temp("paper_send"))
		return notify_fail("���޷�ǩ�������������\n");
	if(arg!=me->query("id"))
		return notify_fail("��ǩ�������֡�\n");
	message_vision(HIW"$Nǩ�������������������漴����$N�����С�\n"NOR,me);
	target = find_player(owner);
	if(!target)
	{
		message_vision("�������ƺ��޷��ص����˵����ϣ�һ˲�䣬ȼ�������һ��ջ��ˡ�\n",me);
		destruct(ob);
		return 0;
	}
	ob->delete_temp("paper_send");
	ob->add_temp("paper_count_times",1);
	j=(int)ob->query_temp("paper_count_times");
	ob->set_temp("sign_name_"+j,me->query("name"));
	ob->set_temp("sign_id_"+j,me->query("id"));
	if(j==0)
		word = "\n";
	word = "ǩ���������£�\n";
	for(i=1;i<7;i++)
		if(ob->query_temp("sign_name_"+i))
			word = word + " "+ob->query_temp("sign_name_"+i)+"("+ob->query_temp("sign_id_"+i)+") \n";
	ob->set("long","
����һ��������������Խ���ǧ�ﴫ��(send)�ĸ�����ǩ��

Ŀǰ�У� "+ob->query_temp("paper_count_times")+" ��ͬ��ǩ��

"+word+"\n");

	ob->move(target);
	tell_object(target,HIY"�������ٶȵĻص�������С�\n"NOR);
return 1;
}