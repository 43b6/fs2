// Room: /open/poison/room/sh5.c
inherit ROOM;

void create ()
{
  set ("short", "ҩ��");
  set ("long", @LONG
��һ̤���˴���һ�ɴ̱ǵ�ҩζӭ������������������ǰ����
һ����̴ľ���ƵĴ���Ӻ῿�ڶ���ǽ�ϣ���������������С��
�룬ÿһ�������ǰ�����һ��ǩע���������õ�ҩ�����࣬����
����������ҩ�Ĺ�����ץҩ�⣬������Ѱ���ĵ���ҩ��һЩ��Ʒ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v2-7.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer4.c" : 1,
]));
  set("light_up", 1);

  setup();
}
