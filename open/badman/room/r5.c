// Room: /open/badman/room/r5
inherit ROOM;

void create ()
{
  set ("short", "赌场");
  set ("long", @LONG
这里聚集了一大堆没活干的强盗喽喽们，整着房间吵的跟菜市
场一样，令人感到难受。你奋力凑到人群中看个仔细，才发现原来
这里是恶人谷里面唯一的赌场，难怪会有这么多不务正业的强盗们
待在这里。你发现所有人正围着一个留着满脸胡子的人不知在看什
么热闹。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"b9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/kwan" : 1,
]));
  set("light_up", 1);

  setup();
}
