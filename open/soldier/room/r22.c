
#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","������");
  set ("long", @LONG

    ���ڻ�û����֮ǰ����������������������죬����
�����˸�ʽ�����ı�������ì��ǹ�����Ͷ࣬��һ����
һ����׳��������Ū�ű���������ߴ�����������������
�˵ļһ���ô�࣬��������Ϊ�����
�����(list)������ɶ������(receive)��ȡ����

LONG);

  set("exits", ([ /* sizeof() == 3 */
        "out":__DIR__"r28",
]));
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/piko":1,
]));

  set("no_light",1);
  setup();
}
 
