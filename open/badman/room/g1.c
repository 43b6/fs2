// Room: /open/badman/room/r1
inherit ROOM;

void create ()
{
  set ("short", "���˹ȴ���");
  set ("long", @LONG
������Ƕ��˹ȵ����ָ�����ģ��㿴������������˾�����
�Ż�Ƥ�ĺ������Σ���������ֻ���м������������һ���ˣ����
�����Ƕ��˹ȵ������˰ɡ�����˵Ҳ��֣�����˹Ȳ��Ǵ�˵��ʮ
���������ô������ȴֻ�о���������....
    �����ϣ����Ϊһ���޶����Ľ���������������ϴ�Ҫ��
����(join)���������С�

��� ���˹�Ҫ���¿�ʼ������!! ���������, ��ʦ�뵽¥������. ���

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"wizroom",
"north" : __DIR__"eqroom",
  "east" : __DIR__"b7",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/bandit/master_du.c" : 1,
]));
  set("valid_startroom", 1);

  setup();
  call_other("/obj/board/bad_b", "???");
}

int valid_leave(object who, string dir)
{
	if( dir=="up" && !wizardp(who) )
		return notify_fail("��ɶ! ��û������ȥ���Ҵ�! :b\n");
if(dir=="north"&&who->query("class")!="bandit")
 return notify_fail("���Ƕ��˹ȵĵ����޷���ȥ\n");
	return ::valid_leave(who, dir);
}
