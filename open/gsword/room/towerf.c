#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
һ������ľ������������ǰ,���䲻��,���������Ե�
�ɰع�ɼ,ȴ�Եõ���Ʈ��,����ϸ�۲�����,���Ҳ���
һ����˿,��������ø߶Ƚ������������ɵ�����!!!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"froad0",
  "enter" : "/open/gsword/star/room/room1.c",
]));
  set("light_up", 1);

  setup();
}
