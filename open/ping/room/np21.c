#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
�����Ǵ�ʦ�������ľ���, ���˿���ȴ���ڷ���, ������������
�˰�, ���ſ���һ��, ���䷿��ֻ��һ����(table), һ����(chair),
������һЩ����, �κζ���İ����û�С�

LONG);

  set("item_desc", ([ /* sizeof() == 3 */
  "table" : "һ�ŷ�������������, û���ر�ĵط�, ֻ�������ӵ����������
һ������(note)��
",
  "chair" : "�ֲڵ�ľͷ�Ƴɵ�����, ����������ȴ�ܹ⻬��
",
  "note" : "                 ��������������������������
                 �� ����, �����гǽ����� ��
                 ��  һ��, ������ʦ��������
                 ��                      ��
                 ��             ����� �ʩ�
                 ��������������������������
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"np16",
]));
  set("light_up", 1);

  setup();
}
void init()
{
   add_action("do_enter","enter");
}
int do_enter(string str)
{
   object me = this_player();
if(me->query("family/family_name",1)=="�μ�" && me->query_skill("six-fingers",1)==100)
   me->move("open/ping/room/np31.c");
   return 1;
}

