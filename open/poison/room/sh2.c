// Room: /u/r/ranko/room/sh2.c
inherit ROOM;

void create ()
{
  set ("short", "�ӻ���");
  set ("long", @LONG
һ�������ճ��������Ʒ���ӻ��ꡣ��������Ÿ������ʲ
������ǳ������˴������ճ����裬�����Ǵ�����е�һ���ӻ�
�꣬�����������ʮ����¡����Ҳ������ȥ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v2-3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer2.c" : 1,
]));
  set("light_up", 1);

  setup();
}
