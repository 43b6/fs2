// Room: /u/p/pokai/room/wu/tower5-2
inherit ROOM;

void create ()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
�㷢������ľ��º�Ȼһ�䣬ǿ�ҵİ�ɫӳ������������ע�⵽������һ����ľ
�����Ĵ��ӣ��������뻹��һ���������ţ������ϰ�����һ�����ˡ��㿴��ͨ����
¥�����ӽ�����ߣ�������һ�ɳ嶯��Ͽ���ȥ����ע�⵽ǽ����һ�ѿݹǡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"tower5-1",
  "climb" : __DIR__"tower6",
]));
  set("light_up", 1);

  setup();
}
