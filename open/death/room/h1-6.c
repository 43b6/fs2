// Room: /open/death/room/h1-6
inherit ROOM;

void create ()
{
  set ("short", "��һ��--ͨ��");
  set ("long", @LONG
���߽�������������ƻ�ͨ����ԭ����������ڤ���ĵ�һ���
�ع�������Ͻ��һ�������µ��ˣ�����ţͷ���涼������ȴ����ع���
��ǰ�����ɸ�·�������书�½�������ͥ���ȥͶ̥ת����
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"h1-7",
  "south" : __DIR__"h1-3",
  "north" : __DIR__"h1-1",
  "east" : __DIR__"h1-5",
]));
  set("light_up", 1);

  setup();
}
