// room ://open/doctor/room/d6.c made by adam

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�ߵ����������ಡ�˲���������������ϣ�ҽ����
������ȥ��ֻ��ԭ��������Ĳ��ˣ�һ���Ӿ������������
����ҽ�����µ�һ����Ȼ�����鴫��

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"d5",
  "south" : __DIR__"d9",
//  "north" : __DIR__"doctor_room",
  "east" : __DIR__"d7",
]));
  set("light_up", 1);
  

  setup();
}
