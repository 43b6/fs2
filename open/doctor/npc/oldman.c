#include <ansi.h>
inherit NPC;

string ask_help();

void create()
{
    set_name("�˽���ͷ", ({"old man","man"}));
    set("age",80);
    set("long", "һ���˽ŵ���ͷ�����Ľź���ʲô����ҧ�����Ƶġ�\n");
    set("inquiry",([
         "����"     :  (: ask_help :),
    ]));
    setup();
}
void init()
{
    object me=this_player();
    ::init();

    if(interactive(me) && !is_fighting())
{
        remove_call_out("greeting");
        call_out("greeting", 1, me);
}
    add_action("do_help","help");
    add_action("do_feed","feed");
    add_action("do_accept","accept");
    add_action("do_unaccept","unaccept");
}
int do_feed(string arg)
{
    object me, ob;

    me=this_player();

    if(arg == "man" && me->query_temp("get_pill")==1 && ob=present("tiger_cornu-pill",me))
{
	destruct(ob);
	write("�㽫ҩ�������ͷ�Ŀ����ι����һЩˮ...\n"NOR);
	write("��ͷ��ҩ�衸���࣡��һ���������¶�...\n"NOR);
	command("say ��...��Ȼ��������ˣ���Ҳû��ôʹ�ˣ��ţ��������Ǵ������...");
	command("sorry "+me->query("id"));
	write("��ͷ�������д�˷��ţ���������...\n"NOR);
	command("say ���������Ϊ�ҵ�³ç���������ҽ�����˼ҵ�Ǹ�ģ�������...");
	write("����Ȼ������������ţ����ĸе��൱�Ŀ��֣�\n"NOR);
	ob=new("/open/doctor/obj/sec-letter");
	ob->move(me);
	me->delete_temp("get_pill");
	me->set_temp("sec_letter",1);
	return 1;
  }
}
int do_accept()
{
    object me, ob;

    me=this_player();
    ob=new("/open/doctor/obj/letter");

    if(me->query_temp("sos_man")==1)
{
	write("����������ͷ����...\n"NOR);
	command("say �������ʵ�㣬���Ÿ���������ҽ�����˼ҵ����ϰ�����");
	ob->move(me);
	me->delete_temp("sos_man");
	me->set_temp("sos_letter",1);
	return 1;
  }
}
int do_unaccept()
{
    object me=this_player();

    if(me->query_temp("sos_man")==1)
{
	write("�������ͷ˵���������ͷ���Һ��ľ��㾹��������ţ�������Ҫ�;��Լ��ͣ��Ҳ��������㣡\n"NOR);
	command("say ࡺǣ������С����ô�רڣ���϶����ڵ�...�ٺ٣�");
	me->set("quest/sosman",1);
	return 1;
  }
}
string ask_help()
{
    object me=this_player();

    if(me->query("class")=="doctor" && !me->query("quest/sosman")==1 && me->query("combat_exp")>=500000)
{
	write("�������ͷ����ɫ˲����...\n"NOR);
	command("cow "+me->query("id"));
	call_out("do_help1",1,me);
  }
}
int do_help1(object me)
{
	write(HIY"�˽���ͷŭ�������Ǹ�ҽ���ߣ����Ȼ������ξ�����\n"NOR,me);
	call_out("do_help2",2,me);
}
int do_help2(object me)
{
	write(HIY"�˽���ͷŭ�����ҿ���ʵ���Ǹúúõļ��ּ����ˣ�\n"NOR,me);
	call_out("do_help3",2,me);
}
int do_help3(object me)
{
	write(HIY"�˽���ͷŭ�����治֪��Ϊ���Ի��������ҽ֮�𣬾���̳��������ĵ��ӣ�\n"NOR,me);
	call_out("do_help4",2,me);
}
int do_help4(object me)
{
	write(HIY"�˽���ͷŭ�������������վ�ã���д���Ÿ������˼ң�\n"NOR,me);
	call_out("do_help5",2,me);
}
int do_help5(object me)
{
	write(HIY"�˽���ͷ��ʼд���״����...����ʱ�Ա��ӵ���������...ʹ��е���������...\n"NOR,me);
	call_out("do_help6",7,me);
}
int do_help6(object me)
{
	write(HIY"�˽���ͷ�����Ŷ���˵�����ţ�������պ������...(accept/unaccept)\n"NOR,me);
	me->set_temp("sos_man",1);
	return 1;
}
void greeting(object me)
{
    if(me->query("class")=="doctor"
    && !me->query("quest/sosman")==1
    && !me->query_temp("sos_man")==1
    && me->query("combat_exp")>=500000)
{
	command("sos "+me->query("id"));
	command("say ����һλҽ���ɣ����������ң������ڣ�");
}
	else
{
	command("sos");
  }
}
