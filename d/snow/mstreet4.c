// Room: /d/snow/mstreet4.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������ѩͤ��Ĵ�֣�һ��С����ͨ�����ߣ���������һ����վ��
����ѩͤ�����������á���Ա�����ܶ࣬�����Ȼ�ǹٸ�����վ��Ҳ��
�ܰ��յ��ż������������һ��ɽ�꣬������ԶԶ�ؿ�������������Ұ
��ɽ������ɽ�����һ����ʯ·ͨ��ɽ�ϡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"postoffice",
  "south" : __DIR__"mstreet3",
  "north" : __DIR__"crossroad",
]));

  setup();
}
