// array.c
#include <ansi.h>
#include <combat.h>

inherit SKILL;
int valid_enable(string usage) { return usage=="array";}
int get_attack_skill_lv(object ob);
int form_array(object leader)
{
	object *member;
	int i=0;
	int num=0;
	int max,min,total;
	int max_man=0,min_man=0;
	total=0;
	member = leader->query_team();
	max=member[i]->query("force");
	min=member[i]->query("force");
	if(leader->query_temp("use_form")==1)
		return notify_fail("�������Ѿ������ˡ�\n");

	for(i=0;i<sizeof(member);i++)
	{
		if(present(member[i]->query("id"),environment(leader)))
		{
			member[i]->set_temp("use_form",1);
			member[i]->set_temp("save/apply",member[i]->query_temp("apply"));
			total+=member[i]->query("force");
			if(member[i]->query("force")>max)
			{
				max_man=i;
				max=member[i]->query("force");
			}
			if(member[i]->query("force")<min)
			{
				min_man=i;
				min=member[i]->query("force");
			}
			num++;
		}
	}
	if(0>1)
	if(num!=4) return notify_fail("������Ҫ���˲����ţ�����һ������һ�������С�\n");
	message_vision(
	HIC "$N�������ų�һ�У��ų��˺�����\n" NOR,leader);
	member[max_man]->add_temp("apply/damage",total/10);
	for(i=0;i<sizeof(member);i++)
		if(present(member[i]->query("id"),environment(leader)))
			member[i]->set("force",0);
	return 1;
}
