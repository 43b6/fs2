inherit ROOM;

void create ()
{
  set ("short", "��֪���Ŀռ�");
  set ("long", @LONG
����һ�����صĵط������ܲ��ϵ�����Ӱ������
���ܸо���������һ��δ֪�Ŀռ䣬���ұ������У�
����Ѷ���뿪����ط�������õ�ѡ��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s1",
  "north" : __DIR__"s2",
  "west" : __DIR__"s1",
  "east" : __DIR__"s3.c",
]));

  setup();
}
