// Room: /u/r/ranko/garden4.c
inherit ROOM;

void create ()
{
  set ("short", "��԰���벿��");
  set ("long", @LONG
�����ǿ�����԰�����벿��,�˴����ֵĶ���,����Ҳ��һ����
�������Ķ���Ҫ����ǿ.Ҳ���Ѱ�������಻������ӽ��˴�,����
���н����Ҷ��ԵĶ�����,�����ѿ����������������ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"garden4-1.c",
  "east" : __DIR__"garden4-3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/obj/source/faint.c" : 3,
]));
  set("light_up", 1);

  setup();
}
