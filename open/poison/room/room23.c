inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
�������˵ص� ,��ʱ�����۵������յ��������۾� ,���ﵽ����
����� ?���ҿ� ,����һ���˶�û�� ,������� ,�����ü���
ǰ������һ̽������ .....

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room22.c",
  "north" : __DIR__"room24.c",
]));

  setup();
}
