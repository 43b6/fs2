inherit ITEM;
#include <ansi.h>
object ob=this_object(),me=this_player();
void create()
{
	set_name(HIC"ˮ֮��ӡʯ"NOR,({"water fon stone","stone"}));
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
	case "wind-emblem":
	if(!ob->query("wind")==1 && (present("wind-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("wind",1);
	ob->add("check",1);
	destruct(present("wind-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "fire-emblem":
	if(!ob->query("fire")==1 && (present("fire-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("fire",1);
	ob->add("check",1);
	destruct(present("fire-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "water-emblem":
	if(!ob->query("water")==1 && (present("water-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N��ˮ֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("water",1);
	ob->add("check",1);
	destruct(present("water-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"ˮ֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "ice-emblem":
	if(!ob->query("ice")==1 && (present("ice-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("ice",1);
	ob->add("check",1);
	destruct(present("ice-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "magic-emblem":
	if(!ob->query("magic")==1 && (present("magic-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("magic",1);
	ob->add("check",1);
	destruct(present("magic-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "soil-emblem":
	if(!ob->query("soil")==1 && (present("soil-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮����������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("soil",1);
	ob->add("check",1);
	destruct(present("soil-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "light-emblem":
	if(!ob->query("light")==1 && (present("light-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮������������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("light",1);
	ob->add("check",1);
	destruct(present("light-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "dark-emblem":
	if(!ob->query("dark")==1 && (present("dark-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N���֮������������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("dark",1);
	ob->add("check",1);
	destruct(present("dark-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"�֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "thunder-emblem":
	if(!ob->query("thunder")==1 && (present("thunder-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮������������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("thunder",1);
	ob->add("check",1);
	destruct(present("thunder-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
	}
	break;

	case "cloud-emblem":
	if(!ob->query("cloud")==1 && (present("cloud-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N����֮������������ˮ֮��ӡʯ��ֻ��ˮ֮��ӡʯ�����ѿ�һ����϶��ɢ������ˮ��!!\n"NOR,me);
	ob->set("cloud",1);
	ob->add("check",1);
	destruct(present("cloud-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"��֮�����Ѿ�������ȷ�ĵط���!!\n");
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
	if(ob->query("check") == 10 )
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
	tell_object(users(),HIY"\n\t\t������ؽ��е�"HIC"ˮ֮��ӡʯ"HIY"��Ϊ"HIG+ me->query("name")+HIY"��Ŭ�����⿪��!!\n"NOR);
	tell_object(users(),HIY"\n\t\t��Ϊʧȥ���������ֵ�"HIC"ˮ֮��ӡʯ"HIY"��ʼ���Ҷ�������ʼ��ɢ����!!\n"NOR);
	call_out("msg2",5,ob);
	return 1;
}

int msg2(object ob)
{
	{
	tell_object(users(),HIC"\n\t\t������ؽ糾���Ѿõ�"HIC"��"HBBLU+HIC"ˮɪ���"NOR+HIC"��"NOR+HIC"��ˮ֮��ӡʯ�еõ��˽�Ŷ�������!!\n"NOR,ob);
	message_vision(HIW"\n\t\tʮö�⿪��ӡ������ת��Ϊʮ��ˮ�⣬����ע����"HIC"��"HBBLU+HIC"ˮɪ���"NOR+HIC"��"NOR+HIW"֮��ת��Ϊ����˼�������!!\n",ob);
	message_vision(HIW"\n\t��ã��ɢ֮��"HIC"��"HBBLU+HIC"ˮɪ���"NOR+HIC"��"NOR+HIW"����������$N����!!\n"NOR,me);
	new("/data/autoload/open-area/light_cloak")->move(me);
	write_file("/log/sky/waterfon",sprintf("%s(%s) �⿪�ˡ�ˮɪ��⡱�� %s\n",me->name(1),me->query("id"),ctime(time())));
	destruct(ob);
	}
	return 1;
}