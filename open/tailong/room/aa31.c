inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
������������ͥ�ʹ��۱�����������,��ֱ�߾��������۱���
�ķ���,����������ͥ,������һ��С������ͨ��һ����԰��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"aa7",
  "west" : __DIR__"aa45",
  "north" : __DIR__"aa33",
]));

  setup();
  replace_program(ROOM);
}
