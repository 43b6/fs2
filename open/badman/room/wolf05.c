inherit ROOM;
void create()
{
  set ("short","�ǹ�");
  set ("long", @LONG
�ߵ����� ,��ǰ��ֻ����ɽ�� ,���Ա߱�ֻ�Ǽ���ͻ������ʯ����
 .��Ȼƾ����书������������ ,�����������ɽ���пɲ��Ǻ���� ,
����˳��ԭ·��ȥ�� .

LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"wolf02.c",
  ]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/wolf.c" : 2,
]));
  setup();
}
