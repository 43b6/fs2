#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short",HIY"����¥"NOR);
  set ("long", @LONG
������������ġ�����¥��������Կ�����İڹ���ɱȻʹ���
��̧ͷһ�������ַ������������ϣ����ɱ���Ŀ����㣬���Ա�
վ��һλ���ΰ�С������ˣ�����������ô�Ը��㣬Ҫ���Ļ���
�Ͽ��ܰɡ�
LONG);

  set("objects", ([ /* sizeof() == 4 */
"/open/love/npc/1.c":1,
  ]));
  set("exits", ([ /* sizeof() == 4 */
  "out" : __DIR__"room1-3.c",
  ]));
  set("light_up", 1);

  setup();
}

