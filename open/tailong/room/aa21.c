inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
������������ǰ�� ,��·�����������еĸ�ʽ��������,ͻȻ����ǰ��
�����һ����·,��������һ��,�Ǳߺ����и������Ļ�԰,�������������
���߹�ȥ����,˵��������ʲô����Ŷ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa14",
  "north" : __DIR__"aa22",
]));

  setup();
  replace_program(ROOM);
}
