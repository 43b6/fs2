// Room: /u/r/ranko/room/sh4.c
#include <room.h>
#include "/open/open.h"

inherit HOCKSHOP;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������е�һ�䵱�̣�����ѷ�������������õĶ�������һ
�ѣ���һ�����ҵط��š������һЩû�м�ֵ����Ʒ����˵�����
�ϰ���һ����ֵ��ˣ�ר��ϲ���ռ�һЩ���˲�Ҫ�Ķ������ɱ���
����ţ���˴���ֻҪһ�в�Ҫ�Ķ������������˴��������ϰ�
Ҳ�����߲��ܣ���ô��Ʒ���յ�ȫ�ա�
������ڴ˵䵱��Ʒ(pawn)�����˼�����Ʒ��ֵ(value)�������
�䵱����Ʒ(redeem)��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/pawn.c" : 1,
]));
  set("light_up", 1);

  setup();
}
