// Room: /u/s/smore/room/suking/suking6.c

inherit ROOM;

void create ()
{
  set ("short", "���ô���");
  set ("long", @LONG
�߽�����ϯ�������������˿־��벻�������ɫ�ĵ�̺��
�г����������ɷǷ���̧ͷ��ȥ������ϯ������ı�����Զ����
������������������������������
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/suking3",
  "west" : "/open/gsword/room/suking5",
  "north" : "/open/gsword/room/suking8+",
  "east" : "/open/gsword/room/suking7",
]));

  set("light_up", 1);

  setup();
}
