// Room: /open/badman/room/r5

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�����Ƕ��˹ȵ�����ݣ����е��½�С�බ������������ѵ
��������������ź���ζ�����Ĵ���ɢ�ı�����ǽ�Ϲ��ŵ�һ����
ս������ͼ(figure)������������ʹ������һ��ɽ��Ҳ�ý�����
���ѵ�������ڶ��˹������档

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"b5",
  "south" : __DIR__"r12",
  "east" : __DIR__"b14",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "figure" : "�㿴��ͼ��д�ţ�
����ɶս����ΧŹ�Ͷ�������ĸ�����˻�װ������
					���˹����� oda ����һ��...:b
",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/lolo" : 3,
  "/open/badman/npc/teacher" : 1,
]));
  set("light_up", 1);

  setup();
}
