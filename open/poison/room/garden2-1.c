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
  "west" : __DIR__"garden2-2.c",
  "south" : __DIR__"garden4-1.c",
  "east" : __DIR__"garden2.c",
]));
  set("light_up", 1);

  setup();
}
