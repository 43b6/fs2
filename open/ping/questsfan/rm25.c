// Room: /u/d/dhk/questsfan/rm25
inherit ROOM;
#include <ansi.h>
#include </open/open.h>
void create ()
{
  set ("short", ""HIY"��"HIC"��"WHT"ƺ"NOR"");
  set ("long", @LONG
������ʪ�ģ����ո��ء�����һ���ߵأ���Ի������ƺ������Ϊ
ÿ����������ʱ������ͳ�����ѹ������µء����������Ϸ�����
��ȥʱ���֣���Ƭɽ�ڱ�������������Ƭ���ƽ����ɽ������������
���֡�������ɽ֮���������ɾ�������Ⱥ������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"rm11",
]));
  set("outdoors", "/u/d");

  setup();
}
void init()
{
    call_out("dhk",1,this_player());
}
void dhk(object who)
{
  if(who->query_temp("run")!=1 && who->query_temp("mime")==1)
    {
     tell_object(who,"\n"WHT"��Ȼһ����ɫ����Ӱ������������ȥ������֮�������˼��"NOR"\n");
       who->set_temp("run",1);
     remove_call_out("dhk");
    }
}

