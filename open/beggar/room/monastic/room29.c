inherit ROOM;

void create()
{
 set("short","训练场");
 set("long",@LONG
  这里是丐帮训练有成的弟子加强训练的地方，你看到这里
  的弟子和外头的不同，这里的弟子身上都背有布袋，有一
  个、两个．．．一直到八个，这里就是丐帮有袋弟子修练
  的地方。
  
LONG);
 set("exits",([
 "north" : __DIR__"room21.c",
]));

setup();
}
