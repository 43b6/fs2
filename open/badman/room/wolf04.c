inherit ROOM;
void create()
{
  set ("short","�ǹ�");
  set ("long", @LONG
�����ǰ�ɽ�ȵĵط� ,��ϸ�ؿ���һ�� ,���ܵ�����Ȼֻ��������
 ,�������� .�ȵ��ƺ��м��䷿����ð���� ,����Ӧ�þ���������Щ��
����������ס�ĵط��� ?

LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"wolf07.c",
  "southup" : __DIR__"wolf01.c",
  ]));

  set("objects", ([ /* sizeof() == 3 */
  "/open/badman/npc/wolf02.c" : 3,
]));
  setup();
}
