#include </open/open.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
���߽��˷�, �о��۾�һ�� ,���ܴ�ɨ�ĺܸɾ�, ��ֱ�������µ�
һ��, �����Ƕ��ư�Ů����Сʫ���Ĺ뷿, ��˵�к�ͻأ�ĵط�, ���
��ǽ�Ϲ���һЩ�ʡ��ȵ�����ר�õı�����

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np28",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan0" : 1,
]));

  setup();
  replace_program(ROOM);
}
