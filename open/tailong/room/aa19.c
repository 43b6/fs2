inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
����������,ԶԶ�ľͿ��Կ��������µ���������--���۱���,������
�Ĵ��۱��������������Ҫ���û�������,Ȼ������һ��,�ڴ��۱����
�����������һ��С����,��֪���Ǽ䷿����������ʲô��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa20",
  "south" : __DIR__"aa16",
]));

  setup();
  replace_program(ROOM);
}
