// Room: /open/capital/room/h01.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
������Ϊ�˱˴˼��ܹ�ʱ��������ϵ����ѧ��֪ʶ�ϵĽ���������
���ڴ˵س����˹��ᣬ����������լ�����������ᡣ�ſڻ�����һ����
����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/sch0" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"SCH",
  "east" : __DIR__"h04",
]));

  setup();
}
