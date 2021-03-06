// bento.c

inherit ITEM;

void create()
{
	set_name("便当",({"bento"}));
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	  set("long","一盒香喷喷的便当，令你不禁食指大动。\n");
	  set("unit","盒");
	  set("食物", ([
                        "剩" : 1,       // 可以吃几口
                        "供应": 50,     // 每一口填饱肚子的量
          ]) );
	}
	setup();
}

int finish_eat()
{
	set_name("便当盒",({"bento box","box"}));
	set_weight(150);
	set("unit","个");
	set("long","一个空空的便当盒。\n");
	return 1;
}

int do_eat(string arg)
{
	object who;
	who = this_player();

	// 一定要是自己去拿的便当才可以吃，以免有人帮别人拿
	if( !who->query_temp("bento") )
		return notify_fail("人家的便当你吃什么吃？\n");
	if( who->query_temp("eating") )
		return notify_fail("嘿嘿....吃一个就够了吧！\n");
	who->set_temp("eating", 1);

	return 1;
}
