// Room: /open/badman/room/forest13.c
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

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"forest14",
  "north" : __DIR__"forest10",
]));
  set("outdoors", "/open/badman");

  setup();
}
