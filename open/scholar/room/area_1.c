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
  "west" : __DIR__"area.c",
  "north" : __DIR__"area_2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/new_scholar.c" : 2,
]));

  setup();
}
