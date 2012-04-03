inherit ITEM;
#include <ansi.h>
string bname;

void create()
{
        set_name("��������",({"soil ball","ball"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else
        {
	set("long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������������ɢ
�����������������Կ�������֮�е�ˮ��֮�������Լ��پ����˺���
����������֮�˺��������������Ҫ����֮�󣬲ŻῪ�������ã���
��δ������������������κ����õġ�

���鷽ʽ�� gather ball
ɢ�鷽ʽ�� scatter ball
LONG);

	set("value",100000);
	set("unit","��");
	set("magic-manor",1);
        }
	setup();
}

void init()
{
        add_action("do_gather","gather");
        add_action("do_scatter","scatter");
}

int do_gather(string arg)
{
object ob,me;

        me = this_player();
        ob = this_object();

	bname = base_name(environment(me));

        if( !arg )
	return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
	return 0;

	if( ob != this_object() )
	return 0;

	if( bname != "/open/magic-manor/manor53" )
	return notify_fail(""+ob->name(1)+"�޷��ڴ˾ۼ�������\n");

        if( me->query_temp("magic-manor/gather-soil") )
	return notify_fail(""+ob->name(1)+"�Ѿ�������ɡ�\n");

        ob->set("no_put",1);
        ob->set("no_drop",1);
        ob->set("no_get",1);
        ob->set("no_sell",1);
        ob->set("no_auc",1);
        ob->set("no_give",1);

        message_vision(HIW"$N���Ὣ$n"+HIW+"��������֮�У���$n"+HIW+"��ʼ���վ���ص�������\n"NOR,me,ob);
	me->start_busy(5);
	call_out("act1",5,ob);

	return 1;
}

int do_scatter(string arg)
{
	object ob,me;

        me = this_player();
        ob = this_object();

	bname = base_name(environment(me));

        if( !arg )
	return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
	return 0;

        if( ob != this_object() )
	return 0;

	if( bname != "/open/magic-manor/manor53" )
	return notify_fail(""+ob->name(1)+"�޷��ڴ�ɢȥ������\n");

        if( !me->query_temp("magic-manor/gather-soil") )
	return notify_fail(""+ob->name(1)+"��δ�ۼ��κ�������\n");

        ob->delete("no_put",1);
        ob->delete("no_drop",1);
        ob->delete("no_get",1);
        ob->delete("no_sell",1);
        ob->delete("no_auc",1);
        ob->delete("no_give",1);

        message_vision("$N��$n����������ɢȥ��$n�ظ���һ��û���κ����õ����ӡ�\n",me,ob);
        ob->set("name","��������");
        me->delete_temp("magic-manor/gather-soil",1);
	me->delete_temp("magic-manor/soil-shield",1);
	return 1;
}

int act1(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act2",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act2(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act3",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act3(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act4",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act4(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act5",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act5(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act6",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act6(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act7",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act7(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act8",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act8(object ob,object me)
{
	me=this_player();
	bname = base_name(environment(me));
	if( bname == "/open/magic-manor/manor53" )
	{
        message_vision(HIW"$N"HIW"����������ȡ�����У�ֻ��$N"HIW"�����������â��\n"NOR,ob);
	me->start_busy(5);
	call_out("act9",5,ob);
	}else{
	message_vision(HIR"$N"HIR"һʱʧȥ�������ĵ�������Ȼ��Ϊ����!!\n"NOR,ob);
	destruct(ob);
	}
	return 1;
}

int act9(object ob,object me)
{
	ob=this_object();
	me=this_player();
	message_vision(HIW"ֻ��$N"HIW"��������������$N"HIW"������ǿ�ҹ�â��\n"NOR,ob);
        ob->set("name",HIW"(����) "NOR+YEL"��������"NOR);
        me->set_temp("magic-manor/gather-soil",1);
	me->set_temp("magic-manor/soil-shield",1);
	return 1;
}