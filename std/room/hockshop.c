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
	    return notify_fail("�������Լ���id\n");
	pn = keys(pawnname);
	if(sizeof(pn) == 0)
		return notify_fail("ร���û������䵱��Ʒ��\n");
	printf("\t���䵱���������Ʒ�У�\n");
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
		return notify_fail("��Ҫ��ʲô��Ʒ�����̹��ۣ�\n");

	if( ob->query("money_id") )
		return notify_fail("���ǡ�Ǯ������û������\n");

	value = ob->query("value");
	if( !value ) printf("%sһ�Ĳ�ֵ��\n", ob->query("name"));
	else 
		printf("%s��ֵ%s��\n�����Ҫ�䵱(pawn)�������õ�%s��\n",
			ob->short(), cvalue(value),
			cvalue(value * 60 / 100));

	return 1;
}
else
{
	inv = all_inventory(me);
	if( !sizeof(inv) )
	 {
		return notify_fail( "Ŀǰ������û���κζ����ɹ����ۡ�\n");
	}
	printf("�����ϴ�����Щ������\n%s\n",
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
		return notify_fail("��Ҫ�䵱ʲô��Ʒ��\n");

	if( ob->query("money_id") )	return notify_fail("��Ҫ����Ǯ����\n");

	if( ob->query_amount() )
	return notify_fail("�ⶫ�����ܵ�\n");
	value = ob->query("value");
	if( !value ) return notify_fail("����������ֵǮ��\n");
// �޸�by avgirl,����eq���ܵ�...00/9/26
if(ob->query("clan_name")) return notify_fail("�Ҳ���������ֵĶ�����\n");

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
 	  message_vision("$N�����ϵ�"+pob + "�ó����䵱��"
	    +cvalue(value*trade_lv/100)+"\n",me );
	  me->pay_player(value *trade_lv/100);
	}
	else
 	  message_vision("�����ϰ��$N˵: �Բ����, ������ҵ��\n", me);

	return 1;
}

int do_redeem(string arg)
{
	object ob, me=this_player();
	int trade_lv,mage,recost;

if( !arg ) return notify_fail("��Ҫ���ʲô?\n");
if( me->query("id") != pawnname[arg] )
	return notify_fail("�ף��ⲻ�������İɣ�\n");
	if(!trade_lv = me->query_skill("trade",1))
	  trade_lv = 1;
	if (trade_lv > 100) trade_lv = 100;
	mage = me->query("mudage");
	recost = pawnvalue[arg]+pawnvalue[arg]*((100-trade_lv)/500)+
((mage-pawntime[arg])/3600);
if( me->can_afford(recost) )
{
	ob = new(pawnpath[arg]);
	tell_object(me,"������Ҫ��ص�"+ob->short()+"\n");
	me->pay_money(recost);
	ob->move(me);
	redeem_thing(arg);
	message_vision("$N����"+cvalue(recost)+"���"+ob->short()+"\n", me );
	if(me->query_skill("trade",1) ||
	me->query_skill("trade") < 100 )
	me->improve_skill("trade",(random(me->query("int"))+
	random(me->query("per"))/2) );
	return 1;
}
else
{
	return notify_fail("��û���㹻��Ǯ���������Ʒ,\n
	���������Ʒ��Ҫ"+cvalue(recost)+"\n");
}
}
int do_nowork()
{
    message_vision("����С��˵��: ���̵���, ���ڲ������κ�ҵ����!!!\n",this_player());
    return 1;
}
