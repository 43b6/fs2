// Room: /open/capital/room/r64.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���������Ϊ�ڽ��ʳ����ٹ��˵�ס������, ��������������
���е���Ҳ�������Ǹ����ĵط��ɡ�����Ϊ���, �㷢�ֽ���һ����
ӰҲû��, ����ż���߹��Ľ�������, ����˵����ȫ�����ĵġ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r63",
  "east" : "/open/capital/room/r50",
]));

  set("outdoors", "/open/capital");

  setup();
}
