inherit ROOM;

void create()
{
        set("short","尸骨道");
        set("long",@LONG
你踏行在尸骨遍地的地方, 每行走一步都会出现〔喀啦、喀啦〕
的碎骨声，天空不时的有几只巨兽徘徊着，发出的吼声响彻整个大地
，地上又不时的跑着一些毛隆隆的小动物，十分的诡异，往南望去，
有一座呈现凹字型的湖泊，西北方则是一个闪耀着金色光芒的建筑物
，而在你的东北方，则有一座森林。
LONG);
        set("exits",([
"north":__DIR__"d-03",
"south":__DIR__"d-01",
"west":__DIR__"d-07",
"east":__DIR__"d-04",
]));
        set("objects",([
__DIR__"npc/die-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}

