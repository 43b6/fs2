// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "�Է�");
  set ("long", @LONG
���������������ߵ��Է���ֻ������ʮ�ֵ����ң�
�Ϳ�֪������ƽ�����������������������������ڴ���
�о��������徭��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"in.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/trainee.c" : 2,
]));

  setup();
}