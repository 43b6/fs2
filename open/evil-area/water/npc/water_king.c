inherit NPC;
#include <ansi.h>

void create()
{
	set_name("ˮ���",({"water king","king"}));
	set("age",15012);
	set("gender","Ů��");
	set("long","
������а������а�����ƹ�ˮ�������а��--ˮ�����һ
���������˵����ף���ˮ�������Ϣ���о��Ϸ·�һλ����
�����Ů�ӣ�˭�Ὣ��������޵���а�鳶��һ���??....
�����������һλ�����ߵ���ż�����ϵĿ������㿴����
����Ƽ��ݣ�����Ӧ�øϿ콫���ϵĲ�\ʳ������...\n");
	set_skill("unarmed",300);
	set_skill("dodge",300);
	set_skill("force",400);
	set_skill("move",300);
	set("no_kill",1);
	setup();
}

int accept_object(object me,object obj)
{
object ob = this_object();

	if( obj->query("id") == "evil-foods" )
	{
		if( me->query_temp("evil/water/ask-mission-4") )
		{
			message_vision("$N����$n����"+obj->name(1)+"������������\�����Ĵ��ۼջ���...\n",ob,me);
			command("sigh");
			command("say ��ط���һ�������ڵ�������...������ʵ���ʳ��...:~...\n");
			message_vision("˵�꣬$N����"+ob->name(1)+"���򿪴��������ⶪ��\n",ob);
			me->set_temp("evil/water/hall",1);
		}
	}
call_out("do_dest",1,obj);
return 1;
}

int do_dest(object obj)
{
destruct(obj);
}
