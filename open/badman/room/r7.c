// Room: /open/badman/room/r7
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������һ�����Ĵ󷿼䣬����ۼ������ĵ����ඣ��е�
������Ϣ���е����ںȲ����죬���Ƕ������︺����������Ĺ���
����ʱ׼��������
    ������ְλ����Ļ�����ʱ�����������ҵ����¹���ָ�ӣ�
��Ȼ�Ļ����ԹԵ���С�ධɡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r14",
  "south" : __DIR__"b5",
]));
  set("light_up", 1);

  setup();
}
