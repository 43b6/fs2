// Room: /open/start/startroom.c
// ������ rewrited by wade in 1/2/1996 for chfn ����

#include "/open/open.h"
inherit ROOM;

string do_search();

void create ()
{
  set ("long", @LONG
������ļ�, �ഫ������ʮ�˴������������, �����ǵķ�ĹҲ��
�ͽ����ڸ�����ɽ�����, �峤��Ȱ�˵��Ǳ߸���, ������������ƺ�
���Ǹ������˲��ٵ�, �������������, �Ѿ�û��Ը��ȥ������, һ��
����Ϊʱ�ַ���, һ���Ǿ�˵��һ�������ҵ��˲��������챦, ������
��Ҳ��֮����, ���ϰָ�����ʮ������������߳�ȥð��, Ϊ�ľ���ϣ
������ѧ��һ���书, ����һ�ѱ���.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/start/room/s1",
]));
  set("objects", ([
	START_NPC"papa"		: 1,
  ]) );

  set("light_up", 1);
  set("no_clean_up", 1);
  set("valid_startroom", 1);

  setup();
}

string short()
{
  object	me=this_player();

  return sprintf ("%s�ļ�", me->name());
}
