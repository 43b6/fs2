// Room: /open/badman/room/forest05.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "����ɭ��");
  set ("long", @LONG
���߽���һ��Ƭɭ��֮�У�����������ŷ������ܵľ����ƺ�
һֱ��û�����������ȫʧȥ�˷���ԭ��������������Ķ���ɭ
�֣���˵ֻ�ж��˹ȵ���֪�����˳��ͨ����Ƭɭ�֡�

LONG);
  set("objects",([ /* sizeof() == 1 */
  "/open/badman/npc/lostfighter.c" : 1,
  ]));
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"forest04.c",
  "north" : __DIR__"forest07",
  "west"  : __DIR__"forest08.c",
  "east"  : __DIR__"forest06.c",
]));
  set("outdoors", "/open/badman");

  setup();
}
