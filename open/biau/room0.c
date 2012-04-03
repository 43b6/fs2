// Room: /open/su/room/biau_room1.c

inherit ROOM;

void create()
{
	set("short", "镳局外堂");
	set("long", @LONG
    你一进到这里,便感到一阵阵严静肃穆的气分,没错,这里就是武威镳局的外堂,
    和门外的感觉完全不同.
    在大堂之上,摆着两张太师椅,坐着两个人----赵鼎天(Ting-Tan Sau)和妻子--
    王素素(Sue-Sue Wang).
    从摆设看来,两人该都是习武之人,但是,墙上却有一张张山水,教人疑惑.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"opening1",
  "north" : __DIR__"room6",
  "east" : __DIR__"room1",

]));
	set("objects", ([ /* sizeof() == 2 */
//  "/u/j/jcder/npc/ting.c" : 1,
  "/u/j/jcder/npc/wang.c" : 1,
]));

	setup();
}
