// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "���᷿");
  set ("long", @LONG
���Ǽ�ı����ʦ���᷿��ֻ����������ʮ�ֵ����ң����Ͼ�����
�������಻ͬ�ĵ���ͼ����ϸ�ۿ�����ͼ������������ļǺ�
�����֪����ʦ��ôר���ڼ�ı֮ʹ�á�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"w3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/plan_teacher.c" : 1,
]));

  setup();
}
