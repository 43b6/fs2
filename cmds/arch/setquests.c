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
	return notify_fail("使用格式：\n
	setquests 中文任务名 英文任务名 长叙述\n\n
	英文任务名 是完成任务时，在玩家身上设定的参数，如: quests/read_snow\n
	长叙述	   是对此任务的简单叙述\n");

	restore();
	quests_list[quest_name] = finish_quest;
	quest_long[quest_name] = longstr;
	save();

	log_file ("quests", sprintf("%s设定任务 %s(%s) 于%s\n",
	  me->short(),quest_name,finish_quest,CHINESE_D->chinese_time(time()))
	);

	return 1;
}

string query_save_file()
{ return "/data/questlist" ; }
