// Room: /open/ping/room/p7
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
������һ������ķ���, ���ܴ�ɨ�ĺܸɾ�, ��ֱ�������µ�һ��
, �㿴������İ����ƺ���һλŮ���Ӽҵķ���, ��˵�к�ͻأ�ĵط�
�����ǽ�Ϲ���һЩ�ʡ��ȵ�����ר�õı�����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p6",
]));
  set("objects", ([ /* sizeof() == 1 */
  PING_NPC"duan0" : 1
]));
  set("light_up", 1);

  setup();
}
