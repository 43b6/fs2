inherit NPC;
#include <ansi.h>
string ask();
string do_work();

void create()
{
	set_name("��Ƽ�",({"woman"}));
	set("long","
����������ӷ���ˮа��--ˮ�����а��֮һ��һ˫����ɫ�Ĵ�
�ۣ�ˮ��ɫ���㷢����Ȼ���²��ϵ��������������˺ۼ�������
ȴ�����������˵����ӣ��㿴��æ�Ĳ��ɿ��������ӣ���������
��æ����һЩ���°ɡ�\n");
	set("age",10291);
	set("gender","Ů��");
	set("inquiry",([
		"��æ":(: ask :),
		"ˮа��":"��...������...����һ�����̵ķ��...\n",
		"ˮ���":"��...�����ҵ����ӣ����������������ܺ���...����...\n",
		"����":"�������ܼ�װ�����Ӷ�ˣ��Ȱ�æ���������Ĺ���...���������˵ķ���..\n",
	]));
	set("chat_chance",10);
	set("chat_msg",({
	(: do_work :),
	}));
setup();
}

int accept_object(object me,object ob)
{
int i,j;

	if( !me->query_temp("evil/water/mission") )
		return 0;

	i = (int)me->query_temp("evil/water/mission");

	if( i == 1 )
	{
		if( !me->query_temp("evil/water/f_mission-1") )
			(int)me->set_temp("evil/water/f_mission-1",1);

		j = (int)me->query_temp("evil/water/f_mission-1");

		if( ob->query("id") == "good torch" )
		{
			if( j > 5 )
			{
			command("say �š������͹����ˡ�Ӧ�ÿ����ճ�һ�ֺò˳����ˡ�\n");
			command("say ����...������������Ҫ��İ�æ...^-^\n");
			command("grin "+me->query("id"));
			me->delete_temp("evil/water/f_mission-1");
			(int)me->set_temp("evil/water/mission",2);
			}
			else
			{
			command("say �š��������ˡ�����ľ�Ļ�����...\n");
			command("say �����ٶ��õ�ȼľ��ȥ��������...������..^-^\n");
			command("rub "+me->query("id"));
			(int)me->add_temp("evil/water/f_mission-1",1);
			me->set_temp("evil/water/ask-mission-1",1);
			}
		}

		if( ob->query("id") == "bad torch" )
		{
			command("say ��...�������...����˵...ϣ����������һ�㡣\n");
			command("say ����޷������óԵ�ʳ�����...����..������ȥ���ҿ�һЩ�õ�ȼľ�ġ�\n");
			me->set_temp("evil/water/ask-mission-1",1);
		}
	}
	call_out("do_dest",1,ob);
return 1;
}

int do_dest(object ob)
{
destruct(ob);
}

string do_work()
{
object ob = this_object();
	
	if( !ob->query_temp("move_action") )
	{
		command("say ����...�͹��ֹ�����...�Ͻ���ȥ����һ�¹���..\n");
		command("north");
		message_vision("$N���ϵķ����Ź��档\n",ob);
		ob->set_temp("move_action","north");
	}
	else
	{
		if( ob->query_temp("move_action") == "north" )
		{
			command("say ��˭�ְѴ����������ҷ���...���ǵ�...\n");
			command("west");
			ob->set_temp("move_action","west");
			message_vision("$N���ϵ����������ҵĴ������ߡ�\n",ob);
		}
		else if( ob->query_temp("move_action") == "west" )
		{
			command("say ��˭���Ҹո�ˢ����ľ����Ū����...\n");
			command("say �ѵ�û��֪���ɾ���ľ���ճ�����ʳ���ȽϺóԵ���!?\n");
			ob->set_temp("move_action","south");
			command("south");
			message_vision("$N���ϵ�ˢϴ�ŵ��ϵ�ľ�ġ�\n",ob);
		}
		else if( ob->query_temp("move_action") == "south" )
		{
			command("say ��...ʳ����������ϲ�������û�л�����...\n");
			ob->set_temp("move_action","east");
			command("east");
			message_vision("$NƷ��������������ʳ�\n",ob);
		}
		else if( ob->query_temp("move_action") == "east" )
		{
			command("say ����...�͹��ֹ�����...�Ͻ���ȥ����һ�¹���..\n");
			ob->set_temp("move_action","north");
			command("north");
			message_vision("$N���ϵķ����Ź��档\n",ob);
		}
	}
return "����æ��...\n";
}

string ask()
{
object me,ob,obj;
int i,j;

	me = this_player();
	ob = this_object();

	if( !me->query_temp("evil/water/mission") )
		(int)me->set_temp("evil/water/mission",1);

	i = (int)me->query_temp("evil/water/mission");
	me->set_temp("evil/water/ask-mission-"+i,1);
	switch(i)
	{
		case 1:	
			{
			command("say ��������ȥ��������Ѱȼľ��..��ȼľ���õ����᷿�ǵ�һ��յ��ϡ�\n");
			command("say ��������Ȼ�����������ҡ�\n");
			break;
			}
		case 2:
			{
			command("say ������ӳ������ҳ�һ���޲ݣ��õ����᷿ιʳ��ֻ�ױ��Ľ����\n");
			command("say С�ı���������...��������ι������Ȼһ��ħ��ιʳ�����������ױ����߷ɡ�\n");
			break;
			}
		case 3:
			{
			command("say �����...�Ҳ������ҽ������ڵ�ǧ���۷ŵ���ȥ��...\n");
			command("say ������ҵ��Ļ����ǵð��ҽ�ǧ������ȥιʳ�ķ�....\n");
			command("say ����...�ķ���ں��᷿���ǿô������ϣ�С�ı���ˡ�\n");
			break;
			}
		case 4:
			{
			command("say ��...�ò����������һЩʳ������������ˡ�\n");
			command("south");
			command("east");
			ob->delete_temp("move_action");
			j = random(5)+1;
			obj = new(__DIR__"obj/food"+j);
			tell_object(me,"�㿴����Ƽ��������ʳ��������ϣ������϶���һ��"+obj->name(1)+"���㡣\n");
			tell_object(me,"��Ƽ梸�����˵������Ҷ˵����᷿���ҵ����ӣ������Ӧ���Ѿ����ö��ˡ�\n",ob);
			break;
			}
	}
return "���ˣ�������...��ȥ��ذ�...������æ��...\n";
}

