#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIG"����ռ���ɫ˵������"NOR);
  set ("long","����ķ����ǽ��ܿ���ռ��һЩС��ɫ!!!
  ��ɫһ�����help ��ʽ�������ս����ʽ��������Ҫ�����Թ�ʽ��������!!!
  ��ɫ���������ƶ�,exp������������ʱ����Ϊ����!!!�����Դ��Լ���ʽ!!!
  ��ɫ�������ɵ��ƶ�!!!
  ��ɫ�ģ���ɫ���������ӣ����help news������ʱ�����µĹ�������!!!!
                \n");
  set("exits", ([
  "northwest" : __DIR__"newhand",
  "southeast" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

