inherit ROOM;

void create ()
{
  set ("short", "��ʯ��·");
  set ("long", @LONG

������������ȥ��ֻ�����Ρ�룬��¥���������չ��ϱ�������������
����������棬�ʻ���ͷ�������ûʡ��벻�����ž�Ȼ��˻�����

LONG);
 
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"g1-9.c",
  "south" : __DIR__"g1-2.c",
  "north" : __DIR__"g1-4.c",
  "east" : __DIR__"g1-10.c",
]));

  setup();
}
