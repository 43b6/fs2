// quests.c bye konn
#include <ansi.h>

string *quests = ({
CYN"����һ��һ���ڶ���?\n"NOR,
});

string *answers = ({
"2",
});

string ask_quests(object me) {
	object obj=this_object();
	int i;
	
	write(CYN+obj->name()+"�ʵ�: \n"NOR);
	i = random(sizeof(quests));
	write(CYN+quests[i]+NOR);
	return answers[i];
}
