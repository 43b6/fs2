#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIC"����ռ�С�ؼ����"NOR);
  set ("long","�ⷿ���ǽ���һЩ���������ʱ��һЩС�ؼ�!!
  �ṩ������Ҳο�֮��!!!
  �ؼ�һ������aliasָ��,alias ָ���ǿ�����������ָ������롣
  ���磺buy water from vendor (��С����ˮ),���ǿ�����alias����
  alias bw buy water from vendor ���Ժ��bwʱ���Ǵ������ִ�!!!
  ���Դ�help alias����!!!

  �ؼ���������doָ��!!�����alias ָ��!!!
  ���磺����aliasһ��ֻ����һ������,������Ҫ���ܶ�Ķ���ʱ.Ҫ��ô����
  alias 1 do e,e,buy water from vendor
  ���ǿ�����doָ������,�ö������ָ���ָ��........
 \n");
  set("exits", ([
   "north" : __DIR__"newhand",
  "south" : __DIR__"newhand4-2",
               ]));
  set("light_up", 1);
  setup();
}

