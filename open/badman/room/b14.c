// Room: /open/badman/room/b14
inherit ROOM;

void create ()
{
  set ("short", "���˹��Ͻ�");
  set ("long", @LONG
�����Ա�����ת���˴���������ͨС����һ�㣬ӳ����������
��һ������ͨ����լ�������������ֻ���и����ڷ����֮���ɣ�
��������ķ��ӽ��Ե���Щ��ª������ȴ�Ǿ������ڶ��˹ȵİ���
��ҵ֮����
    ���ߴ��������ô�����������Ƕ��˹ȵ����䳡.

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/three.c" : 1,
  "/open/badman/npc/six.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r6",
  "north" : __DIR__"b4",
  "south" : __DIR__"b15",
]));

  setup();
}
