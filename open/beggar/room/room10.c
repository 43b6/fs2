inherit ROOM;

void create()
{
 set("short","太君山顶");
 set("long",@LONG
  一上顶峰，映入眼帘的却是一栋破旧的庙宇,虽然有点破旧，但
  是四周的环境却很干净，屋檐下方挂着一个匾额，上头刻了
 「降龙罗汉”四个大字，看来这里应该丐帮总舵的所在地
  了。

LONG);
 set("exits",([
 "up" : __DIR__"room16.c",
 "westdown" : __DIR__"room09.c",
 "enter" : "/u/l/list/area/monastic/room18.c"
 ]));
 setup();
}
