// Room: /d/snow/crossroad.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ɽ��");
  set ("long", @LONG
������һ��ɽ�꣬���Ͼ���ѩͤ��һ�����ѵ�С������ͨ����һ
���ڽ���Сɽ�壬һ��ٸ����ĸ�ʾ������·�ԣ�����д���й�Ұ��ɽ
���˳�û�ľ����־��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"mstreet4",
]));
  set("outdoors", "snow");

  setup();
}
