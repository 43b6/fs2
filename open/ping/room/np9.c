inherit ROOM;

void create ()
{
  set ("short", "ǰͥ");
  set ("long", @LONG
�㿴����λ�����ڴ˲���, ������Ȼ����, ����������֮�Ͻ�
, ȴ������¶�����ŵķ緶, �㲻�ɵ��뵽�⼸��, �μ������ڽ���
�Ϻ�������, ����û�е����...

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"np6",
  "north" : __DIR__"np12",
  "east" : __DIR__"np7",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/disciple1.c" : 2,
]));

  setup();
  replace_program(ROOM);
}
