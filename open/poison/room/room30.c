inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ���ž��ŵ�һ����ζ ,���� .....��ô���ܵ��������� ?�ۿ�
������һ�����ıƽ� ,�� !���Ƕ������ˡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/open/poison/npc/pig3.c" : 2,
  "/open/poison/npc/pig2.c" : 1,
  "/open/poison/npc/pig1.c" : 1,
]));

  setup();
}
