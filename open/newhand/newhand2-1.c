#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"����ռ���������"NOR);
  set ("long","����ռ��һ���Mudһ���������������ŵ��ļ�(help newbie)
  �������������ǿ��Դ�help newbie,�ȿ�һ���������ŵ��ļ�!!!
  �����������ŵ�һ�����ǿ�help newbie
  \n");
  set("exits", ([
  "west" : __DIR__"newhand",
  "east" : __DIR__"newhand2-2",
               ]));
  set("light_up", 1);
  setup();
}

