#include <ansi.h>
inherit NPC;

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
	set("combat_exp",10000);
	set("int",35);
	set("kar",35);
	set("con",35);
	setup();
}

void init()
{
	add_action("do_pay","pay");
	add_action("do_want","want");
	add_action("do_list","list");
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
	int os;
	me=this_player();
	oo=ob->query("id");
	os=ob->query("specialitem");

	if( !me->query_temp("quests/sky/pay") )
	{
	message_vision(HIY"������˵��$N"HIY"û�и�(pay)�ҽ�Ǯ���Ҳ�����Ѱ��㱣�ܵġ�"+ob->query("name")+HIY"���͵����͸����ˡ�\n"NOR,me);
	destruct(ob);
	return 1;
	}
	if( os == 1 )
	{
	message_vision(HIY"������˵�������ұ��ܵĶ���������$N"HIY"��һ�ٶ�ʮ���İɣ������׵�!!\n"NOR,me);
	me->add("sky/"+oo,1);
	me->delete_temp("quests/sky/pay");
	destruct(ob);
	}else{
	message_vision(HIY"������˵����"+ob->query("name")+HIY"����ô��Ҳ�����Ǳ��������Ȼ$N�͸����ˣ��ҾͲ������������� ^^\n"NOR,me);
	destruct(ob);
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
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/sky_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "peace-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/peace_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "emperor-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/emperor_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"��������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "soil-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/soil_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "loyal-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/loyal_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "charity-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/charity_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "justice-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/justice_stone");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "fire-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/fire_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "wind-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/wind_emblem");
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
	case "ice-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/ice_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "thunder-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/thunder_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "water-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/water_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"��������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "soil-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/soil_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "magic-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/magic_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "light-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/light_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "cloud-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/cloud_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "dark-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/dark_emblem");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "fire-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/fire_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "water-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/water_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "soft-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/soft_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "thunder-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/thunder_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "light-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/light_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "wind-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/wind_feather");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "shue-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/shue_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "shen-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/shen_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "hun-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/hun_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "kai-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/kai_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "chen-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/chen_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "uiw-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/uiw_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "gii-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/gii_jade");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "com-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/com_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "free-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/free_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "growth-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/growth_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "rigid-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/rigid_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "stable-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/stable_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "will-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/will_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "wish-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/wish_shells");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "desert-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/desert_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "extreme-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/extreme_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "forest-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/forest_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "meteor-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/meteor_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "moon-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/moon_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "ocean-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/ocean_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "prairie-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/prairie_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "river-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/river_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "sky-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/sky_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "starry-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/starry_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "sun-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/sun_diamond");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "dragon-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/dragon_order");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "kylin-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/kylin_order");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "phoenix-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/phoenix_order");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "tiger-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/tiger_order");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "turtle-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/turtle_order");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "spring-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/spring_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "summer-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/summer_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "autumn-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/autumn_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "winter-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/winter_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "plum-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/plum_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "orchid-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/orchid_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "bamboo-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/bamboo_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "gui-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/gui_wind");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "safe-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/safe_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "life-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/life_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "happy-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/happy_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "happiness-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/happiness_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "health-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/health_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "lucky-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/lucky_charm");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "peach-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/peach_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;
//3
	case "peach yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/peach_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	me->delete("sky/peach yin");
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;
//3
	case "surname-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/surname_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "maple-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/maple_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;
//4
	case "maple yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/maple_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	me->delete("sky/maple yin");
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;
//4
	case "cypress-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/cypress_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "pine-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/pine_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "plum-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/plum_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "banyan-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/banyan_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "fir-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/fir_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

	case "palm-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/palm_yin");
	tb->move(me);
	message_vision("�����콫$n������$N��\n",me,tb);
	message_vision(HIY"������˵��ϣ�����л���Ϊ$N"HIY"���񣬻�ӭ$N"HIY"���ٶ�����!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"������˵��$N"HIY"û����������ķ����������ɣ�\n"NOR,me);
	}
	break;

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

