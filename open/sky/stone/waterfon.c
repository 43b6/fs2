inherit ITEM;
#include <ansi.h>
object ob=this_object(),me=this_player();
void create()
{
	set_name(HIC"水之封印石"NOR,({"water fon stone","stone"}));
	set("long","一个封印着神兵利器的神秘石头，上面有着数个大大小小不等的\n"
		  +"奇形怪洞，应该可以放入解开封印的物品，若想要得到封印的神\n"
		  +"兵，可以将你所得到的解封印的物品(insert)进去，就可以让神\n"
		  +"兵重新现世。\n");
	set("unit","尊");
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
	message_vision(HIC"$N将风之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("wind",1);
	ob->add("check",1);
	destruct(present("wind-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"风之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "fire-emblem":
	if(!ob->query("fire")==1 && (present("fire-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将炎之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("fire",1);
	ob->add("check",1);
	destruct(present("fire-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"炎之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "water-emblem":
	if(!ob->query("water")==1 && (present("water-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将水之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("water",1);
	ob->add("check",1);
	destruct(present("water-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"水之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "ice-emblem":
	if(!ob->query("ice")==1 && (present("ice-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将冰之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("ice",1);
	ob->add("check",1);
	destruct(present("ice-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"冰之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "magic-emblem":
	if(!ob->query("magic")==1 && (present("magic-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将幻之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("magic",1);
	ob->add("check",1);
	destruct(present("magic-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"幻之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "soil-emblem":
	if(!ob->query("soil")==1 && (present("soil-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将土之纹章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("soil",1);
	ob->add("check",1);
	destruct(present("soil-emblem",me));
	call_out("check",1,ob);
	}else{
	tell_object(me,"土之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "light-emblem":
	if(!ob->query("light")==1 && (present("light-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将光之纹章章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("light",1);
	ob->add("check",1);
	destruct(present("light-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"光之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "dark-emblem":
	if(!ob->query("dark")==1 && (present("dark-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将闇之纹章章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("dark",1);
	ob->add("check",1);
	destruct(present("dark-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"闇之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "thunder-emblem":
	if(!ob->query("thunder")==1 && (present("thunder-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将雷之纹章章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("thunder",1);
	ob->add("check",1);
	destruct(present("thunder-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"雷之纹章已经放在正确的地方啰!!\n");
	}
	break;

	case "cloud-emblem":
	if(!ob->query("cloud")==1 && (present("cloud-emblem",me)->query("specialitem")==1) )
	{
	message_vision(HIC"$N将云之纹章章镶入了水之封印石，只见水之封印石缓缓裂开一道缝隙并散出阵阵水光!!\n"NOR,me);
	ob->set("cloud",1);
	ob->add("check",1);
	destruct(present("cloud-emblem",me));
	call_out("check",3,ob);
	}else{
	tell_object(me,"云之纹章已经放在正确的地方啰!!\n");
	}
	break;

	default:
	message_vision("$N似乎想放什么东西，但却找不到正确的位置放!!\n",me);
	break;
	}
	return 1;

}

int check(object ob)
{
	if(ob->query("check") == 10 )
	{
	tell_object(users(),HIC"\n\t\t大地忽然剧烈地憾动了起来，在极远处的一座山顶上落下了数道的闪电!!\n"NOR);
	tell_object(users(),HIC"\n\t\t远处的闪电七彩缤纷，轻轻地划过了天际，划亮了整个天空!!\n"NOR);
	tell_object(users(),HIC"\n\t\t雷声憾动了天地，飞鸟走兽们都慌忙的飞奔走散!!\n"NOR);
	call_out("msg1",5,ob);
	}
	return 1;
}

int msg1(object ob)
{
	tell_object(users(),HIY"\n\t\t在天灵地界中的"HIC"水之封印石"HIY"因为"HIG+ me->query("name")+HIY"的努力而解开了!!\n"NOR);
	tell_object(users(),HIY"\n\t\t因为失去了神力护持的"HIC"水之封印石"HIY"开始剧烈抖动而开始崩散消逝!!\n"NOR);
	call_out("msg2",5,ob);
	return 1;
}

int msg2(object ob)
{
	{
	tell_object(users(),HIC"\n\t\t在天灵地界尘封已久的"HIC"「"HBBLU+HIC"水瑟天光"NOR+HIC"”"NOR+HIC"从水之封印石中得到了解放而现世了!!\n"NOR,ob);
	message_vision(HIW"\n\t\t十枚解开封印的纹章转化为十束水光，缓缓注入了"HIC"「"HBBLU+HIC"水瑟天光"NOR+HIC"”"NOR+HIW"之中转化为不可思议的力量!!\n",ob);
	message_vision(HIW"\n\t光茫消散之后"HIC"「"HBBLU+HIC"水瑟天光"NOR+HIC"”"NOR+HIW"缓缓凝聚在$N手中!!\n"NOR,me);
	new("/data/autoload/open-area/light_cloak")->move(me);
	write_file("/log/sky/waterfon",sprintf("%s(%s) 解开了「水瑟天光”于 %s\n",me->name(1),me->query("id"),ctime(time())));
	destruct(ob);
	}
	return 1;
}