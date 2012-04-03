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
  "west" : __DIR__"garden4-2.c",
  "north" : __DIR__"garden4.c",
  "east" : __DIR__"garden5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/gardener.c" : 1,
]));
  set("light_up", 1);

  setup();
}
