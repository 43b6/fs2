inherit ROOM;

void create ()
{
  set ("short", "ǰͥ");
	set( "build", 2 );
  set ("long", @LONG
�㿴����λ�����ڴ˲���, ������Ȼ����, ����������֮�Ͻ�
, ȴ������¶�����ŵķ緶, �㲻�ɵ��뵽�⼸��, �μ������ڽ���
�����Ϻ�������, ����û�е����...

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"np13",
  "south" : __DIR__"np7",
  "west" : __DIR__"np12",
  "east" : __DIR__"np11",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/disciple3.c" : 2,
]));
  set("light_up", 3);

  setup();
  replace_program(ROOM);
}
