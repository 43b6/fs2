// Room: /open/badman/room/b17
inherit ROOM;

void create ()
{
  set ("short", "���˹��Ͻ�");
  set ("long", @LONG
�ߵ�������ͻȻ������Ⱥ����Խ��Խ�٣�ԭ���Լ��뿪���ֽ�
����һ�ξ����ˡ��㷢���Լ�����֪�����������˹��Ͻ���ƫƧ��
�ط������������˵��С����ڴ���Ǯ����֮�·������뵽�����
���ɵõļӿ��Լ��ĽŲ���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/hood1.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b18",
  "east" : __DIR__"b16",
]));

  setup();
}
