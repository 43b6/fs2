inherit ROOM;

void create ()
{
  set ("short", "�㳡");
	set( "build", 1 );
  set ("long", @LONG
�������Ƕ���ƽʱ���������ĵط�, ��Ȼ�⼸���ڽ������Ѿ���
�е���, ������ÿ���Ի����ڴ���������, ������ָ�������似��
ѧ���ϵ����⡣

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"np10",
  "south" : __DIR__"np4",
  "west" : __DIR__"np9",
  "east" : __DIR__"np8",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
