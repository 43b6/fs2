inherit ITEM;
#include <ansi.h>
object ob=this_object(),me=this_player();
void create()
{
	set_name(HIY"��֮��ӡʯ"NOR,({"gold fon stone","stone"}));
	set("long","һ����ӡ���������������ʯͷ�����������������СС���ȵ�\n"
		  +"���ιֶ���Ӧ�ÿ��Է���⿪��ӡ����Ʒ������Ҫ�õ���ӡ����\n"
		  +"�������Խ������õ��Ľ��ӡ����Ʒ(insert)��ȥ���Ϳ�������\n"
		  +"������������\n");
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
	add_action("do_insert","insert");
}

int do_insert(string str)
{
	switch(str)
	{
	case "sky-stone":
	if(!ob->query("sky")==1 && (present("sky-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("sky",1);
	ob->add("check",1);
	destruct(present("sky-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "loyal-stone":
	if(!ob->query("loyal")==1 && (present("loyal-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("loyal",1);
	ob->add("check",1);
	destruct(present("loyal-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "peace-stone":
	if(!ob->query("peace")==1 && (present("peace-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N����ƽʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("peace",1);
	ob->add("check",1);
	destruct(present("peace-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��ƽʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "emperor-stone":
	if(!ob->query("emperor")==1 && (present("emperor-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("emperor",1);
	ob->add("check",1);
	destruct(present("emperor-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "soil-stone":
	if(!ob->query("soil")==1 && (present("soil-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("soil",1);
	ob->add("check",1);
	destruct(present("soil-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "justice-stone":
	if(!ob->query("justice")==1 && (present("justice-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("justice",1);
	ob->add("check",1);
	destruct(present("justice-stone",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "charity-stone":
	if(!ob->query("charity")==1 && (present("charity-stone",me)->query("specialitem")==1) )
	{
	message_vision(HIB"$N������ʯ�����˷�ӡ֮ʯ��ֻ����ӡ֮ʯ�����п�һ����϶��͸����������!!\n"NOR,me);
	ob->set("charity",1);
	ob->add("check",1);
	destruct(present("charity-stone",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"����ʯ�Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	default:
	message_vision("$N�ƺ����ʲô��������ȴ�Ҳ�����ȷ��λ�÷�!!\n",me);
	break;
	}
	return 1;

}

int check(object ob)
{
	if(ob->query("check") == 7 )
	{
	tell_object(users(),HIC"\n\t\t��غ�Ȼ���ҵغ������������ڼ�Զ����һ��ɽ��������������������!!\n"NOR);
	tell_object(users(),HIC"\n\t\tԶ���������߲��ͷף�����ػ�������ʣ��������������!!\n"NOR);
	tell_object(users(),HIC"\n\t\t������������أ����������Ƕ���æ�ķɱ���ɢ!!\n"NOR);
	call_out("msg1",5,ob);
	}
	return 1;
}

int msg1(object ob)
{
	tell_object(users(),HIC"\n\t\t������ؽ��е�"HIY"��֮��ӡʯ"HIC"��Ϊ"HIG+ me->query("name")+HIC"��Ŭ�����⿪��!!\n"NOR);
	tell_object(users(),HIC"\n\t\t��Ϊʧȥ���������ֵ�"HIY"��֮��ӡʯ"HIC"��ʼ���Ҷ�������ʼ��ɢ����!!\n"NOR);
	call_out("msg2",5,ob);
	return 1;
}

int msg2(object ob)
{
	tell_object(users(),HIC"\n\t\t������ؽ糾���Ѿõ�"HIM"�������������"NOR+HIC"��"HIY"��֮��ӡʯ"HIC"�еõ��˽�Ŷ�������!!\n"NOR,ob);
	message_vision(HIW"\n\t\t�߿Ž⿪��ӡ����ʯת��Ϊ������ã������ע����"HIM"�������������"NOR+HIW"֮��ת��Ϊ����˼�������!!\n",ob);
	message_vision(HIW"\n\t��ã��ɢ֮��"HIM"�������������"NOR+HIW"����������$N����!!\n"NOR,me);
	new("/data/autoload/open-area/money_sword")->move(me);
	write_file("/log/sky/goldfon",sprintf("%s(%s) �⿪�ˡ�������������� %s\n",me->name(1),me->query("id"),ctime(time())));
	destruct(ob);
	return 1;
}