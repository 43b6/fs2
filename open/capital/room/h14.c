// Room: /open/capital/room/h14.c

inherit ROOM;

void create ()
{
  set ("short", "�ܲ���ͬ");
  set ("long", @LONG
�㿴����һȺС�����������ſ�, �۾�����Ĳ�֪���ڹ۲�ʲô��
��, ������߹�ȥһ��, ԭ����....����Ҳ�ա�С���Ӿ���С���ӡ���
��֮��, �㷢�ֵ�����Ŀ�������, ������������˼�������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h13",
  "east" : __DIR__"h15",
]));
  set("outdoors", "/open/capital");

  setup();
}
