//guard.c

#include <ansi.h>
#include <../start.h>

inherit NPC;

int greeting(object ob);
void create()
{
	set_name("ţ�ῴ��",({"guard of buffalo","guard"}));
	set("gender","����");
	set("age",30);
	set("str",25);
	set("con",25);
	set_skill("unarmed",40);
	set_skill("dodge",20);
	set("combat_exp",395);
	setup();
}

void init()
{
	object ob;
    ob=this_player();
    greeting(ob);
	::init();
}

int greeting(object ob)
{
    if(!ob) return 1;
	if(ob->is_fighting() && ob->is_environment(this_object()) )
	{
	tell_object(ob,HIC"\n�����ڴ˵��ң�\n\n"NOR);
	kill_ob(ob);
	}
	else
	{
	call_out("greeting2",5,ob);
	}
	return 1;
}

int greeting2(object ob)
{
	if( !ob ) return 0;
	if(ob->is_fighting() && ob->is_environment(this_object()) )
	{
	tell_object(ob,HIC"\n�����ڴ˵��ң�\n\n"NOR);
	kill_ob(ob);
	}
	else
	{
	call_out("greeting",5,ob);
	}
	return 1;
}
