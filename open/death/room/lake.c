// Room: /open/death/room/lake
inherit ROOM;

void create ()
{
  set ("short", "血湖");
  set ("long", @LONG
走进这里，一股腥秽无比的气味扑鼻而来，呈现在你眼前的是一个
血所构成的湖，湖中传来阵阵的哀嚎声，一些产亡妇人正被鬼卒丢入湖
中。
LONG);

  set("light_up", 1);
  set("outdoors", "/open/death");

  setup();
}
