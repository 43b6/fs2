// Room: /open/hall/h_room8.c

inherit ROOM;

void create()
{
        set("short","衙门饭厅");
        set("long",@LONG
衙门饭厅，一般职位较低的都在这用餐，数张木板制的方桌，每桌
约有十张圆形小板凳，地板上散着一些菜屑，显的十分脏乱的样子！东
西各有着一扇窗子，通风效果还不错，因此，这儿异味并不是很重！
LONG);
        set("exits",([
  "north":__DIR__"h_room7",
  "west":__DIR__"h_room9",
]));

        setup();
}
