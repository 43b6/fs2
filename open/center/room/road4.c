// Room: /u/p/powell/room/r4.c

inherit ROOM;

void create ()
{
  seteuid(getuid());

  set ("short", "大马路");
  set ("long", @LONG
经过漫长的爬山涉水, 终于来到可以暂时停下来休息几天的地方, 这里
是从京城通往北方与西南方的战略要点, 自前朝起就有这个中央驿站的存在,  
据说当时是为连络京城与边界而建立, 自今仍能发挥其驿站的功能, 由这里
往东走可回到京城, 北边的商店老板听说消息极为灵通, 南边则是一家钱庄,
由于多次被洗劫, 在安全防护上已经是全国最佳。
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/dog" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/trans/room/room4",
  "north" : "/open/center/room/store",
  "south" : "/open/center/room/bank",
  "east" : "/open/main/room/r27",
]));

  setup();
}
// by babe 防止 mob 进入                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="west" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

