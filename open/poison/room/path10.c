// Room: /open/poison/room/path10
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���������ⶴѨʱ����������ǧ�Ƶ����𾪶���������
������𼸺���ס�����Ұ����Լ��ɿ�������һ���ıڰ�
��͹͹������ʯ�����Ĵ���Ϣ�Ŵ�С��ͬ������������һ
ֻʮ�����صĴ�����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"path5",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/bat" : 2,
  "/open/poison/npc/batking" : 1,
]));

  setup();
}
