inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"HIG" 同 心 桥 "NOR);
	set("long",@LONG
脚下踏着厚实的石板道，你扶着桥上的围栏，四处望去，只觉得
视野相当的宽阔，阵阵微风吹拂～夹带着丰富的水气，你只觉得一阵
清凉，自我打气提了下精神，又继续了你的旅程～
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-23",
"south":__DIR__"a-25",
]));
	setup();
}

 