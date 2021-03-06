// Room: /open/gsword/room/lake0.c

inherit ROOM;

void create ()
{
  set ("short", "昆明湖西");
  set ("long", @LONG
微微的风吹坲着岸边的杨柳,凛凛的金光在水面上闪烁,几只蜻
蜓飞游在湖上,细数着春光的斜阳,诗云: 
        
      西湖那有昆明好  四季如春景不息     于你心有戚戚焉...             
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/visitor1" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : "/open/gsword/room/lake1.c",
  "southeast" : "/open/gsword/room/lake3.c",
  "west" : "/open/gsword/room/mroom0.c",
  "east" : "/open/gsword/room/lakeroom0.c",
]));


  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
