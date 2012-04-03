// Room: /open/death/room/h1-2
inherit ROOM;

void create ()
{
  set ("short", "第一殿--粪池地狱");
  set ("long", @LONG
你站在这里，看到鬼卒用铁叉戳穿罪人的身体，然后抛进粪池内，
被抛进粪池的人不断的挣扎，但秽物却不断灌进他的孔窍，等他完全被
秽物所淹没，鬼卒才把他从粪池抓起，把他倒吊着，等他吐清秽物后再
重复丢进粪池中。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"h1-4",
  "north" : __DIR__"h1-7",
]));
  set("light_up", 1);

  setup();
}
