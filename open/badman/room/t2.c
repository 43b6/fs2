// Room: /open/badman/room/t2.c

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
����������ǰ�ߣ��۾���������΢�ܹ���Ӧ����ĺڰ�������
��ɽ���Ͼ�������һ���������������㲻���е���֣��ڵص���û
��������Щֲ����ô�ܹ�������?

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/badman/room/t3",
  "south" : "/open/badman/room/t1",
]));

  setup();
}
