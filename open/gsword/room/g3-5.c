// Room: /open/gsword/room/kitchen.c
inherit ROOM;

void create ()
{
  set ("short", "�﷿");
  set ("long", @LONG
����ƽʱ���������˵ĵط������ұߵ�һ�Ƿ���Сɽһ��ߵ��߲ˣ�
��ǰ���������˵�������Ϊ���ˣ�������뾶��ֱ�����֮�࣬���
����ӵ�Ҳ�м����ڹ����ӡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g3-6.c",
]));

  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/npc/wang":1,
]));

  set("light_up", 1);

  setup();
}
