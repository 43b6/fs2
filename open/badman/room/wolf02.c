inherit ROOM;
void create()
{
  set ("short","�ǹ�");
  set ("long", @LONG
�����Ƕ��˹ȸ�����һ��Сɽ�� ,ӳ����ǰ�� ,�������ƶ����Ĺȵ�
�� ,���ǽ���Ⱥ���� .����Щ�Ƕ�ȴ�Ǻ����ܹ�ѵ��һ�� ,ֻ�ǿ�����
 ,�������� .

LONG);

  set("outdoor", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"wolf01.c",
  "north" : __DIR__"wolf05.c",
  ]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/wolf.c" : 2,
]));
  setup();
}
