// Room: /open/ping/room/road7.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
������һ��������, ���ԵĴ�����չ����޴������, ���ཻ��
�Ĳ���һ��, ��ѹѹ�İ���ն���ס��, ֻ������Ҷ��϶������ǿ����
���졣��ǰת������, �Ϳ���ǰ�����е�һ����¥, ӭ�Ų��, ������
��������,���򸡵�����, ������ض��Ƕ������ˡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/ping/room/road4",
  "north" : "/open/ping/room/pingking",
]));
  set("outdoors", "/open/ping");

  setup();
}
