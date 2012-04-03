#include <ansi.h>
inherit NPC;

string want_help();
string want_help1();
string want_help2();

void create()
{
	set_name("������",({"mystery seller","seller"}));
	set("age",33);
	set("title",HIM"����ؽ�"HIW"����ʹ��"NOR);
        set("nickname",HIC"�������"NOR);
	set("gender","����");
	set("long",@LONG
    һλ��������ؼ���������ϲ���Ѽ���ʽ�����������챦����
���Ƕ�����ؽ�ɢ�����˼�ı������ϲ�������Զ��ڱ���ļ��ͺͱ�
�������������ָ�ƣ���������Ѽ���������ؽ��еı�������Ҳ�
��һ���ɿ����˿����и�ʱ��Ҳ����Կ��ǽ��������ܣ������˻�ϸ��
�ı����⣬Ҳ����˳���������ؽ�ɢ��ı�����Զ����������Ǿ�
�԰�ȫ�ɿ��ġ�


�� �� ��  ��	һ����Ʒ 500 ����Ʊ
���׷�ʽ  ��	pay	(ֱ�ӴӴ�����)
ȡ�ط�ʽ  ��	want
��ѯ��ʽ  ��	list


LONG);
	set("no_kill",1);
	set("max_kee",1000000);
	set("max_gin",1000000);
	set("max_sen",1000000);
	set("combat_exp",1000000);
	set("int",35);
	set("kar",35);
	set("con",35);

        set("chat_chance", 5);
        set("chat_msg",({

	(: command("sigh") :),
	(: command("say ����") :),
	(: command("say �������ʧ��һ�����������Ƿ���ѽ��") :),
        }));

        set("inquiry", ([
	"����ؽ�"	:	"��һ�����صĵط����ഫ����ķ�ʽֻ�о���ɽׯ���˲�֪����",
	"����"		:	(: want_help :),
	"����ɽׯ"	:	(: want_help1 :),
	"����"		:	(: want_help2 :),
        ]) );

	setup();
}

void init()
{
	add_action("do_pay","pay");
	add_action("do_want","want");
	add_action("do_list","list");
	add_action("do_nod","nod");
	add_action("do_shake","shake");
}

int do_pay()
{
	object me,ob;
	int coin;
	me=this_player();
	ob=this_object();
	coin=(int)me->query("bank/coin");

	if(coin < 50000000 )
	return notify_fail(HIY"��Ŀǰ�Ĵ��ֻʣ��"HIM"��"HIW+coin/100000+HIM"��"HIY"����Ʊ���Ҷ��ѣ����� 500 ����Ʊม�\n"NOR);

	coin=coin-50000000;
	me->set("bank/coin",coin);
	me->set_temp("quests/sky/pay",1);
	message_vision(HIY"������˵���յ�$N"HIY"���������Ʊ�ˣ�$N"HIY"Ŀǰ�Ĵ�ʣ��"HIM"�� "HIW+coin/100000+HIM"��"HIY"����Ʊ����!!\n"NOR,me);
	command("smile "+me->query("id"));
	message_vision(HIY"������˵��$N"HIY"�뱣��ʲô��Ʒ�أ���һ��Ǯֻ�ܱ���һ������ร�\n"NOR,me);
	return 1;
}

int accept_object(object me,object ob)
{
	string oo,on;
	int os,oa;
	me=this_player();
	oo=ob->query("id");
	on=ob->query("name");
	os=ob->query("specialitem");
	oa=ob->query("magic-manor");
	
	if( !me->query_temp("quests/sky/pay") && me->query_temp("quests/magic-manor-01") )
	{
	  if(me->query_temp("quests/magic-manor-01") == 3 && os != 1 && oa == 1 )
	  {
	  message_vision(HIY"������˵����л������һ��������û�����������һ��治֪����λؾ���ɽׯ�أ�\n"NOR,me);
	  me->set_temp("quests/magic-manor-01",4);
	  }else{
	    if(oa == 1)
	    {
	    message_vision(HIY"������˵��������.....����֪������Ҫ�Ķ���ѽ��\n"NOR,me);
	    message_vision(HIY"������˵����Ȼ�����һ����ˣ��Ͷ�л��!!\n"NOR,me);
	    destruct(ob);
	    }else{
	    message_vision(HIY"������˵��$N"HIY"û�и�(pay)�ҽ�Ǯ���Ҳ�����Ѱ��㱣�ܵġ�"+ob->query("name")+HIY"���͵����͸����ˡ�\n"NOR,me);
	    destruct(ob);
	    return 1;
	    }
	  }
	}else{
	  if( os == 1 )
	  {
	  message_vision(HIY"������˵�������ұ��ܵĶ���������$N"HIY"��һ�ٶ�ʮ���İɣ������׵�!!\n"NOR,me);
	  me->add("sky/"+oo,1);
	  me->delete_temp("quests/sky/pay");
          write_file("/log/sky/accept",sprintf("%-28s �� %s ������������ %s\n",
          me->name(1)+"("+me->query("id")+")",on,ctime(time())));
	  destruct(ob);
	  }else{
	  message_vision(HIY"������˵����"+ob->query("name")+HIY"����ô��Ҳ�����Ǳ��������Ȼ$N�͸����ˣ��ҾͲ������������� ^^\n"NOR,me);
	  destruct(ob);
	  }
	}
	return 1;
}

int do_want(string arg)
{
	object me,ob,tb;
	me=this_player();
	ob=this_object();

	if( !arg ) 
	return notify_fail("�����������Ҫʲô����Ҳ��˵���ѽ!!\n");

	switch(arg)
	{
	case "sky-stone":
	case "peace-stone":
	case "emperor-stone":
	case "soil-stone":
	case "loyal-stone":
	case "charity-stone":
	case "justice-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "fire-emblem":
	case "wind-emblem":
	case "ice-emblem":
	case "thunder-emblem":
	case "water-emblem":
	case "soil-emblem":
	case "magic-emblem":
	case "light-emblem":
	case "cloud-emblem":
	case "dark-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "fire-feather":
	case "water-feather":
	case "soft-feather":
	case "thunder-feather":
	case "light-feather":
	case "wind-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "shue-jade":
	case "shen-jade":
	case "hun-jade":
	case "kai-jade":
	case "chen-jade":
	case "uiw-jade":
	case "gii-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "com-shells":
	case "free-shells":
	case "growth-shells":
	case "rigid-shells":
	case "stable-shells":
	case "will-shells":
	case "wish-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "desert-diamond":
	case "extreme-diamond":
	case "forest-diamond":
	case "meteor-diamond":
	case "moon-diamond":
	case "ocean-diamond":
	case "prairie-diamond":
	case "river-diamond":
	case "sky-diamond":
	case "starry-diamond":
	case "sun-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "dragon-order":
	case "kylin-order":
	case "phoenix-order":
	case "tiger-order":
	case "turtle-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "spring-wind":
	case "summer-wind":
	case "autumn-wind":
	case "winter-wind":
	case "plum-wind":
	case "orchid-wind":
	case "bamboo-wind":
	case "gui-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "safe-charm":
	case "life-charm":
	case "happy-charm":
	case "happiness-charm":
	case "health-charm":
	case "lucky-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "peach-yin":
	case "surname-yin":
	case "maple-yin":
	case "cypress-yin":
	case "pine-yin":
	case "plum-yin":
	case "banyan-yin":
	case "fir-yin":
	case "palm-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "red-crystal":
	case "black-crystal":
	case "blue-crystal":
	case "green-crystal":
	case "hiblue-crystal":
	case "orange-crystal":
	case "purple-crystal":
	case "white-crystal":
	case "yellow-crystal":

	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj11/"+arg);
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

//1
	case "wind emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/wind_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	me->delete("sky/wind emblem");
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;
//1

	default:
	message_vision("������˵��$N�ǲ��ǼǴ���!!û���������Ү!!\n",me);
	break;
	}
	return 1;

}

int do_list()
{
	string *obj;
	object me,ob;
	int i,j;
	me=this_player();
	ob=this_object();
	if(!me->query("sky"))
		return notify_fail("��ĿǰĿǰ��û�������������κζ����!!\n");
	obj=keys(me->query("sky"));

        printf("%s���������ı������£�\n",me->name());
	for(i=0;i<sizeof(obj);i++)
	{
	if( me->query("sky/"+obj[i])==0 ) continue;
	printf(HIM"��"HIW"%-28s"HIM"��"NOR"����"HIM"��"HIW"%2d"HIM"��"NOR" ����\n",to_chinese(obj[i])+"("+obj[i]+")",me->query("sky/"+obj[i]));
	}

	return 1;
}

string want_help()
{
	object me;
	me=this_player();

	if( me->query("quests/can_go_magic-manor") )
	{
	me->delete_temp("quests/magic-manor-01");
	command("smile "+me->query("id"));
	return "���Ƕ�л�ˣ�лл��������������ôһ����æ��";
	}

	else if( me->query_temp("quests/magic-manor-01") == 2 )
	{
	command("bow "+me->query("id"));
	return "һ�оͶ���������!!";
	}

	else if( me->query("combat_exp") >= 3000000 && !me->query_temp("quests/magic-manor-01") )
	{
	me->set_temp("quests/magic-manor-01",1);
	return "����Ҿ���һ������ʱ����һ�����ط�����͵����һ����Ҫ����!!\n"
	+"	    û�뵽�Ƿ�����ô���������Ҷ��޷������͵�������ַ�!!\n"
	+"	    û�������������Ҿͻز��˾���ɽׯ��!!\n"
	+"	    ��Ը�����һ��æ���һ�����������\n";
	}

	else if( me->query_temp("quests/magic-manor-01") >= 4 )
	{
	return "������ö�лл���ˣ������һ���ô��Ҫ�Ķ���!!";
	}

	else
	{
	return "��˵��������Ҳ�ﲻ���ҵģ����Ǳ����ˣ�";
	}
}

string want_help1()
{
	object me;
	me=this_player();
	if( me->query("quests/can_go_magic-manor") )
	{
	return "�Ժ���Ե�ٸ������";
	}

	else if( me->query_temp("quests/magic-manor-01") >= 4 )
	{
	return "���������ˣ�˵������ҲŸ��������ѽ����";
	}

	else
	{
	return "��˵�Ǹ���������Ϊ��֪�ĵط���";
	}
}

string want_help2()
{
	object me;
	me=this_player();

	if( me->query("quests/can_go_magic-manor") )
	{
	me->delete_temp("quests/magic-manor-01");
	command("smile "+me->query("id"));
	return "���Ƕ�л�ˣ���������ôһ����æ��";
	}

	else if( me->query_temp("quests/magic-manor-02") == 1)
	{
	return "�����ţ�������и���������ȷ��ѡ��!!";
	}

	else if( me->query("combat_exp") >= 3000000 && me->query_temp("quests/magic-manor-01") == 4)
	{
	me->set_temp("quests/magic-manor-01",5);
	return "�������ģ��������ɽׯҪ�����һ�ȥ��������ȴ�ڴ˷�����!!\n"
	+"	    ����ɽׯ�������ǲ���ӭ���˽�ȥ��Ҳ����һ�����ܰ��ϴ�æ��\n"
	+"	    ���Ը����ҵĻ����ҿ��Ը������йؾ���ɽׯ���¡�\n"
	+"	    ��Ը���ٰ���һ��æ��\n";
	}

	else
	{
	return "����˵ʲôѽ����";
	}
}

int do_nod()
{
	object me = this_player();

	if(me->query_temp("quests/magic-manor-01") != 1 && me->query_temp("quests/magic-manor-01") != 5 )
        return 0;
	if(me->query_temp("quests/magic-manor-01") == 1)
	{
	me->set_temp("quests/magic-manor-01",2);
	remove_call_out("greeting1");
	call_out("greeting1",1,me);
	}else{
	remove_call_out("greeting3");
	call_out("greeting3",3,me);
	}
	return 0;
}

int do_shake()
{
	object me = this_player();
	if(me->query_temp("quests/magic-manor-01") != 1 && me->query_temp("quests/magic-manor-01") != 5 )
        return 0;
	me->delete_temp("magic-manor-01");
	remove_call_out("greeting2");
	call_out("greeting2",1,me);
	return 0;
}

void greeting1(object me)
{
	object ob = this_object();
	command("smile");
	command("say ��л�ˣ��Ҿ��ڴ˵���ĺ���Ϣ�� ^^");
}

void greeting2(object me)
{
	command("sigh");
	command("say ��Ȼ�㲻�ܰ��ң��������Ƕ�л�ˣ�");
	tell_room(environment(this_object()),HIY"ֻ���������죬����ͷ������ȴ�Ե���į��\n"NOR);
}

void greeting3(object me)
{
	object obj,mob;
	me=this_player();

	command("jump");
	command("say ̫���ˣ�����İ�æ����������Ī��Ķ���!!");
	command("say ����������ҵ�����Ÿ�ʥ������ֺ���������������!!");
	command("say ף������!!");
	message_vision("$N�õ���һ���š�\n",me);
	obj=new("/open/magic-manor/obj/letter");
	obj->move(me);
	me->set_temp("quests/magic-manor-02",1);
}