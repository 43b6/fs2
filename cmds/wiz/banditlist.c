// banditlist.c by oda

inherit F_CLEAN_UP;

string age_string(int);

int main(object me, string arg)
{
	object *list, *bandit;
	int i;
	string str;

	list = users();
	bandit = ({});
	for(i=0; i<sizeof(list); i++)
		if( list[i]->query_temp("������") )
			bandit += ({ list[i] });
	str = ("����������������������������������������������������������������������������\n");
	str = sprintf("%sĿǰ���Ϲ��� %d ������ǿ����\n", str, sizeof(bandit));
	str += ("����������������������������������������������������������������������������\n");
	for(i=0; i<sizeof(bandit); i++)
		str = sprintf("%s%12s %14s%-12s %6s %-15s %2s%s\n",
			str, RANK_D->query_rank(bandit[i]),
			bandit[i]->query("old_name"), "("+(bandit[i]->query("old_id"))+")",
			age_string((int)bandit[i]->query("mud_age")),
			bandit[i]->query("last_from"),
			bandit[i]->query_temp("netdead")?"��":"",
			(interactive(bandit[i]) && query_idle(bandit[i])>120)?
				"��"+query_idle(bandit[i])/60+"��":""
			);
			
	me->start_more(str);
	return 1;
}

string age_string(int time)
{
  int month, day, hour;

  time /= 3600;
  hour = time % 24;
  time /= 24;
  day = time % 30;
  month = time / 30;
  return (month?month + "m":"") + (day?day + "d":"") + hour + "h";
}

int help(object me)
{
write(@HELP

���ָ���������֪��Ŀǰ�����ϵĽ������ٵ�����Щ��ҡ�

HELP);
return 1;
}
