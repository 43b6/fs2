// Room: /u/d/dhk/questsfan/room14
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "������Ե");
  set ("long", @LONG
������Ǵ����о����Ĺ�֮һ�������ɶ�����������
ߪѡ����ǿ��������֮һ"������"�����ء�ֻ����һλ��
�����ڵ�㾷�������ʮ��ʱ�Ĺ���ʩչ�ž����������乥
��֮����������֮�����Դ��ˮ��©֮���硣һ��һʽ��
���˿���Ŀ�ɿڴ����ѹִ�������~����~���ǡ��Ǿ��ȵ�
һ�ء�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room13",
  "northdown" : __DIR__"room15",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ung.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir){
if(who->query("marks/fan-finger")!=1)
    if(dir=="northdown" && who->query("questsfan/quest_step")!=3)
    {
    message_vision(HIC"�����´����Ķ�$N˵��:�������������������ĵط�?�������!!\n"NOR,who);
      return notify_fail("�����´����Ķ���˵��:�������������������ĵط�?�������!!\n");
    }
  return :: valid_leave(who,dir);
}
