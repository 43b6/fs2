// Room: /open/capital/room/r42.c

inherit ROOM;

void create ()
{
  set ("short", "�����۵�");
  set ("long", @LONG
�Ƕ��ĳ�������Ϊ�˷��������������ͨ���صؿ��ٵ�ʯ����
��·���൱������һ���ͬ�����屶���࣬����ʮ����ǰ���������
����ʱ���������������۵����ƣ��;����������ѡ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r43",
  "southwest" : __DIR__"r41",
]));

  set("gopath", "southwest");

  setup();
}
