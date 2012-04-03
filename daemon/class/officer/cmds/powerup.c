// powerup.c

#include <ansi.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

string *report = ({
	"ְ���Ժ��������ã�������ġ�\n",
	"Ϊ�����������ּ��ѡ�\n",
	"��ѧԨ����������������\n",
	});

string *down = ({
	"��ʧһ�ͣ���δ�������ô�һ�ˣ��ݻ����꣬�������˼��\n",
	"΢����Ϊ��������ѣ��������ᣬ����δ�㣬��������˼��\n",
	"΢����Ϊ���������ᣬ�����Ե������Ρ�\n",
	"��΢����֪�����˲����紫�Ű�ã��������˼��\n",
	});
int main(object me, string arg)
{
	object ob;
	string msg;
	int th;
	int i,power,count=0;
	int too,max_power;
	string *name;

	if(!arg||sscanf(arg,"by %s",arg)!=1)
		return notify_fail("��ʽ��powerup by <officer>\n");

	if(!objectp(ob = present(arg, environment(me))) )
		return notify_fail("����û������ˡ�\n");
        
        if( me->query("sen") < 50)
                return notify_fail("������㡣\n");
	if(!living(ob)||ob->query("class")!="officer")
		return notify_fail("��ֻ���볯͢��Ա��������Ȩ����\n");

	if(userp(ob)&&ob->query("no_power")!=1) return notify_fail("����Ը���㡣\n");

	name=keys(me->query("relation"));
	for(i=0;i<sizeof(name);i++)
		count=count+me->query("relation/"+name[i]+"/value")*me->query("relation/"+name[i]+"/power");
	count+count/2;
	power=count/200+me->query("office_exp")/20000;
	max_power = me->query("max_officer_power");
        if(power==max_power || max_power > 50000)
		return notify_fail("���Ȩ���Ѵ����ޡ�\n");
	me->add("sen",-50);
	message_vision(
	CYN "$N˵����$n���ˣ��ܷ�Ϊ�¹��ڻ�����ǰ���Լ��� ?\n",me,ob);
	if(me->query("relation/"+ob->query("id")+"/value")+25<ob->query("officer_power")/2)
	{
		message_vision(
		"$n��ɫ���ƺ�������֮����\n" NOR,me,ob);
		return 1;
	}
	if(ob->query("officer_power")<50)
	{
		message_vision(
		"$n˵�����¹ٹ�ְ��΢�����°ﲻ���㡣\n" NOR,me,ob);
		return 1;
	}
	message_vision(
	CYN "$n˵����û���⣬���������ϡ�\n" NOR,me,ob);
	msg=HIR+ob->name()+"�������ӣ�\n";
	msg+=HIY+me->query("officer_class")+me->name()+report[random(sizeof(report))];
	msg+=ob->name()+"��";
	msg+="΢���������Ϊ"+me->name()+"��ְ���Ծ������ˣ��츣����\n";
	for(too=0;too<sizeof(name);too++)
	if(me->query("relation/"+name[too]+"/value")>0&&name[too]!=ob->query("id"))
		msg+=HIG+me->query("relation/"+name[too]+"/name")+"��΢��Ҳ��Ϊ"+me->name()+"Ӧ�����á�\n";
	for(i=0;i<sizeof(name);i++)
 		if(me->query("relation/"+name[i]+"/value")<0)
		{
			th=me->query("relation/"+name[i]+"/value")*(-1)/10;
			if(th>3) th=3;
			msg+=HIM+me->query("relation/"+name[i]+"/name");
			msg+="��"+down[th];
		}
	if(me->query("max_officer_power")<power)
		msg+=HIC+"���ϣ�"+me->name()+report[random(sizeof(report))]+"      "+me->name()+"����һƷ��\n";
	else
		msg+=HIC+"���ϣ�����Ϊ����Ϊ�ٰ��²������ǹ�֮����Ҳ��\n      "+me->name()+"�ٽ�һƷ��\n";

//	message("system",msg+NOR,users());
        message_vision(msg+NOR,me);
	me->set("officer_power",power);
	me->set("max_officer_power",power);


	return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ��powerup by <officer>

���ָ����������ɽ��������󳼰�������Ȩ����
HELP
   );
   return 1;
}
