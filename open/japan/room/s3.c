inherit ROOM;

void create ()
{
  set ("short", "��֪���Ŀռ�");
  set ("long", @LONG
����һ�����صĵط������ܲ��ϵ�����Ӱ������
���ܸо���������һ��δ֪�Ŀռ䣬���ұ������У�
����Ѷ���뿪����ط�������õ�ѡ��
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "south" : __DIR__"s3.c",
  "up" : __DIR__"s1.c",
  "west" : __DIR__"s4.c",
  "down" : __DIR__"s2",
  "east" : __DIR__"s2.c",
]));

  setup();
}
