inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
�����Ǹ������� ,����������ƽ�������� ,������һ��ũ�ҵ�Ժ
�� ,��������ŵ����濴�� ,������û�����ܸ����� ,���ﵽ��
��ɶ�ط� .���߻������� ,��������ˮ������ .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"room28",
  "north" : __DIR__"room26",
  "south" : __DIR__"room24",
]));
  setup();
}


