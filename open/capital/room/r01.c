// Room: /open/capital/room/r01.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�����ǽ����ǵ�ͨ��, ���ھ��Ƿ�������, ��˳��о���ͨ�У���
���㻹��ҪС�ĵ�, ����ǻ�����·�ϵ�ʯ��Ҳ��Ϊ�����ƶ�Ƶ��,
��ĥ���е��Ͼɡ�
    �����Ĵ��ͨ���ʹ�����, Ҳ�������������ԣ������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/D01",
  "east" : "/open/capital/room/r02",
]));

  set("gopath", "east");

  setup();
}
