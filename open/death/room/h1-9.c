// Room: /open/death/room/h1-9    edit by Pokai
inherit ROOM;

void create ()
{
  set ("short", "��һ��--ͨ��");
  set ("long", @LONG
�㿴��ǰ����Զ���������ţ�����һ��ʯ�ҿ��ţ������ڶ����
�����֣��㷢�ֳ����µ��ر������ɭ�ϣ������Ƕ������Ĺ»�Ұ��
����ӵ��飬����΢���ɵĹ�궼������С�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"h1-5",
  "south" : __DIR__"h1-10",
]));
  set("light_up", 1);

  setup();
}
