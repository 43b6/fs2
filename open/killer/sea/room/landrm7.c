// 2001.12.11 新增前往东瀛岛的路线
inherit ROOM;

void create()
{  
   
   set("short","神仙岛港外海");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	海岸线在远远的地方，海中的生物也逐渐的变少了。
	然而水中的温度，也更低了。。。。。
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : __DIR__"landrm6.c",
        "west" : "/open/killer/ninja/room/sea01.c",  	
       "south" : __DIR__"landrm8.c",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/bunk_fish.c":1,
      "/open/killer/sea/npc/hake_fish.c":1,
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
me->add("kee",-10);
 return 1;
}