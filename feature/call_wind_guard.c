#include <ansi.h>
inherit NPC;
int call_soldier(string call_class)
{
	object obj,me=this_player();
	string str;
        string wind_rain;
	mapping call_need_lv=this_object()->query("soldier_lv");
	if(!call_need_lv[call_class])
		return notify_fail("û�����ֻ�����\n");
	if(!present("wind_rain",me))
		return notify_fail("���ȷ���¥�Ļ���Ҫ�з�������С�\n");
	if(this_object()->query("be-call") > 12) 
		return notify_fail("���ڻ������㣬����δ����\n");
	obj=new("/open/wind-rain/callnpc/"+call_class);
	obj->move(environment(me));
	this_object()->add("be-call",1);
	obj->set_temp("id",me->query("id"));
	me->set_temp("p_"+obj->query("name"));
	obj->set_leader(me);
	str = obj->name();
	message_vision(
	CYN "$N˵�����������ڴˣ�����Ҫһ��"+str+"���뼴���ٰ졣\n" NOR+this_object()->name()+"���̽���ȥ���ˡ�\n"+
	"$n�ӵ������������$N����ǰ��\n"+
	CYN
	"$n����$N˵��������Ϊ���з��������Ч�� ! ���κβ�ǲ�������ھ��ǡ�\n" NOR,me,obj);
	obj->set("commander",me->query("id") );
	obj->set("name",me->name()+"��"+str);
	return 1;
}

int do_list()
{
	int i;
	mapping list;
	string *name;
	list=this_object()->query("soldier_list");
	name=keys(list);
        tell_object(this_player(),"\n    "+this_object()->name()+"���ƹܵĲ��������У�\n");
	for(i=0;i<sizeof(list);i++)
		tell_object(this_player(),"    "+list[name[i]]+"\n");
	return 1;
}

void init()
{
	add_action("do_list","list");
	add_action("call_soldier","callout");
}
