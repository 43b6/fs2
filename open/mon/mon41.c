inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�׻���");
  set ("long", @LONG
����ɽ����������֮һ��վ�ڴ˵أ���Ұ�����ģ�ֻ������ʤ��
�����ݣ�������֮����һ����أ�����ԭ���ĳ�ˮ�������£��Ѿ�
�ɺ��˲��٣���ԭ���ɺԵĵط�ȴ������һƬ��ԭ��������߷壬��
�Թ��͵������ľ�ɫ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "stand" : __DIR__"mon49",
  "south" : __DIR__"mon46",
]));

  setup();
}
