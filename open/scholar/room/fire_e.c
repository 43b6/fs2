inherit ROOM;

void create ()
{
  set ("short", "东堂火");
  set ("long", @LONG
不知是不是迷信的关系，总觉得这里的空气又闷又热，难道是紧
张的原因，总觉得是从书籍发散过来的，这里的书本可真奇妙呀，还
是只是巧合。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
