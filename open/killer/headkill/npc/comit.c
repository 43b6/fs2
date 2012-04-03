#include <room.h>
#include <ansi.h>
inherit NPC;

string do_askblue();
string do_askbluecard();
string asktest();
string askcard();

void create()
{
set_name("��������",({"oldman"}) );
set("long","����һλ���ޱ�������ˣ�������(������)����������\n"+
       "�����ȸ�������<�к���˵�ɡ�����\n");
set("gender","����");
set("age",55);
set("combat_exp",200000);

set("inquiry",([ 
    "������" : (: do_askblue :),
    "�����ɱ��" : (: do_askbluecard :),
    "����" : (: asktest :),
    "��������" : (: askcard :),
]));
setup();
}

void init()
{
	add_action("do_hi","hi");
}


int accept_fight(object me)
{
   return notify_fail("�Ź��Ұɣ����Ҷȹ������ɣ�\n");
}

int do_hi(string arg)
{
    if ((!arg) || (arg != "oldman" ))
		return notify_fail("���ڸ�˭���к�ѽ����\n");
	if (this_player()->query_temp("head") < 1)
		return notify_fail("��ģ�����ô��������ģ�����\n");
	if (this_player()->query_temp("head") == 1)
	{
		message_vision("�ţ���ʲô��������������������ʣ������飩������ɣ�\n",this_player());
		this_player()->set_temp("havehi",1);
		return 1;
	}
	message_vision("���ö����������˵��������������������˾��ø��ң�\n",this_player());
        return 1;
}

int accept_object( object me , object ob )
{
	object obj;

    if(ob->query("id") != "ghost_card")
	{
		command("say ��ô������?");
		return 0;
	}
	if( me->query_temp("head") !=5 ) 
	{
		command("say ��Ȼ�ҽб��˰��������ƣ���û�ʸ����һ�������ˣ�����");
		me->delete_temp("head");
		return 0;
	}
	//�������ƣ������������Լ��õ�
	command("nod");
	command("say ��Ȼ���������ƣ������ͨ�����������������ʸ�ȥ���������鳤");
	obj = new("/open/killer/headkill/obj/wind.c");
	obj->move(this_player());
	message_vision("$N��$nһ��"+obj->name()+"��\n",this_object(),this_player());
	command("say �������������ǰ����������������ϸʹ�÷��Լ�����������д");
destruct(ob);
	me->set_temp("head",6);
	me->set_temp("kill_ghost",0);
}

string askcard ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "û����ò�ļһ����";
	if (me->query_temp("askblue") ==3)
	{
		me->set_temp("head",2);
		command("say ���뿪����Ļ����� pass way���Ϳ����뿪");
		return "���������������У��Լ�ȥ�������������ƣ���֪��˭�������������ɱ�ּ��ɣ��죡";	
	}
    return "����Ҫ�ʼ���ѽ��";
}

string asktest ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "û����ò�ļһ����";
	if (me->query_temp("askblue") ==2)
	{
		me->set_temp("askblue",3);
		return "����һ���ʸ񿼣���Ҫȥ�����ȸ���(��������)";	
	}
    return "����Ҫ�ʼ���ѽ��";
}

string do_askbluecard ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "û����ò�ļһ����";
	if (me->query_temp("askblue") ==1)
	{
		me->set_temp("askblue",2);
		return "���ǿ�����������������ƣ���Ҫ�Ļ�������ͨ��(����)";	
	}
    return "����Ҫ�ʼ���ѽ��";
}

string do_askblue ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "û����ò�ļһ����";
	if (me->query_temp("head") == 1)
	{
		me->set_temp("askblue",1);
		return "������������Ļ����ͱ�����(�����ɱ�";	
	}
    return "����Ҫ�ʼ���ѽ��";
}
