// can-sword-made.c
#include <ansi.h>
inherit SKILL;

mapping make = ([
	"can-sword" : ([ 
		1:"gold stone",
		2:"flower iron",
		3:"green stone",
		]),
	]);
mapping make_name = ([
	"can-sword": "�ɽ�֮��",
	]);
mapping make_need_lv = ([
	"can-sword": 100,
	]);
int valid_enable(string usage) { return usage=="make"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
	return notify_fail("�ɽ��콣��ֻ����ѧ�ġ�\n");
}

int make(object me,string name)
{
	object weapon;
	int i;
	mapping dict;
	string pstr="";
	if(!make[name])
		return notify_fail("�ɽ��콣��û���������������ļ�����\n");
	dict=make[name];
	for(i=1;i<=sizeof(dict);i++)
	{
		if(!present(dict[i],me))
			return notify_fail("��Ĳ��ϲ������޷�����"+make_name[name]+"\n");
		weapon=present(dict[i],me);
		pstr+="("+weapon->name()+")";
		if(!present(dict[i],me))
			return notify_fail("��Ĳ��ϲ������޷�����"+make_name[name]+"\n");
	}
	message_vision(
	"$N��"+pstr+"����"+make_name[name]+"��\n",me);
	for(i=1;i<=sizeof(dict);i++)
		destruct(present(dict[i],me));
	if(random(me->query_skill("make"))<make_need_lv[name])
	{
		message_vision(
			"$N����ʧ���ˡ�\n",me);
		return 1;
	}
		weapon = new("/obj/weapon/"+name);
		weapon->move(me);
	message("system",
	HIC "\n\nһ������"+me->name()+"�����һ�Ѿ�������"+HIY+"��"+make_name[name]+"��\n\n" NOR,users());
	return 1;
}
