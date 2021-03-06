#include <room.h>
#include <ansi.h>
inherit NPC;

string do_askblue();
string do_askbluecard();
string asktest();
string askcard();

void create()
{
set_name("独居老人",({"oldman"}) );
set("long","这是一位面无表情的老人，他会是(蓝凤组)的联络人吗？\n"+
       "还是先跟他打声<招呼再说吧。。。\n");
set("gender","男性");
set("age",55);
set("combat_exp",200000);

set("inquiry",([ 
    "蓝凤组" : (: do_askblue :),
    "蓝凤绝杀令" : (: do_askbluecard :),
    "试炼" : (: asktest :),
    "灵异令牌" : (: askcard :),
]));
setup();
}

void init()
{
	add_action("do_hi","hi");
}


int accept_fight(object me)
{
   return notify_fail("放过我吧！让我度过余生吧！\n");
}

int do_hi(string arg)
{
    if ((!arg) || (arg != "oldman" ))
		return notify_fail("你在跟谁打招呼呀！。\n");
	if (this_player()->query_temp("head") < 1)
		return notify_fail("妈的，你怎么来到这里的？！。\n");
	if (this_player()->query_temp("head") == 1)
	{
		message_vision("嗯！有什么事情吗？能来这里，看来是问（蓝凤组）的事情吧？\n",this_player());
		this_player()->set_temp("havehi",1);
		return 1;
	}
	message_vision("不用多礼，天灵老人的灵异令牌拿来了吗？有了就拿给我！\n",this_player());
        return 1;
}

int accept_object( object me , object ob )
{
	object obj;

    if(ob->query("id") != "ghost_card")
	{
		command("say 甚么东西啊?");
		return 0;
	}
	if( me->query_temp("head") !=5 ) 
	{
		command("say 居然敢叫别人帮你拿令牌！你没资格出这一个任务了！滚！");
		me->delete_temp("head");
		return 0;
	}
	//表有令牌，而且令牌是自己拿的
	command("nod");
	command("say 果然是灵异令牌，你必须通过蓝凤试炼，才有资格去见到我们组长");
	obj = new("/open/killer/headkill/obj/wind.c");
	obj->move(this_player());
	message_vision("$N给$n一份"+obj->name()+"。\n",this_object(),this_player());
	command("say 你可以利用它，前往各个试炼场，详细使用法自己看卷轴上有写");
destruct(ob);
	me->set_temp("head",6);
	me->set_temp("kill_ghost",0);
}

string askcard ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "没有礼貌的家伙，滚！";
	if (me->query_temp("askblue") ==3)
	{
		me->set_temp("head",2);
		command("say 想离开这里的话，打 pass way，就可以离开");
		return "那在灵异掌令手中，自己去找他问灵异令牌，不知道谁是灵异掌令？看看杀手简介吧！混！";	
	}
    return "你想要问几次呀！";
}

string asktest ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "没有礼貌的家伙，滚！";
	if (me->query_temp("askblue") ==2)
	{
		me->set_temp("askblue",3);
		return "那是一种资格考，想要去试炼先给我(灵异令牌)";	
	}
    return "你想要问几次呀！";
}

string do_askbluecard ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "没有礼貌的家伙，滚！";
	if (me->query_temp("askblue") ==1)
	{
		me->set_temp("askblue",2);
		return "那是可以命令蓝凤组的令牌，想要的话，需先通过(试炼)";	
	}
    return "你想要问几次呀！";
}

string do_askblue ()
{
	object me=this_player();

	if (me->query_temp("havehi") != 1)
		return "没有礼貌的家伙，滚！";
	if (me->query_temp("head") == 1)
	{
		me->set_temp("askblue",1);
		return "想驱动蓝凤组的话，就必须有(蓝凤绝杀令）";	
	}
    return "你想要问几次呀！";
}
