// Room: /open/wu/room/luroom8.c
// ��ɽ��ݵ����䳡
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ��ݵ������ǵ����䳡,����ƽ̹,�����Ҫ��������ѧ�ĵ�
����һ�����ر㿴���������ڽ̵���ݵ�����ϰ��ɽ��ѧ�ĸ߼���ʽ,
��һ�Ե���,������ɽ����ѧ��Ȼ�������쳣,������ѩ����ѧ���е�һ
���ߵĵ�·ͨ����ɽ�ɵĻ�԰��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"luroom9",
  "west" : __DIR__"luroom5",
  "east" : __DIR__"luroom11",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/d_trainer" : 1,
  "/open/wu/npc/e_trainee" : 3,
]));

  setup();
}
