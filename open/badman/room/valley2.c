// Room: /open/badman/room/valley1.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
һ�ߵ�������ܶ���������������Χ�ƣ�ֻ�����ߵ����ֽ�
Ϊϡ�裬�����Ѿ�û·�����ˡ�������ĺ��ӻ���ʱ̽ͷ�����㣬
�ɼ�����Ⱥ���ӻ��Ǻ�����������렭������Ĳ���֮�͡�

LONG);
 
  set("objects", ([
  BAD_NPC"m-king" : 1,
  BAD_NPC"monkey" : 2,
  ]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"valley1",
]));

  setup();
}
