// Room: /u/m/moner/tree/room7.c
inherit ROOM;

void create ()
{
  set ("short", "޵������");
  set ("long", @LONG

 Խ�����У���ľԽ�ܣ�����Ƕ˵�޵���㣬ʹ��ĸо�Խ��Խģ�������ߵķ�¥
�գ����������� �������� ɽ������֮�䣬���ܵ����⽥����ʧ������Խ��Խ�谵���
쬵���������Ĵ�������˹���,����е�΢΢�ĺ���,ɭ���в�ʱ����һЩʨ���޺�, 

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room10.c",
  "north" : __DIR__"room10.c",
  "west" : __DIR__"room11.c",
  "east" : __DIR__"room13.c",
]));

  setup();
}
