#include </open/open.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
��������ʦ�ֶ�Զ���ס��, ��ͷ�д��εȼҾ�, ���õ���ů��
��ǽ�Ϲ�����ྫ�����ֻ�, ���Ƕ�Զ����ֱ�, �㲻������������
ȫ�š�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np14",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan3.c" : 1,
]));

  setup();
}
