#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIC"����ռ�С�ؼ����"NOR);
  set ("long","�ⷿ���ǽ���һЩ���������ʱ��һЩС�ؼ�!!
  �ṩ������Ҳο�֮��!!!
  �ؼ��壺ָ���
  ����ռ��ϵͳ���Զ���Ѱ���п��ܵ�ָ��....
  �����surrender(Ͷ����ָ��)..Ҫ��ȫ������ʱҲ��ͱ�������...
  ���������ֻ��surr ϵͳ���Զ�����ִ��surrender��ָ��!!!!

  ���⻹������������ؼ�...���������Ե��ؼ�..����..
  ��Ҫ����Լ�ȥ����!!!!!
\n");
  set("exits", ([
  "north" : __DIR__"newhand4-1",
  "south" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

