// bandit.c
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("����",({"body"}));
	set("gender","����");
	set("combat_exp",0);
	setup();
}
void init()
{
	add_action("do_return","return");
}
int do_return()
{
	if(query("owner")!=this_player()->query("id"))
		return 0;
	message_vision(
	HIB "$N��Ӱ����$n�����߽�ȥ��$N��$n�Ѿ���Ϊһ���ˡ�\n",this_player(),this_object());
	message_vision(NOR,this_player());
	this_player()->set("name",this_object()->query("name"));
	this_player()->delete("sen-out");
	this_player()->add_temp("apply/attack",-10);
	this_player()->add_temp("apply/dodge",-10);
	this_player()->add_temp("apply/damage",-30);
	this_player()->apply_condition("out_status",0);
	destruct(this_object());
	return 1;
}
