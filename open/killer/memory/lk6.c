inherit ROOM;
void create()
{
set("short", "莫塔湖南边");
set("long", @LONG
	在你眼前的是一大片深不可测的湖水，传说此湖水表面平静
	但是内部暗潮汹涌，就连泳技高超的高手也不敢轻易尝试
	你想进去试看看吗？我想还是不要吧................

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hr3.c",
  "east" : __DIR__"lk7.c",
  "north" : __DIR__"lk4.c",
]));

setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();
  int max;

  if (arg)
  	return 0;
  if (me->query_temp("memory")  < 4 )
  {
    message_vision("$N哇勒....你是怎么来到这里的，作弊呀？？  可恶........。\n", me);
    message_vision("一瞬间一阵机关鸣动声............\n",me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"一阵冲撞力将你弹飞，落入陷阱之中一直坠落。。。。。\n");
    me->move("/open/killer/room/firstrm.c");
    return 0;
  }

   if (me->query_temp("find_fish")  == 2 )  //因为是要依序寻找所以用等于检查
  {
    message_vision("$N利用定水珠的力量，在水中仔细的寻找大鱼的身影。\n", me);
    message_vision("$N再一次的发现水中有一道黑影一闪而过，但速度之快仍令人难以置信\n",me);
    message_vision("$N心随意转，立刻追上去，但黑影消失在远远的东北方\n",me);
    me->set_temp("find_fish",3);
    return 1;
  }
   tell_object(me,"你在湖中，四处寻找，不过并没有看到什么东西，\n看来需要到其他地方找找\n");
   return 0;
 }

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

  if ((dir == "north")  || (dir == "east"))
  {
	if (me->query("class") != "killer")
  	{
	    message_vision("$N勇敢的跳了下去，但是强大的水流将自己带往深处\n",me);
	    message_vision("$N被水流不知带往何处............\n", me);
	    max=me->query("kee");
	    max= (int) (max/2);
	    me->add("kee",-max);
	    me->move("/open/ping/room/road4");
	    return 0;
	 }
	 if ( !present("static_water",this_player()) )  //检查玩家是否有定水珠
	{//如果没有定水珠，又是MEM等于三，代表第一次来到这里
		   message_vision("$N勇敢的跳了下去，但是强大的水流将自己带往深处\n",me);
		   message_vision("$N被水流不知带往何处............\n", me);
		   if (me->query_temp("memory") ==3)
	  	{
			 ob2=new(__DIR__"static.c");
	       		 ob2->move(me);
  			 me->set_temp("memory",4);
			 me->move(__DIR__"ballrm.c");
		  }
		  if(me->query_temp("memory") < 3)
me->move("/open/killer/room/rbd.c");
		   return 0;
	}  
	 //如果有定水珠就代表可以通过
//
	  if(me->query_temp("memory") <= 3)
		   return 0;
	 return 1;
  }
return 1;
}
