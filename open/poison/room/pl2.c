// Room: /u/r/ranko/room/p1.c
inherit ROOM;

void create ()
{
  set ("short", "ɹ��\��");
  set ("long", @LONG
������ǰ����һ��Ƭ�Ŀյأ������Ǵ����ո����֮��������
�ù��������ɹ�ĵط����е��ס�С��������ެ���Լ�һЩ
����ȵȡ���ʱ����һȺ��ȸ��һЩ��֪�������������͵�Թ���
�ǵĿ�������Ĵ�����������׷���ţ��ݳ�һ������׷��ս������
���˲���ݸ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/sparrow.c" : 3,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"pl7.c",
  "west" : __DIR__"pl1.c",
  "east" : __DIR__"pl3.c",
]));

  setup();
}
