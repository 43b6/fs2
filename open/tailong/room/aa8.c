inherit ROOM;

void create ()
{
  set ("short", "��ͥ");
  set ("long", @LONG
������������ǰԺ�����ұ��ߵ�����ͥ,���������Ҳ�������ǰֱ��
���������µ�����,���۱���,��ΰݴ����������ҷ��ɴ�ʦ�������
�Ͷ���,�����ƺ�����һ��ͨ����Ժ���ߵ� 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa6",
  "north" : __DIR__"aa32",
  "east" : __DIR__"aa10",
]));

  setup();
  replace_program(ROOM);
}
