inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
�ߵ�����,���ֱ�Ժ��Χǽ����ɽ���������ȥ,ͬʱҲ��һ��ͨ
�������Ĳ�·,����ȥ������һ������,��֪��������ʲô������
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa28",
  "north" : __DIR__"aa55",
  "east" : __DIR__"aa30",
]));

  setup();
  replace_program(ROOM);
}
