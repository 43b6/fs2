#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "����������");
  set ("long", @LONG
��������ʦ�������۵ĵط�֮һ�������ʦ�����۸�������йص���
    ��, ����ѡ������� post, ����� area �� quests....
    ��Ȼ, �������ʦ�����븺�������ĳ area, Ҳ������� post.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"entrance",
  "cap" : __DIR__"caproom",
]));

  set("no_clean_up", 0);


  setup();
 call_other("/obj/board/area_b","???");
}
