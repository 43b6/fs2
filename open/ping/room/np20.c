#include <ansi.h>
inherit ROOM;

string do_shelf();
void create ()
{
  set ("short", "�����鷿");
	set( "build", 13 );
  set ("long", @LONG
�߽�����㿴�����ҵ����(shelf)���ֻ�(picture), ԭ�������߽���
���Ƶ������鷿, ���Ʊ����L���ľ����ļ�����ѧ���䶼�ղ��ڴ�, ��������
��ֻ����һ��������Ӧ�ò������˷��ְ�.....

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "picture" : "���·��Ƴ��ұ���һ�뽭�����´ݣ���ͼ��ҵ̸Ц�У���ʤ����һ����
",
  "shelf" : "�����濜�{F�������ź��ļ�, ���̲�ס���ü���������search)��",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/boy.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"p1",
  "pray" : "/open/ping/room/talkroom",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "shelf" : (: do_shelf :),
]));

  setup();
}

int valid_leave(object me, string dir)
{
if( dir=="pray" && me->query("family/family_name")!="�μ�" )
return notify_fail("���С����"NOR"��Ц��Ц�Ķ���˵: ��������\n");
        return ::valid_leave(me, dir);
}
string do_shelf()
{

        object me=this_player();
  if (me->query_temp("get_sbook") == 0)
{
          write("����ϸ�Ĺۿ����ϵ��鼮......\n\nͻȻ��һ���������ϵ�������....\n");

          new("/open/ping/obj/sunforce_book")->move(__DIR__"np20");
          me->set_temp("get_sbook",1);

        }
        else
           return("�������ϰ��죬���ǿ��������κ�����֮����\n");
}

