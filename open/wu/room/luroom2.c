// Room: /open/wu/room/luroom2.c
// ��ɽ��ݵ����䳡
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ��ݵ����䳡,����ƽ̹,�������ݽ���������ѧ�ĵط�
��һ�����ر㿴���������ڽ̵���ݵ�����ϰ��ɽ��ѧ��������ʽ,��
һ�Ե���,�����������ŵ���ʽ,��Ҳ�Ǿ�����ѧ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"luroom3",
  "east" : __DIR__"luroom5.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/a_trainee" : 3,
  "/open/wu/npc/a_trainer" : 1,
]));

  setup();
}
