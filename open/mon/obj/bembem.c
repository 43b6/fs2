inherit ITEM;
#include <ansi.h>
object ob=this_object(),me=this_player();
void create()
{
	set_name("���ӵı��",({"bembem"}));
	set("long","�⸽���ƺ������ӳ�û�����Ե������������ӵı�㣬Ҳ����С
������(search rabbit)��Ӧ�ûᷢ�����õ���Ӱ�ģ�\n");
	set("unit","��");
	set("value",100);
	set("no_get",1);
	set("no_sac",1);
	set("no_auc",1);
	set_weight(500000);
        setup();
}

void init()
{
	add_action("do_search","search");
}

int do_search(string str)
{
	object me,ob;
	me=this_player();
        ob=this_object();

	switch(str)
	{
	case "rabbit":
	if(ob->query("find")!=1)
	{
          message_vision("������ȥ��$N�����ڲݴ����ҵ��˼�ֻ����!!\n"NOR,me);
	  new("/open/mon/npc/rabbit")->move(environment(me));
	  new("/open/mon/npc/rabbit")->move(environment(me));
	  ob->set("find",1);
	  call_out("des",1,ob);
	}else{
	  tell_object(me,"���Ѿ��ҹ���!!\n");
	}
	break;

	default:
	tell_object(me,"������ʲôѽ!!\n");
	break;
	}
	return 1;
}

int des(object ob)
{
	destruct(ob);
}