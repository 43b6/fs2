#include <room.h>
#include <ansi.h>
inherit NPC;


string do_askbluecard();
string askdag();

void create()
{
set_name("��С��",({"joecy"}) );
set("title",HIB"�������鳤"NOR);
set("long","ԭ��Ϊ�л��ῴ������®ɽ����Ŀ��������ȫ��������һ������\n
            ��������޷����������������̬����˵������������һ��(����ذ��)����������\n
	    ��������������(�����ɱ��)�ɣ�");
set("gender","Ů��");
set("age",20);
set("combat_exp",5000000);

set("inquiry",([ 
    "�����ɱ��" : (: do_askbluecard :),
    "����ذ��" : (: askdag :),
]));
setup();
}


int accept_fight(object me)
{
   return notify_fail("һ��������Ц������С���ѣ������Ļ������ɣ�������\n");
}

int accept_kill(object me)
{
   return notify_fail("һ��������Ц������С���ѣ������Ļ������ɣ�������\n");
}

int accept_object( object me , object ob )
{
	object obj;

	if (me->query_temp("askdagger") != 1)
        {
		command("say ��ô������?");
		return 0;
	}
	if(ob->query("id") == "juchi")
	{
		command("say ������ȸذ�ס�������");
		me->set_temp("fire",1);
	}
	if(ob->query("id") == "chilo")
	{
		command("say ��������ذ�ס�������");
		me->set_temp("wind",1);
	}
	if(ob->query("id") == "sawu")
	{
		command("say ��������ذ�ס�������");
		me->set_temp("earth",1);
	}
	if(ob->query("id") == "bihu")
	{
		
		command("say ���ǰ׻�ذ�ס�������");
		me->set_temp("ice",1);
	}
destruct(ob);
	if (me->query_temp("fire")  && me->query_temp("wind") 
	 && me->query_temp("earth")  && me->query_temp("ice") )
	{//�Ѿ������İ�ذ�ף��������ɾ���ذ��
		command("nod");
		command("say ���Ѿ������İ�ذ���ˣ�����һ�¡�");
		me->set("make_dagger",1);
		message_vision("��С����ʧ�ںڰ�֮�С����������������ã��ٴγ����������ǰ",me);
		obj = new("/open/killer/headkill/obj/world_dag.c");
		obj->move(this_player());
		message_vision("$N��$nһ��"+obj->name()+"��\n",this_object(),this_player());
		command("say ��ȥ�ɣ�����һ�������͵�ذ�ף�����������������������Ļ����������ң�");
		me->delete_temp("fire");		
		me->delete_temp("ice");
		me->delete_temp("earth");
		me->delete_temp("wind");
	}	
	else
		command("say ��û�����İ�ذ���ˣ���������ɡ�");
	return 1;
}

string do_askbluecard ()
{
    object obj, me=this_player();

	if (me->query_temp("head") != 7)
		return "����û��ͨ������������";
	else
	{
		command("grin");
		command("say ��õ������ɱ��Ļ�������˲�Ƶ�ȥ�Ǹ��ط�����Ҫ�ɣ�");
		obj = new("/open/killer/headkill/obj/movepill.c");
		obj->move(this_player());
		message_vision("$N��$nһ��"+obj->name()+"��\n",this_object(),this_player());
		me->set_temp("head",8);
		return "�õ������ɱ��Ļ�����Ȼ��������������";	
	}
}

string askdag()
{
	object me=this_player();

	command("nod");
	command("say ����ɱ�ֵĳ�ǿذ�ף�����������ذ�����ɣ����İ�ذ�׸��ң��ҾͰ�����");
	me->set_temp("askdagger",1);
	return "������ָ��ȸ���������׻�������";	
}
