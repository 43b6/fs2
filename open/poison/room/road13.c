// Room: /open/poison/room/road13
inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG
ʯ�׵��������д���������������������ߣ���·
����������ӣ����ľ������ʱ���Ͽ����컨������ʯ��һƬ
��죬����һ�����ĳ�����������һ��Ժ��Ӧ�þ���ڤ��
ħ�̵���̳�ɡ�
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : "/open/poison/room/road12",
  "northup" : "/open/poison/room/road14",
]));

  setup();
}
