// Room: /open/killer/room/r11.c
inherit ROOM;

void create ()
{
  set ("short", "ѵ����");
  set ("long", @LONG
������Ҫ��һ���õ�ɱ�ֵ����,�������ϰ���������ǵġ�
������ط�����ɱ���ǿ��ԣ��úõ���ϰ�Լ������֡�
��һ������
      ����ü��ȣ�������Ǳ����
      ̫���ð������������ȹ̡�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"r13.c",
  "west" : __DIR__"r0.c",
    "up" : __DIR__"r11u.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/train_c.c" : 3,
]));
  set("light_up", 10);

  setup();
}