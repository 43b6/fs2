#include <obj.h>

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ������");
  set ("long", @LONG
����һ��ʮ���Ͼɵĳ�����������ǰ�������Ϲ�����һ������ĳ�
�������Ͼɣ������������ѱ����޹���ںڵ���ɫ����ʾ����ض���
���ܵ���ͽ�ľ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"square",
  "south" : __DIR__"eroad1",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/obj/paper_seal" : 2,
]));
  set("no_fight", "1");

  setup();
}
