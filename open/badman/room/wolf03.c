inherit ROOM;
void create()
{
  set ("short","�ǹ�");
  set ("long", @LONG
�����Ƕ��˹ȸ�����һ��Сɽ�� ,ӳ����ǰ�� ,�������ƶ����Ĺȵ�
�� ,���ǽ���Ⱥ���� .����Щ�Ƕ�ȴ�Ǻ����ܹ�ѵ��һ�� ,ֻ�ǿ�����
 ,�������� .

LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"wolf01.c",
  "northwest" : __DIR__"wolf06.c",
  ]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/wolf.c" : 2,
]));
  setup();
}
