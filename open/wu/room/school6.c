// Room: /u/d/devils/school6.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
你走到正晴武馆的东南隅，这里是武馆处罚弟子练功偷懒的地方,地上
摆满了盛满水的桶子,被处罚的人需在此处两手平举一手一只大水桶蹲马步
,如果让水溢出....嘿嘿...洗好屁股准备挨板子吧!
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"school5",
  "north" : __DIR__"school7",
]));
set("objects",([
"/open/wu/npc/trainee3" : 2 ,]));

        set("outdoors", "/open/wu");
        setup();
}
