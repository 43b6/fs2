// open/killer/ninja/find/rx10.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  为了避免干扰到过去的事情，你决定拒绝掉绿毛老祖要求。
  ‘抱歉，前辈，我不能帮助你，告辞!’你便转身想要离去。
  岂知，老祖抓住你的手：‘小子，没有人可以拒绝我!!!’
  忽然，你觉得你体内的血液似乎由你体内飞奔而出........
  但是你却没有看到有任何血液流出？？但是柴容那失血过多的脸上，
  却逐渐的出现血色.....在你眼前一黑之前....听到老祖说
  ‘魔.气.杀.....之....血变!’
  
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

