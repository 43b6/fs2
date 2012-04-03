// open/killer/ninja/find/rx19.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  此时不走更待何时？利用幻星步快速切换到队伍外围，身影之快根本没人发现。
  但是你想的实在太天真了，螳螂捕蝉，黄雀在后，
  一道剑气横过你的胸口，你的精神受到严重的打击!!
  在你精神涣散前，才想到以前在秘密行动训练中所提到的注意事项
  ‘一个超过五人的队伍在潜行当中，必定是最明显的一个目标
    在队伍后方五丈之内，布下另一监视人员，进行反监视
    如此一来，将可以避免队伍反而被跟踪.....’
  唉....真是少壮不努力，老大徒伤悲...........
   
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

