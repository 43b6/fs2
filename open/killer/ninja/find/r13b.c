// open/killer/ninja/find/r13b.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
    为了表示对老祖的尊重，所以你决定在原地好好等待，
    没有多久后，老祖由北方回来，欣慰的对你说：
    ‘看来你真的是可以信任的人....不，应该说是精神体吧
      既然小如会施展心灵探索，代表你是值得信任的，事实也证明如此
      我在北方设下一个结界，你回去后，只要到墓碑那里
      唸出(intone) "耶西西凹安肮" 你将可以取得绿毛金铃
      有了它之后，柴荣才会教你，分功化影身法........
      快走吧....我想你是对付不了那个老鬼的.........’
    你本想继续奋战的，但是精神体似乎被招唤，而逐渐抽离开这个世界。
    
    
LONG);

  set("no_transmit",2);
  setup();
}

//基本上，这是b部分，有关分功化影的部分
//但是b部分是，有关 杀手的一些基本设定的介绍 所以只好要玩家在解一次
void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  
  if (ob->query("ninja/bpart") != 1)
  	ob->set("ninja/bpart",1);
  	
  //代表玩家还不知道，a部分的线索，所以要玩家再解
  if (ob->query("ninja/apart") != 1)
  	call_out("greeting",5 , ob);   
  else
  {
  	call_out("finished",5 , ob);
  }  	
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   { 
     tell_object(ob,"虽然绿毛金铃由来已经清楚\n");
     tell_object(ob,"但是你似乎有漏掉一些线索，再探索另一部分吧\n");
     ob->move(__DIR__"r1.c");
   }
    else 
     ob->move(__DIR__"r1.c");
}

void finished(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",9);
     tell_object(ob,"所有的历史与线索已经探查完成。 \n");
     tell_object(ob,"看来要先去把绿毛金铃找出来了。\n");
     ob->move("/open/killer/room/pillrm.c");
   }
   else 
     ob->move(__DIR__"r1.c");
}