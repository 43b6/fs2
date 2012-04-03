// Room: /open/badman/room/forest03.c
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
  "north" : __DIR__"forest02",
  "south" : __DIR__"forest02",
  "west"  : __DIR__"forest02",
  "east"  : __DIR__"forest02",
]));

  set("outdoors", "/open/badman");

  set("objects",([ /* sizeof() == 1 */
  "/open/badman/npc/big_wart.c" : 1,
]));
  setup();
}

int valid_leave(object who, string dir)
{
	if( random(2)==1 ) {
                who->move(__DIR__"forest04");
		return notify_fail("");
	}
	return 1;
}
