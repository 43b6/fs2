inherit ROOM;
void create()
{
  set ("short","�ǹȹȿ�");
  set ("long", @LONG
�����Ƕ��˹ȸ�����һ��Сɽ�� ,ӳ����ǰ�� ,�������ƶ����Ĺȵ�
�� ,���ǽ���Ⱥ���� .����Щ�Ƕ�ȴ�Ǻ����ܹ�ѵ��һ�� ,ֻ�ǿ�����
 ,�������� .

LONG);
  
  set("outdoors", "/open/badman/room");
  set("exits", ([ /* sizeof() == 4 */
   "hole" : __DIR__"forest12.c",
   "northeast" : __DIR__"wolf02.c",
   "northwest" : __DIR__"wolf03.c",
   "northdown" : __DIR__"wolf04.c",
  ]));

  set("objects", ([ /* sizeof() == 3 */
  "/open/badman/npc/wolf.c" : 3,
]));
  setup();
}
