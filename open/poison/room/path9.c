// Room: /open/poison/room/path9
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG
������һ������ʯ���������м���ʯ��ʯ�У�ʯ����
�����һ��ʯ��(chess) ����������������ʿ�������;���
�ȣ�Ȼ���ǰ�Ӳݴ�����������û�������ڣ�ֻ��˿˿б
�����룬������һСС�Ŀӵ���
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "chess" : "�����ϻ���һ����Ļҳ����������Ѿ��ܾ��������˶���
�ˣ�Ŷ���Ѳ�����Ҳ��������һչ���գ�ֻ��ϧ���˿�����
�����ڴˡ�
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"path8",
  "west" : __DIR__"road7",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/chi.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
  if( dir == "west")
message_vision(HIC"$N��С�ĵش������ڲݴԣ��漴�Ӳ�����ûס�������ڡ�\n"NOR,me
);
  return ::valid_leave(me,dir);
}
