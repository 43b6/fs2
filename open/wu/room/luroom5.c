// Room: /open/wu/room/luroom5.c
// ��ɽ��ݵ����䳡
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ��ݵ����䳡,����ƽ̹,�������ݽ���������ѧ�ĵط�
��һ�����ر㿴���������ڽ̵���ݵ�����ϰ��ɽ��ѧ���м���ʽ,��
һ�Ե���,������ɽ����ѧ��Ȼ�Ǿ����쳣,�����������еľ�ѧ��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"luroom2.c",
  "south" : __DIR__"luroom6",
  "east" : __DIR__"luroom8.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/d_trainee" : 3,
  "/open/wu/npc/d_trainer" : 1,
]));

  setup();
}
