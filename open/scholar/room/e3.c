// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "ѧʶ��");
  set ("long", @LONG
�������Ÿ߼�������ѧϰѧʶ���������˵���ɿ�������
�����������������ж��������徭���������ϱ���ѧʶ��������
Ϣ��������᷿��������ѧʶ����ʦ���᷿��������ͨ�����ö�
�ࡣ
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"e3_s.c",
  "north" : __DIR__"e3_n.c",
  "west" : __DIR__"e2.c",
  "east" : __DIR__"r18.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/trainer.c" : 2,
]));

  setup();
}
