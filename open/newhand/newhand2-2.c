#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"����ռ���������"NOR);
  set ("long","���������������ļ�(help newbie)֮��,Ҫ�˽�һ�¿���ռ������!!
  һ����˵�ڳ�Ϊ����֮ǰ����Ҫ���Ҹ����ɰ�ʦѧ��!!�ڼ�������֮ǰҪ�ȼ��빫��(class)
  ���ֵڶ������ȼ�������ɵĹ���(join class)�ڼ��������(apprentice master)
  ����Դ�guild,�ͻ���ֿ���ռ�����ɼ�ְҵ!!!
  ������Ը������н�һ�����˽�...���Դ�help ���ɼ��
  \n");
  set("exits", ([
  "west" : __DIR__"newhand2-1",
  "east" : __DIR__"newhand2-3",
               ]));
  set("light_up", 1);
  setup();
}

