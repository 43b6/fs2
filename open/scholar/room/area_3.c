// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "��ƺ");
  set ("long", @LONG
����λ����ʯС���ԵĲ�ƺ����ƺ�Ͽ����������
���ݣ�������ʮ�ֵ��������ƺ�����������������ŵ�
�ӣ�����һ���о�������һ�߹ۿ�С���ϵ����͡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"area_4.c",
  "east" : __DIR__"area.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/new_scholar.c" : 2,
]));

  setup();
}
