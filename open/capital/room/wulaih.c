// Room: /open/capital/room/wulaih.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ǹ����ҵĵط�, ���������ھ�����Ҳ�����֛@�ǵĵ���,
��������һ��, ��ɷ��ֻ��в����˻��ɻ����Ŀ���ǽ����, ˫��б
������, ��~~û�»��ǲ�Ҫ����������źá�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r39",
  "north" : "/open/capital/room/wulaih2",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/wulai" : 1,
  "/open/capital/npc/dipi" : 1,
]));
  set("light_up", 1);

  setup();
}
