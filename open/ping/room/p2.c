// Room: /open/ping/room/p2
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�߽�����, ��һ������, ��ǰͨ������, ��������Ҳ����һ���ߵ�
�����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1",
  "west" : __DIR__"p3",
  "out" : __DIR__"pingking",
  "east" : __DIR__"p5",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="east" && me->query("family/family_name")!="�μ�" )
         if(!wizardp(me))
      return notify_fail("���С������Ц��Ц�Ķ���˵: [1;36m��������[0m\n");
        return ::valid_leave(me, dir);
}

