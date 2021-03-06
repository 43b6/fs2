inherit ROOM;
void create()
{
set("short", "花园迷阵");
set("long", @LONG
	在你眼前的是一大片夹竹桃，正开着粉红色的花朵，微风轻拂，枝条摇曳。
	婆娑起舞，奼紫嫣红，轻舞波浪的旋律，不由得令人痴醉。
	陪伴花草的是一堆堆布置完美的绿石，有了这些小山高的石堆，
	将此景色点缀的更无懈可击，石堆与花之间有着参差不齐的羊肠小径。
	东方种有三棵夹竹桃，西方种有两棵夹竹桃，北方只有一个石头，

LONG );
set("exits", ([ /* sizeof() == 2 */
  "north": "/open/killer/room/outr3.c",
  "east" : "/open/killer/room/outr3.c",
  "west" : __DIR__"flowrm2.c",
  "south": "/open/killer/room/outr3.c",
]));

setup();
}

int valid_leave(object me, string dir)
{
  if (dir != "west") 
  {
    me->set_temp("flowrun",0);
    return 1;
  }
//以下表示走对正确方向
  if (me->query_temp("head") < 1)
  {//不是解谜者不可以进花园迷阵
    me->move("/open/killer/room/outr3.c");
    return 0;
  }
  //这里是花园迷阵的开头，走错就必须重来
  //下一个房间才开始检查是不是走够路了！
  me->set_temp("flowrun",1);
  return 1;
}
