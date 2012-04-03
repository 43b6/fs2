// team.c

#include <ansi.h>

inherit F_CLEAN_UP;
mapping level = ([
	0:BLU "�� �� ��" NOR,
	1:HIB "�� �� ��" NOR,
	2:MAG "�� �� ��" NOR,
	3:CYN "�� �� ��" NOR,
	4:HIC "�� �� ��" NOR,
	5:HIW "�� �� ��" NOR,
	6:HIR "�� �� ��" NOR,
	]);

int count_total_power_lv(object leader);
int count_lv(int power);
int main(object me, string arg)
{
        mapping map;
	object *t;
	string team_name;
	object team_leader;
	object ob1;
	object leader;
	object *member;
	object *mmm;
	string str;
	string targ;
	object *list;
	int team_cnt=0;
	int i,z;
       seteuid(getuid());

	if( !arg ) {
		if( !pointerp(t = me->query_team()) )
			return notify_fail("�����ڲ�û�вμ��κζ��顣\n");
		team_leader=me->query_temp("leader");
		team_name=team_leader->query_temp("team_name");
		write("������"+team_name+"\n");
		write("��ӣ�"+team_leader->name()+"\n");
		write("�����ڶ����еĳ�Ա�У�\t��\t��ϵ\n");
		for( i=0; i<sizeof(t); i++ )
			write("  " + "\t"+ t[i]->name(1) + "\t\t"+t[i]->query("kee") +"\t" + me->query("�˼ʹ�ϵ/"+t[i]->query("id")) + "\n");
		return 1;
	}
	if( arg=="query" )
	{
		str="�� ����ռ�\n";
		str+=sprintf("%-20s%-20s%-20s%-10s\n","����","���","��Ա����","ǿ�ȵȼ�");
		str+="����������������������������������������������������������������������\n";
		list=users();
		for(i=0;i<sizeof(list);i++)
			if(list[i]->is_team_leader())
			{
				team_cnt++;
				leader=list[i];
				str+=sprintf(HIY+"%-20s"+HIC+"%-20s"+HIW+"%-20d"+"%-20s",list[i]->query_temp("team_name"),list[i]->name(),sizeof(list[i]->query_team()),level[count_lv(count_total_power_lv(leader))]);
			str+="\n";
			}
		str+="����������������������������������������������������������������������\n";
		str+=sprintf("Ŀǰ����ռ乲�� %d ֧���顣\n",team_cnt);
		if(team_cnt>0)
		write(str);
		else write("Ŀǰ����ռ�û���κζ��顣\n");
		return 1;
	}
	if( arg=="dismiss" ) {
		if(me->query_temp("use_form")==1)
			return notify_fail("��Ļ�����������ڼ������������������� ?\n");
		if( !pointerp(t = me->query_team()) )
			return notify_fail("�����ڲ�û�вμ��κζ��顣\n");
		if( me->is_team_leader() ) {
			message("team", me->name(1) + "�������ɢ�ˡ�\n", t, me);
			write("�㽫�����ɢ�ˡ�\n");
		} else {
			message("team", me->name(1) + "����������顣\n", t, me);
			write("����������Ķ��顣\n");
		}
		team_leader=me->query_temp("leader");
                if(sizeof(team_leader->query_team())==2 && !me->is_team_leader()) //�ж϶������Ƿ�ʣ���Լ���ӳ�����
                  {                  	
                  	team_leader->dismiss_team();
                  	tell_object (team_leader,HIY"��Ķ����Աȫ��������飬�����ɢ��!!\n"NOR);
                  }else
		me->dismiss_team();
		return 1;
	}
	if( sscanf(arg, "name %s", arg)==1) {
		if(!me->is_team_leader())	return notify_fail("ֻ����ӿ����趨������\n");
		me->set_temp("team_name",arg);
		write("�趨����Ϊ"+arg+"\n");
		return 1;
	}
	if( sscanf(arg, "with %s", arg)==1 ) {
		object ob;

		if( !(ob = present(arg, environment(me)))
		||	!living(ob)
		||	!ob->is_character()
		||	ob==me )
			return notify_fail("�����˭��Ϊ��飿\n");

		if( !pointerp(me->query_team()) || me->is_team_leader() ) {
			if( me==(object)ob->query_temp("pending/team") ) {
				if( !pointerp(me->query_team()) ) {
					ob->add_team_member(me);
					message_vision("$N��������$n�Ķ��顣\n", me, ob);
					ob->set_temp("leader",ob);
					me->set_temp("leader",ob);
					me->set_leader(ob);
					if(!ob->query_temp("team_name")) 
						ob->set_temp("team_name","δ��");
				} else {
					me->add_team_member(ob);
					ob->set_temp("leader",me);
					ob->set_leader(me);
					me->set_temp("leader",me);
					if(!me->query_temp("team_name"))
						me->set_temp("team_name","δ��");
					message_vision("$N������$n������顣\n", me, ob);
				}
				ob->delete_temp("pending/team");
				return 1;
			} else {
				message_vision("$N����$n����$P�Ķ��顣\n", me, ob);
				tell_object(ob, YEL "�����Ը����룬���� team with " + me->query("id") + "��\n" NOR);
				me->set_temp("pending/team", ob);
				return 1;
			}
		} else
			return notify_fail("ֻ�ж����������������˼��롣\n");
	}
	if( sscanf(arg, "talk %s", arg)==1 ) {
		if( !pointerp(t=me->query_team()) )
			return notify_fail("�����ڲ�û�кͱ�����ɶ��顣\n");
		message("team", HIW "�����顿" + me->name(1) + "��" + arg + "\n" NOR, t);
		return 1;
	}
	if( sscanf( arg, "form %s at %s", arg, targ ) == 2 ) {
            object obj1;
		map = me->query_skill_map();
		if( undefinedp(map["array"]) )
			return notify_fail( "��Ŀǰ����ʹ���󷨡�\n" );
		if( map["array"] == "bad-array" && me->query("family/family_name") != "���˹�" )
			return notify_fail( "���޷�ʹ�ö���а��\n" );
		if( map["array"] == "sha-array" && me->query("family/family_name") != "�ɽ���" )
			return notify_fail( "���޷�ʹ���ɽ�����\n" );

		if( !pointerp( t=me->query_team() ) || !me->is_team_leader() )
			return notify_fail( "�������һ����������������֯���Ρ�\n" );
		if( !me->query_skill( arg, 1 ) )
			return notify_fail( "����������ûѧ����\n" );
		mmm=me->query_team();
		targ = lower_case(targ);
                ob1 = present( targ, environment(me) );
    if(!ob1) return notify_fail("�Ҳ���"+targ+"!!\n");
  if( !ob1->is_character() || ob1->is_corpse() )
    return notify_fail("�����һ�㣬�ǲ����ǻ��\n");
		message_vision( "$N����Ķ����\����ʽ��$nչ������!\n", me, ob1 );
		me->set_temp("arrayp",1);          //����leader�Ǻ��ź���,ʹ���󷨾���5 sec�޷�ʹ���ع�
                call_out("remove_arrayp",5,me);    //��Ϊ���������ȡ��������ɽ�������
		for( z=0; z<sizeof(me->query_team()); z++ )
			mmm[z]->kill_ob(ob1);
		return SKILL_D(arg)->form_array(me);
 
              
// appo ��shasword leader �����ϵ�����..������hsa_kee
//         if( leader->query("family/family_name") != "�ɽ���")
//{
//   leader->set_temp("no_power",1);
//   leader->apply_condition("no_power",1);
//}
	}
}

int help(object me)
{
	write(@HELP
����ָ��ʹ�÷���:

team name <����>           - �趨�������ơ�
team with <ĳ��>           - ��ĳ����ɶ��顣����Ҫ˫����ͬ�����Ż���Ч��
team dismiss               - �뿪���顣���´�ָ�������ӣ�������������ɢ��
team talk <ѶϢ>           - ����������������̸���������� tt <ѶϢ> �����
team form <��> at <Ŀ��> - �����������ѧ���󷨵Ļ������Խ������еĳ�Ա��֯��
                             ĳ�����Σ�������ε�״ֻ̬Ҫ����һ�ƶ��ͻ�����
team query                 - ��ѯĿǰ����Щ������ɵĶ��顣

ֱ���� team ָ��ʱ�����ʾ��Ŀǰ�Ƿ��м�����鼰��Ա������
HELP
	);
	return 1;
}
int count_total_power_lv(object leader)
{
	int total=0;
	object *member;
	int i;
	member=leader->query_team();
	for(i=0;i<sizeof(member);i++)
		total+="/daemon/skill/array"->get_attack_skill_lv(member[i])+member[i]->query_temp("apply/attack");
	return total;
}
int count_lv(int power)
{
	if(power<30) return 0;
	if(power<300) return power/50;
	return 6;
}
int remove_arrayp(object me)
{
   if(me)
   me->delete_temp("arrayp",1);
   return 1;
}


