// Room: /d/snow/sroad3.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ�ٵ�");
  set ("long", @LONG
����һ������ʵ����ʯ���̳ɵĴ����·�ϳ���ĺۼ��Ѿ���·
��������һ�������Եİ��ۣ�������һ����С�Ľֵ�ͨ��ѩͤ�򣬴�·
�����������ɴ�ˮ�̸������ϴ�����ʯ������ͨ�����ؾ����صص���
�չء�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/crazy_dog" : 1,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"sroad4",
  "east" : __DIR__"sroad2",
]));

  setup();
}
