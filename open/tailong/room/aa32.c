inherit ROOM;

void create ()
{
  set ("short", "�Ҳ�����");
  set ("long", @LONG
������������ͥ�ʹ��۱�����Ҳ�����,��ֱ�߾��������۱���
�ķ���,����������ͥ,������һ��С������ͨ��һ����԰��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"aa8",
  "north" : __DIR__"aa34",
  "east" : __DIR__"aa50",
]));

  setup();
  replace_program(ROOM);
}
