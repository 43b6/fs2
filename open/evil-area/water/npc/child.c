inherit NPC;
#include <ansi.h>
string play();
int do_dest();

void create()
{
	set_name("�����",({"child"}));
	set("long","
һ�������С���ӣ������ƺ���������Ĳ�̫һ����\n");
	set("gender","����");
	set("age",12019);
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
	set("inquiry",([
		"��":(: play :),
		"ˮ���":"���������谡�������ǹ�������˨ݡ���ΰ��ɣ�^o^\n",
                "а���":"а���??...а��粻����������??..����ô����ô��ֵ�����??\n",
		"����":"ˮа�����������谡���Һ��˲����! ^-^\n",
		"ˮа��":"��ֻ֪��ˮа�������������...�������ҾͲ�֪����...���㲻�����氡\n",
	]));
setup();
}

void init()
{
object me,ob;

	me = this_player();
	ob = this_object();

	if( ob->query_temp("evil/water/catch_id") == me->query("id") )
		add_action("do_catch","catch");
}

int do_catch()
{
object me,ob;
int i;

	me = this_player();
	ob = this_object();

	(int)me->add_temp("evil/water/catch_times",1);
	if( (int)me->query_temp("evil/water/catch_times") > 5 )
	{
		command("say ������������ĺ����ˡ����������ݡ����ҵĵ��ҡ�");
		message_vision("$N¶����������ı��飬��Ȼ���ڸոյ���Ϸ����ĺܾ����ˡ�\n",ob);
		command("say �ðɡ���˵���ˣ�������ҵĵ��ң��Ҵ���ȥһ���õط����߰ɣ�");
		message_vision("$N����$n���֣����˳�ȥ��\n",ob,me);
		me->move("/open/evil-area/water/b-01");
		ob->move("/open/evil-area/water/b-01");
		me->delete_temp("evil/water/catch_times");
		message_vision("$n��$N������������ڡ�

$N˵���ب㡫���˼�����...Ҫȥ˯��...zzz\n",ob,me);
		message_vision("$N˵�꣬���Ե������������߽�����������Ϣ�ˡ�\n",ob);
		do_dest();
	}
	else
	{
		command("say �ۡ�������ม����������ҵĵ���˵����������һ��!!\n");
		message_vision("$Nһ˵�꣬����Ĳ�����Ӱ��...��������δ���������$n...\n",ob,me);
		i = random(31)+1;
		if( i < 10 )
			ob->move("/open/evil-area/water/a-0"+i);
		else
			ob->move("/open/evil-area/water/a-"+i);
		ob->set_temp("evil/water/hide",1);
		ob->set_temp("evil/water/catch_id",me->query("id"));
		message_vision(HIB"$N͵͵��˵����...���Ӧ�ò��ᱻ�ҵ��˰�...^c^\n"NOR,ob);
	}
return 1;
}


void greeting(object ob)
{
object obj;

	obj = this_object();

        if( !ob || environment(ob) != environment() )
		return;

	if( obj->query_temp("evil/water/hide") )
	{
		if( ob->query("id") == obj->query_temp("evil/water/catch_id") )
			message_vision("$N����$n����æ���ҵط����䡫\n",obj,ob);
		else
			command("say ��...��Ҫ������˵���������...\n");
	}
	else
	{
	if( ob->query_temp("evil/water/killed") )
		command("say ���ǻ��ˣ����ŵĵ���������Ѫ��ζ��\n");
	else
		command("say ���������?..�Һ�����ม�\n");
	}
}

string play()
{
object me,ob;
int i;

	me = this_player();
	ob = this_object();

	if( ob->query_temp("evil/water/hide") )
		return "�˼�����û�������������߿��߿�����\n";
	
	if( !me->query_temp("evil/water/killed") )
	{
	message_vision("$N˵���ðɡ����Ҿ͸���˵...˵�������ǾͿ�ʼ�����...\n",ob);
	message_vision("
$N˵���������èè�����һ�ȥ�������������ץ��(catch)�ҵĻ������Ҿʹ���ȥһ���õط�ม�����..

"HIY"			��		ʼ		!!!\n\n"NOR,ob);
	i = random(31)+1;
	if( i < 10 )
		ob->move("/open/evil-area/water/a-0"+i);
	else
		ob->move("/open/evil-area/water/a-"+i);
	ob->set_temp("evil/water/hide",1);
	ob->set_temp("evil/water/catch_id",me->query("id"));
	call_out("do_check",120,ob);
	return "�ǵ���ץ(catch)��ม�����������������㻹ץ�����Ҿ��������ˡ�\n";
	}
	else
		return "����...��������Ѫ��ζ������˵���ܸ���������..\n";
}

int do_check()
{
object ob = this_object();
	command("say "+ob->query_temp("evil/water/catch_id")+"�ñ��...��ץ������...����...�˼Ҳ����ˡ�\n");
	command("tell "+ob->query_temp("evil/water/catch_id")+" �˼Ҳ�������...�㶼ץ�����˼ҡ���!!\n");
	do_dest();
return 1;
}

int do_dest()
{
object ob = this_object();
	destruct(ob);
}