inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ���������Ƶ���,���Ͽ��Ŷ������������"����",��
�������������������֮��--"����"������֮һ,����������ȴ��
������ȥ�����,���������ɻ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"aa55",
]));

  setup();
  replace_program(ROOM);
}
