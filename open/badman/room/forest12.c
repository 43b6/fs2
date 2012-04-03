// Room: /open/badman/room/forest12.c
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
  "north" : __DIR__"forest08",
  "west"  : __DIR__"forest09",
  "south" : __DIR__"forest11",
  "east"  : __DIR__"forest04",
]));
  set("outdoors", "/open/badman");

  set("objects", ([ /* sizeof() == 4 */
  "/open/badman/npc/wolf.c" : 4,
  ]));

  setup();
}

void init()
{
  add_action("do_search","search");
}
int do_search()
{
  object who;
  who = this_player();
  tell_object(who,"\n�㷢����һ��С��...��˳�Ŷ������˽�ȥ\n\n");
  tell_object(who,"\n......����...����......����....\n\n");
  tell_object(who,"\n...����..��������������,�㲻������һ����.\n\n");
  who->move("/open/badman/room/wolf01.c");
  tell_room(this_object(),"��ֻ����"+who->query("name")+"��������,һ���ӾͲ�����\n");
  return 1;
}
