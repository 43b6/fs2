// hockshop.c by chun 1995.10.21

inherit ROOM;
inherit CHINESE_D;
inherit F_FINANCE;

mapping pawnob = ([ ]);
mapping pawnname = ([ ]);
mapping pawnvalue = ([ ]);
mapping pawnpath = ([ ]);
mapping pawntime = ([ ]);

void create()
{
	set("no_clean_up",1);
	setup();
}

void redeem_thing(string arg)
{
	map_delete( pawnob , arg );
	map_delete( pawnname , arg );
	map_delete( pawnvalue , arg );
	map_delete(pawnpath , arg );
	map_delete(pawntime , arg );
}

void init()
{
/*
	add_action("do_value", "value");
	add_action("do_pawn", "pawn");
	add_action("do_redeem","redeem");
	add_action("do_list","list");
*/
    add_action("do_nowork","value");
    add_action("do_nowork","pawn");
    add_action("do_nowork","redeem");
    add_action("do_nowork","list");
}

int do_list(string arg)
{
	string	*pn;
	object	me=this_player();
	int i;

	if(!arg) arg = me->query("id");
	else if (!wizardp(me) && arg != me->query("id"))
	    return notify_fail("请输入自己的id\n");
	pn = keys(pawnname);
	if(sizeof(pn) == 0)
		return notify_fail("喔！您没在这儿典当物品。\n");
	printf("\t您典当在这儿的物品有：\n");
	for(i=0;i<sizeof(pn);i++)
	{
	  if( pawnname[pn[i]] == arg )
	    printf("\t\t%s\n",pawnob[pn[i]]);
	}
	return 1;
}

int do_value(string arg)
{
	object ob,*inv, me=this_player();
	int value;

	if( arg )
	{
	if( !(ob = present(arg, me)) )
		return notify_fail("你要拿什么物品给当铺估价？\n");

	if( ob->query("money_id") )
		return notify_fail("这是「钱”，你没见过吗？\n");

	value = ob->query("value");
	if( !value ) printf("%s一文不值。\n", ob->query("name"));
	else 
		printf("%s价值%s。\n如果你要典当(pawn)，可以拿到%s。\n",
			ob->short(), cvalue(value),
			cvalue(value * 60 / 100));

	return 1;
}
else
{
	inv = all_inventory(me);
	if( !sizeof(inv) )
	 {
		return notify_fail( "目前你身上没有任何东西可供估价。\n");
	}
	printf("你身上带着这些东西：\n%s\n",
	implode(map_array(inv,"value_list",this_object()),"") );
	return 1;
}
}
int do_pawn(string arg)
{
	object ob, me=this_player();
	int value,trade_lv;
	string pob, pid, ppath, ptime;


	if(!trade_lv = me->query_skill("trade",1) )
	trade_lv = 1;
	if (trade_lv > 100) trade_lv = 100;

	if( !arg || !(ob = present(arg, me)) )
		return notify_fail("你要典当什么物品？\n");

	if( ob->query("money_id") )	return notify_fail("你要当「钱”？\n");

	if( ob->query_amount() )
	return notify_fail("这东西不能当\n");
	value = ob->query("value");
	if( !value ) return notify_fail("这样东西不值钱。\n");
// 修改by avgirl,帮派eq不能当...00/9/26
if(ob->query("clan_name")) return notify_fail("我不收这种奇怪的东西。\n");

	if(me->query_skill("trade",1) ||
	me->query_skill("trade") < 100 )
	me->improve_skill("trade",(random(me->query("int"))+
	random(me->query("per")) )/2 );
	pob = ob->short();
	pid = me->query("id");
	ppath = base_name(ob);
	ptime = me->query("mudage");
	destruct(ob);
	if (!ob) {
	  pawnob[arg] = pob;
	  pawnname[arg] = pid;
	  pawnvalue[arg] = value;
	  pawnpath[arg] = ppath;
	  pawntime[arg] = ptime;
 	  message_vision("$N把身上的"+pob + "拿出来典当了"
	    +cvalue(value*trade_lv/100)+"\n",me );
	  me->pay_player(value *trade_lv/100);
	}
	else
 	  message_vision("当铺老板对$N说: 对不起喔, 今天休业。\n", me);

	return 1;
}

int do_redeem(string arg)
{
	object ob, me=this_player();
	int trade_lv,mage,recost;

if( !arg ) return notify_fail("你要赎回什么?\n");
if( me->query("id") != pawnname[arg] )
	return notify_fail("咦？这不是您当的吧！\n");
	if(!trade_lv = me->query_skill("trade",1))
	  trade_lv = 1;
	if (trade_lv > 100) trade_lv = 100;
	mage = me->query("mudage");
	recost = pawnvalue[arg]+pawnvalue[arg]*((100-trade_lv)/500)+
((mage-pawntime[arg])/3600);
if( me->can_afford(recost) )
{
	ob = new(pawnpath[arg]);
	tell_object(me,"这是您要赎回的"+ob->short()+"\n");
	me->pay_money(recost);
	ob->move(me);
	redeem_thing(arg);
	message_vision("$N用了"+cvalue(recost)+"赎回"+ob->short()+"\n", me );
	if(me->query_skill("trade",1) ||
	me->query_skill("trade") < 100 )
	me->improve_skill("trade",(random(me->query("int"))+
	random(me->query("per"))/2) );
	return 1;
}
else
{
	return notify_fail("你没有足够的钱赎回这样物品,\n
	赎回这样物品需要"+cvalue(recost)+"\n");
}
}
int do_nowork()
{
    message_vision("当铺小弟说道: 当铺倒了, 现在不受理任何业务了!!!\n",this_player());
    return 1;
}
