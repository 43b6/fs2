// Room: /u/p/pokai/room/wu/tower3-2
inherit ROOM;

void create()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
������������㷢������һ���������൱���ҵ�ս���������Ĳ���Ѫӡ�Լ���ǽ
����ӡ������һ�ɹ�ʪ���ùζ���㷢��ǽ�ǻ��м��߲�ȱ�����ǣ�������һЩһ��
������������������ǡ�
LONG );

  set("light_up", 0);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower3-1",
  "east" : __DIR__"tower3-3",
]));
  setup();
}
