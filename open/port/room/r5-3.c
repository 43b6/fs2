// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����Ƿ��ָ۵ĺ��� . Ϊ�⺣ˮ���� , ���������⵽����
 , �������ں����Լ�����һ������ . һ��ʯ���̳ɵ�С·��
�������� . ��һ���Ƿ��ֵľ��� , ס������ľ������Բ���
Ϊ�� , �����ʮ������ . ����Ϊһ��ƽ�����滧 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/island/npc/son.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r5-5",
  "west" : __DIR__"r5-4",
  "east" : __DIR__"r5-2",
]));
  set("light_up", 1);
  set("outdoors", "/open/port");

  setup();
}

