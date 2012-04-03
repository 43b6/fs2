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

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"garden2.c",
  "west" : __DIR__"garden4-1.c",
  "south" : __DIR__"garden4-3.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/obj/source/rose_flower.c" : 2,
]));

  setup();
}
