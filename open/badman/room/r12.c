// Room: /open/badman/room/r12
inherit ROOM;

void create ()
{
  set ("short", "���������");
  set ("long", @LONG
������������ϸе�һ����������գ���������ĳ�������
��Ҳ��ȫ���ڸ��˹�ȥ�������ǽ��װ���Ÿ�ʽ�����������챦��
���Ƕ��ֲ�������ǰ����ǽ�������ŵĴ�ʨͷ��������עĿ���㿴
��������������һ��ʨƤװ�εĴ��Ρ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"r6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/te" : 1,
]));
  set("light_up", 1);

  setup();
}
