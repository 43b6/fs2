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

  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/vler1.c" : 1,
  "/open/poison/npc/sparrow.c" : 1,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"pl3.c",
  "north" : __DIR__"pl5.c",
]));

  setup();
}
