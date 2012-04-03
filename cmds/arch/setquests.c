//setquests.c

inherit F_SAVE;

mapping quests_list = ([ ]);
mapping quest_long = ([ ]);

int main(object me, string arg)
{
	string quest_name,finish_quest,longstr;

	seteuid(getuid());
	if( !arg ||
	    sscanf(arg,"%s %s %s",quest_name, finish_quest,longstr) != 3 )
	return notify_fail("ʹ�ø�ʽ��\n
	setquests ���������� Ӣ�������� ������\n\n
	Ӣ�������� ���������ʱ������������趨�Ĳ�������: quests/read_snow\n
	������	   �ǶԴ�����ļ�����\n");

	restore();
	quests_list[quest_name] = finish_quest;
	quest_long[quest_name] = longstr;
	save();

	log_file ("quests", sprintf("%s�趨���� %s(%s) ��%s\n",
	  me->short(),quest_name,finish_quest,CHINESE_D->chinese_time(time()))
	);

	return 1;
}

string query_save_file()
{ return "/data/questlist" ; }
