// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "��ı��");
  set ("long", @LONG
�������Ÿ߼��������о���ı���������˵���ɿ�������
�����������������о��ű��������ã��������ϱ��Ǽ�ı������
��Ϣ��������᷿�������Ǽ�ı����ʦ���᷿��������ͨ������
���ࡣ
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"w3_s.c",
  "west" : __DIR__"r16.c",
  "north" : __DIR__"w3_n.c",
  "east" : __DIR__"w2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/trainer.c" : 2,
]));

  setup();
}
