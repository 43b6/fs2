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
  "southeast" : __DIR__"wolf03.c",
  ]));

  set("objects", ([ /* sizeof() == 1 */
]));
  setup();
}
