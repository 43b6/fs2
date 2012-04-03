inherit ROOM;

void create()
{  
   
   set("short","海洋");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	海上风平浪静，天上风和日丽，海中暗潮汹涌。
	然而因为定水珠的神奇力量，让你丝毫感觉不到海的威胁。
	但是的冷度时在让你快哭出来了，这实在是好冷呀！！
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "west" : __DIR__"landrm7.c",  	
       "east" : __DIR__"landrm5.c",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/sail_fish.c":1,
      "/open/killer/sea/npc/gull.c":1,
      "/open/killer/sea/npc/auklet.c":1,
]));

 setup();
}

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

 if ( !present("static_water",this_player()) )  //检查玩家是否有定水珠
 {//如果没有定水珠，代表无法在水中移动
	   message_vision("$N居然没了定水珠，完蛋了！！.........\n",me);
	   message_vision("$N在海中漂流........\n", me);
	   me->add("kee",-20);
	   return 0;
}  
 //如果有定水珠就代表可以通过
me->add("kee",-5);
 return 1;
}