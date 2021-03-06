#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m□[1m□[1m□[1ms[1m□[1m□[1m□[1m□[0m");
  set ("long", @LONG
火光四射, 烈焰直冲天顶, 使得这里的气候十分炎热, 四周都是火光,
这大概是统治着这里的怪物以无穷的力量所造成的火之结界, 当你来到了这
时, 同时被它的火光迷惑, 找不到正确的出路。
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"f-21.c",
  "east" : __DIR__"f-7.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/small-dragon.c" : 1,
]));

  setup();
}
int valid_leave(object who, string dir)
{  
        int exp,kar,cps,cor,intt,factor=50; 
        object ob2;  
        if (dir == "west" || dir == "east")  
        {        
                if (present("small dragon",environment(who)) && 
                    who->is_fighting())  //检查小火龙是否还在与移动者是否在战斗中   
                {                   
                  if(who->query_temp("flee")==1)
                  {
                    return notify_fail(HIR"小火龙仍然挡住了去路\n"NOR);                    
                  }
                  exp=who->query("combat_exp");
                  kar=who->query("kar");
                  cps=who->query("cps");
                  cor=who->query("cor");
                  intt=who->query("int");
                  if(kar>30)
                    kar=30;
                  if(cps>30)
                    cps=30;
                  if(cor>30)
                    cor=30;
                  if(intt>35)
                    intt=35;
                  if(who->query("setgift-mk")==1)
                  {
                    kar=who->query("setgift/kar");
                    cps=who->query("setgift/cps");
                    cps=who->query("setgift/cor");
                    intt=who->query("setgift/int");
                  }   
                  if(exp<60000000)
                  factor=10;
                  else if(exp<8000000)
                  factor=20;
                  else if(exp<10000000)
                  factor=30;
                  else if(exp<12000000)
                  factor=40;                 
                  if(random(190)>(factor+kar+cps+cor+intt))
                  {                                      
                    who->set_temp("flee",1);
                    call_out("remove_flee",1,who);
                    return notify_fail(HIR"\n小火龙的身体挡住了退路\n"NOR); 
                  }                    
                 }                    
        }
        return :: valid_leave(who,dir);
}
int remove_flee(object who)
{
   if(who)
   who->delete_temp("flee",1);
   return 1;
}