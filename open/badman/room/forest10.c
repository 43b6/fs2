// Room: /open/badman/room/forest10.c
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

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"forest13",
  "west"  : __DIR__"forest11",
  "north" : __DIR__"forest07",
  "east"  : __DIR__"forest08",
]));
  set("outdoors", "/open/badman");

  setup();
}
