// Room: /open/killer/room/r13.c
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
  "west" : __DIR__"r11.c",
    "up" : __DIR__"r13u.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/train_b.c" : 3,
]));
  set("light_up", 10);

  setup();
}