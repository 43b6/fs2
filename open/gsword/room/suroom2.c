// Room: /open/gsword/room/suroom2.c

inherit ROOM;

void create ()
{
  set ("short", "�ĺ�����");
  set ("long", @LONG
���ܲ���������ڽ�ʿ����������������
��������ʮ��ʮ�ս��ܲ��������ָ�
����֮�� , �����������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"su11",
]));
  set("light_up", 1);

  setup();
}
