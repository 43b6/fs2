// Room: /open/main/room/s4.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
�����Ǵ��ԭ������, �����߿���ȥ, �Ǻ�ѹѹ������, Ҳ�������в���
˼��Ĺ���, �����ٽ�ȥΪ��! �ϱ߸߸�������
һ����ɽ, ɽ����֪���ƻ���ѩ, һƬ��ãã, �����ѵ�����ɽ?
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/main/room/F6",
  "north" : "/open/main/room/s1",
  "east" : "/open/main/room/s5",
]));

  set("outdoors", "/open/main");

  setup();
}
