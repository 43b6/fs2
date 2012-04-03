// Room: /u/r/ranko/garden2.c
inherit ROOM;

void create ()
{
  set ("short", "��԰��Χ");
  set ("long", @LONG
�����Ƕ�԰��Χ����,�˴����ֵĶ���Ѱ���ɼ��Ķ���,���ݺ�
�ղż����Ĳ�û��ô���.ֵ��һ�����,������Щ�������ݵ�Ӱ��
,�����˲��ٶ����ڴ˾ۼ���
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"garden7.c",
  "west" : __DIR__"garden6.c",
  "east" : __DIR__"garden2-1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/snake.c" : 1,
]));
  set("light_up", 1);

  setup();
}
