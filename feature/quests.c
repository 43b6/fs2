// quests.c bye konn
#include <ansi.h>

string *quests = ({
CYN"请问一加一等于多少?\n"NOR,
});

string *answers = ({
"2",
});

string ask_quests(object me) {
	object obj=this_object();
	int i;
	
	write(CYN+obj->name()+"问道: \n"NOR);
	i = random(sizeof(quests));
	write(CYN+quests[i]+NOR);
	return answers[i];
}
