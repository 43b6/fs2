// open/killer/ninja/find/rx18.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  在怎么笨的人也不会拦下他们，所以你决定好好的发挥你的能力
  利用秘密行动跟踪在队伍的后面，就是离那个人最远的地方
  正当你得意将有机会探查到仙剑的秘密，忽然看到胸前居然穿出一把剑
  背后传来‘居然敢跟踪我们，却没想到我们还有反跟踪队吧’
  原来自己已经落入人家的观察当中，且给你一剑.......
  你的眼前一黑............
  
   
LONG);
  set("no_transmit",2);
  setup();
}

void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  call_out("greeting",3 , ob);   
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",7);
     ob->set("sen",1);
     ob->set("gin",1);
     tell_object(ob," 你感到精神逐渐涣散....逐渐陷入昏迷状态..... \n");
     ob->move("/open/killer/room/pillrm.c");
    }
    // 基本上是很不合理啦，就当成巫师测试用，一到最初点
    else 
     ob->move(__DIR__"r1.c");
}

