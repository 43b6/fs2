#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIC"����ռ�С�ؼ����"NOR);
  set ("long","�ⷿ���ǽ���һЩ���������ʱ��һЩС�ؼ�!!
  �ṩ������Ҳο�֮��!!!
  �ؼ���������ָ��!!!
  ��ʱ��������ʦ��ѧ����ʱҪ��learn dodge from master....
  ����һֱ�����..���ǿ��Ըĳ�learn 30 dodge from master..
  �ͻ����learn dodge from master ��ʮ��.....
  ����Ҳ��buy 10 tea from vendor����һ����ʮ����!!!!!
  ��������do��ָ��Ҳ����Ŷ!!!!

  �ؼ��ģ�����!!!
  ���磺��������֮�����ռ���һ�տ���ȥ��,��quests��֪����!!!
  ��Ҫ��ϸ�Ľⷨ���Ե������ר������������!!!!
  ��ԭ�ʹ�(140.135.112.2) ��fs_mud ��board

\n");
  set("exits", ([
  "north" : __DIR__"newhand4-1",
  "south" : __DIR__"newhand4-3",
               ]));
  set("light_up", 1);
  setup();
}

