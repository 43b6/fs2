// Room: /open/badman/room/b6
inherit ROOM;

void create ()
{
  set ("short", "��ǰ���");
  set ("long", @LONG
���������ͻȻ�������ձ���쳣���أ��ϱ����ߵķ��䶼
���ر������ţ�Ӧ���Ǵ����ʲô��Ҫ��Ʒ�ɣ�ǿ�ҵĺ�������ʹ
�����˫�Ų��Ծ���һ������ǰ��ȥ�����㿴��������

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"b7",
  "south" : __DIR__"r8",
  "north" : __DIR__"r10",
  "east" : __DIR__"b5",
]));
  set("outdoors", "/open/badman");

  setup();
}
