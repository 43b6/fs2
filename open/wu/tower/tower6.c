// Room: /u/p/pokai/room/wu/tower6
inherit ROOM;

void create ()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
���Ｘ���쵽���㡣����������������ɱ���ĵ����ڶ��㣬��о���¥�ȸո���
��������Ľ�����һ������վ���Ƕ������ⴰ������ľ�ɫ̾Ϣ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"tower7",
  "down" : __DIR__"tower5-2",
]));
  set("light_up", 1);

  setup();
}
