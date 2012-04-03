// Room: /open/ping/room/wdoor.c

inherit ROOM;

void create ()
{
  set ("short", "ƽ�ϳ�����");
  set ("long", @LONG
�㿴��һ���߶��ɵĳ���,��ǽ���о�ʯײ���ĺۼ�,����
�Ĵ����Ҳ��޹����ײ�ļ���, ���˵����ֿ���ֻ�Ǽ���ǰ��
��,�سǵĽ�ʿ����æ���޲���ǽ,�ȴ����´����˵���Ϯ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/guard-d1" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/r41",
  "east" : __DIR__"road6.c",
]));

  setup();
}
