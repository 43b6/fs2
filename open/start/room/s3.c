// Room: /open/start/room/s3.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ����Ů����æ���չ�ǿ���е��׶���������������
�ƺ��ڵ�����ʲô�������겻���������
    ��ʵ�ķ��ᣬ������ŵĴ󲿷��Ǹ����õ�ũ�ߣ���
��Ů���ɷ�Ӧ����λũ��ɡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/start/room/s2",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/baby" : 2,
  "/open/start/npc/woman" : 1,
]));

  setup();
}
