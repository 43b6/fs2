// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "���᷿");
  set ("long", @LONG
����ѧʶ����ʦ���᷿��ֻ����������ʮ�ֵ����룬���Ͼ�����
��������ľ��䣬��ϸ�ۿ����ϵ��鱾��ÿ����������ʮ�ֵ��Ͼ�
�����֪����ʦ��ôר����ѧʶ���о���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"e3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/literate.c" : 1,
]));

  setup();
}
