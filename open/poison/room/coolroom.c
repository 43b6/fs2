inherit ROOM;

void create ()
{
  set ("short", "ħ������");
  set ("long", @LONG
������һ�����صĵ����ң��������ж�ʮ�������ͭ�ˣ�ÿһ��ͭ�˶�
����һ����ͬ�����ƣ������ǵı���Ҳ���Ŷ�����������ͬ������������
�ܵĴ�𣬽����������յ����ض����졣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"room17",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/teacher.c" : 1,
]));
  set("light_up", 1);

  setup();
}
