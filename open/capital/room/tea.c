// Room: /open/capital/r31.c

#include </open/capital/capital.h>
	
inherit ROOM;
									
void create ()
{
  set ("short", "����«");
  set ("long", @LONG
��ݡ��ϰ������ܺã�ȡ�˸����ŵ����ӣ�����Ҳ������һЩ����
������ǽ�ڳ��ţ�һƬ���⣬ɷ�Ǻÿ�������������磬�о�ů����
����ݾ��ǲ�ݣ�С����Ϣ���ĵط������ִ��£�֥��С�£������
�У����������С�����˳����ͨ����С�¶�֪����Ҫ����ô�£�����
�Ͷ��ˡ�

LONG);

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/waiter1" : 1,
]));

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/r31",
]));

  set("gopath", "west");

  setup();
}
