// Room: /open/badman/room/b5
inherit ROOM;

void create ()
{
  set ("short", "��ǰ���");
  set ("long", @LONG
�������˶��˹ȵĵ�ǰ������ۼ�����Ҳ���������������㲻
ʱ���Կ������ߵķ������˽��������������ͷ��Ŀ������������
ʲô�ö�����������ǿ���ѵ����ġ�
    �������ϱߴ��������ߺ������ʮ�����ˡ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"b6",
  "south" : __DIR__"r6",
  "north" : __DIR__"r7",
  "east" : __DIR__"b4",
]));
  set("outdoors", "/open/badman");

  setup();
}
