// Room: /open/capital/room/r70.c

inherit ROOM;

void create ()
{
  set ("short", "����ֿ�");
  set ("long", @LONG
������һ������·�ڣ������������֥���ͬ�����������ܲ���ͬ
���ܲ���ͬ������Զ��������������ջ���������ĵ��̣�֥���ͬ��
��������ʳ�ü��ɼ����С�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"h12",
  "south" : __DIR__"r71",
  "north" : __DIR__"r69",
  "east" : __DIR__"h13",
]));

  setup();
}
