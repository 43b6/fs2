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

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"garden4-2.c",
  "west" : __DIR__"garden7.c",
  "north" : __DIR__"garden2-1.c",
  "east" : __DIR__"garden4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/obj/source/gold_bug" : 2,
]));
  set("light_up", 1);

  setup();
}
