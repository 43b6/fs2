// Room: /open/killer/room/r14.c
inherit ROOM;

void create ()
{
  set ("short", "ѵ����");
  set ("long", @LONG
������Ҫ�����ɺõ�ɱ�ֵĵط�,�������ϰ���������ǵġ�
������ط�����ɱ���ǿ��ԣ��úõ���ϰ�Լ���ذ�׼���
��һ������
      �����ذ�ף�������������
      ̫���ð������������ȹ̡�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"r12.c",
    "up" : __DIR__"r14u.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/train_b.c" : 3,
]));
  set("light_up", 10);

  setup();
}