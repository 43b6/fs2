inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
��������������ͨ����Ժ���ߵ�,��˵��������������������Ľ���
����������¥���ŵ����,��ģ���,�뵽����,����������úòι�
һ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa7",
  "west" : __DIR__"aa11",
]));

  setup();
  replace_program(ROOM);
}
