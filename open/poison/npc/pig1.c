
# include <ansi.h>
inherit NPC; 

void create()
{
	set_name("��",({"pig"}));
	set("long","һֻ�����Ӵ����������������ڵ���˯����");
	set("age",3);
	set("str",7);
	set("con",8);
	set("race","Ұ��");
	set("max_kee",70);
	set("max_gin",70);
	set("max_sen",70);
	set("limbs",({
	"ͷ��","����","β��","����"}) );
	set("verbs",({"bite"}) );
	set("chat_chance", 4);
	set("chat_msg",({
}) );
	set("combat_exp",100);
	setup();
}
void greeting(object me)
{
	if (!me || environment(me) != environment()) return;
{
	command("fool "+me->query("id"));
}
}
