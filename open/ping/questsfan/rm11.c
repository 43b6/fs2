// Room: /u/d/dhk/questsfan/rm10
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;33m����[1;32m����[0m");
  set ("long", @LONG
�����һ�����ַ��ӣ��ߴ�����֡�������������������ɫ
ȷ��û��һ��ֹͣ��С�꣬�����������ֵı�ƾͽУ����ո��ء�
����˵������ղ�ͣ��������Ϊ������һ���ڴ˵���Ϣ����Ϊ̫��
�����ô˵���һ��С�꣬��������Ϣ��ȴ�Ҵ���ȥ����û�����ⳡ
��ֹͣ�����ԴӴ���������ûͣ����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 4 */
  "westdown" : __DIR__"rm10",
  "east" : __DIR__"rm25",
  "westup" : __DIR__"rm12",
  "west" : __DIR__"rm18",
]));

  setup();
}
void init()
{
    call_out("dhk",1,this_player());
}
void dhk(object who)
{
  if(who->query_temp("run")!=2 && who->query_temp("run")==1)
  {
   tell_object(who,""WHT"�����ɫ����Ӱ�ֿ�����������ȥ������֮�������˼��"NOR"\n");
   who->set_temp("run",2);
   remove_call_out("dhk");
  }
}

