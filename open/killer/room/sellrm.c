#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "ɱ�ַ�����");
  set ("long", @LONG
����ɱ���ǽ�����ѵ��������ĺõط�������Ӧ�о��С�  
���ֻ����Ա��Ļ������Ե�ɱ�ֲ������ԣ���Ƚϱ���Ŷ������
����벹�䳤����ս�����������װ�������ǲ����ѡ��

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r19.c",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/sellman.c" : 1,]));
  setup();
}