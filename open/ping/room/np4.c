inherit ROOM;

void create ()
{
  set ("short", "ǰͥ");
  set ("long", @LONG
�㿴����λ�����ڴ˲���, ������Ȼ����, ����������֮�Ͻ�
, ȴ������¶�����ŵķ緶, �㲻�ɵ��뵽�⼸��, �μ������ڽ���
�Ϻ�������, ����û�е����...

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"np6",
  "south" : __DIR__"np1",
  "north" : __DIR__"np7",
  "east" : __DIR__"np5",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan-trainee.c" : 2,
]));

  setup();
  replace_program(ROOM);
}
