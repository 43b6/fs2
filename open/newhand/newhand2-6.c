#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"����ռ���������"NOR);
  set ("long","���󲿷ݵ����ɶ����ṩ��(quests),�������似����
  ���ر����(functions)!!�ⷽ��,�����������ʱ������������,����
  ������ɺ������һ�°��еĸ���!!!�������!!!������������Ҷ�
  �����������!!!!
  \n");
  set("exits", ([
  "west" : __DIR__"newhand2-5",
  "east" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

