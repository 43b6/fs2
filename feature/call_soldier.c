#include <ansi.h>

inherit NPC;

int call_soldier(string call_class)
{
	object obj,me=this_player();
	string str;
	mapping call_need_lv=this_object()->query("soldier_lv");
	if(!call_need_lv[call_class])
		return notify_fail("û�����ֱ��֡�\n");
	if(me->query("officer_power")<call_need_lv[call_class])
		return notify_fail("���Ȩ���������޷��л����ֱ��֡�\n");
	if(this_object()->query("be-call")>10) 
		return notify_fail("���ڱ�Ա���㣬�±�δ����\n");
	me->add("officer_power",-1*call_need_lv[call_class]);
	obj=new("obj/soldier/"+call_class);
	obj->move(environment(me));
	this_object()->add("be-call",1);
	obj->set_temp("id",me->query("id"));
	me->set_temp("p_"+obj->query("name"));
	obj->set_leader(me);
	str = obj->name();
	message_vision(
	CYN "$N˵��������Ҫһ��"+str+"�����ϸ��Ұ��ס�\n" NOR+this_object()->name()+"���̽���ȥ���ˡ�\n"+
	"$n�ӵ��������ææ���������\n"+
	CYN
	"$n����$N˵�������� ! ���κβ�ǲ����С�ľ��ǡ�\n" NOR,me,obj);
	obj->set("commander",me->query("id") );
	obj->set("name",me->name()+"��"+str);
	return 1;
}

int do_list()
{
	int i;
	mapping list;
	string *name;
    if(this_player()->query("class")!="officer" && !wizardp(this_player()))
		return 0;
	list=this_object()->query("soldier_list");
	name=keys(list);
tell_object(this_player(),"\n    "+this_object()->name()+"���ƹܵĲ��������У�\n");
	for(i=0;i<sizeof(list);i++)
		tell_object(this_player(),"    "+list[name[i]]+"\n");
	return 1;
}

void init()
{
    add_action("do_list","view");
	add_action("call_soldier","callout");
}
