// Room: /open/badman/room/b16
inherit ROOM;

void create ()
{
  set ("short", "���˹��Ͻ�");
  set ("long", @LONG
����м���С���ۼ��ڴ˵أ���֪����������Щ��ô��Ҳ����
����Ȥ���ʿ������⣬���м�ֻ��Ƥ��С��ȸ�����ݶ��͵�����
����ȥ���ɰ���ģ��������ú��׽����ǣ�����������Ϊ�������
�ڶ��˹ȵ��ǹ��������޵���ɱ��Ϣ��

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/sparrow" : 3,
  "/open/badman/npc/vendor" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b17",
  "east" : __DIR__"b15",
]));

	set("no_transmit",1);
  setup();
}
void init()
{
        object who=this_player();
        who->set_temp("can_feed",1);
}

int valid_leave(object who,string dir)
{
	who->delete_temp("can_feed");
        return ::valid_leave(who,dir);
}
