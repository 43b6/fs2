// Room: /u/d/dhk/questsfan/rm15
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;37mʯ��[0m");
  set ("long", @LONG
�����һ����ݲ�������ʯ�����ĵط��������������һЩ��
�ι�״�ľ�ʯ�Ĵ�����������ȴ�ֲ���������ɵģ����Դ˵ص���
��ʯ�֡�Ҳ������ϸ������Щ��ʯ����Щ�ʵ���ɢ����Щ�ʵؼ�Ӳ
��ʽ������ʯ�ζ��У���һ����ʯͷ���԰һ�㡣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 4 */
  "westup" : __DIR__"rm15",
  "eastup" : __DIR__"rm17",
  "eastdown" : __DIR__"rm9",
  "northup" : __DIR__"rm20",
]));

  setup();
}
