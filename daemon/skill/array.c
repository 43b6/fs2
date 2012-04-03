// array.c
#include <ansi.h>
#include <combat.h>

inherit SKILL;
string type() { return "knowledge"; }
int get_attack_skill_lv(object ob);
int form_array(object leader)
{
	object *member;
	int i;
	int num=0;
	int total_attack_skill_lv=0;
	int max,min,sub;
	member = leader->query_team();
	max=get_attack_skill_lv(member[i]);
	message_vision(
	HIC "$N�����ж�Ա�ų�һ��������ս�����Ρ�\n" NOR,leader);
	for(i=0;i<sizeof(member);i++)
	{
		if(present(member[i]->query("id"),environment(leader)))
		{
			member[i]->set_temp("use_form",1);
			member[i]->set_temp("save/apply",member[i]->query_temp("apply"));
			if(get_attack_skill_lv(member[i])>max)
				max=get_attack_skill_lv(member[i]);
			num++;
		}
	}
	for(i=0;i<sizeof(member);i++)
		if(present(member[i]->query("id"),environment(leader)))
			member[i]->add_temp("apply/attack",leader->query_skill("array",1)/10);
	return 1;
}
int get_attack_skill_lv(object ob)
{
	object weapon;
	string skill_type;
  if( objectp(weapon = ob->query_temp("weapon")) )
    skill_type = weapon->query("skill_type");
  else
    skill_type = "unarmed";


   return ob->query_skill(skill_type);
}
