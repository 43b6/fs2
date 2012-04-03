// Room: /u/p/powell/room/r2.c

inherit ROOM;

void create ()
{
  set ("short", "大马路");
	set( "build", 7 );
  set ("long", @LONG
由中央驿站一路向西走来, 这附近正是靠近驿站的繁华地带, 附近
商家云集, 使你精神一振, 开始准备收括一切冒险所需, 这条路往北走
就是这附近唯一的药店, 往南走则是间打铁铺。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sparrow" : 3,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/center/room/drug",
  "south" : "/open/center/room/iron",
  "west" : "/open/main/room/r26",
  "east" : "/open/trans/room/room4",
]));

  setup();
}
// by babe 防止 mob 进入                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="east" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

