// Room: /u/m/moner/tree/room7.c
inherit ROOM;

void create ()
{
  set ("short", "޵������");
  set ("long", @LONG

 Խ�����У���ľԽ�ܣ�����Ƕ˵�޵���㣬ʹ��ĸо�Խ��Խģ�������ߵķ�¥
�գ����������� �������� ɽ������֮�䣬���ܵ����⽥����ʧ������Խ��Խ�谵���
쬵���������Ĵ�������˹���,����е�΢΢�ĺ���,ɭ���в�ʱ����һЩʨ���޺�, 
���㲻�ò���߾���.����ǰ����ȥ,����ԼԼ���񿴵�һЩ��Ӱ��

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room16.c",
  "north" : __DIR__"room14.c",
]));

  setup();
}
