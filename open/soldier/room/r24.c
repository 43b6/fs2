

inherit ROOM;
void create()
{
  set ("short", "大长廊");
  set ("long","
    这一长廊四面涂金，一路望过去都是金光闪闪，像似
要通往哪个重要的地方，一路上都是纯金打铸的装饰品，
大都是中国文化的东西莫非这就是他们所谓的战利品吗??
往下走去探探究竟吧!!

 ");
   set("exits", ([
 "north"       :__DIR__"r20.c",
   "south"       : __DIR__"r29.c",
   "east"       : __DIR__"r23.c",   
  ]));      
  set("light_up", 1);
  setup();
} 


