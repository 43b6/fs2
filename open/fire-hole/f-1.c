//����ppl exp��⣬��ֹppl����follow�����
//modify by cyw at 91/04/02
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mt[0m");
  set ("long", @LONG
�����ǽ��ı�Ե, �����ħ������û��ô��ǿ����, ����¶ȸ�ƽ
��һ��, ����δ�뿪�ý�Ŀ��Ʒ�Χ, ������һ��ֱ���Ƽ�, ʮ����ֵ�
��ʯ, ���Ҳ���������̽���õİ�! 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/fire-hole/f-3.c",
  "southwest" : __DIR__"f-2.c",
]));
  set("outdoors", 1);

  setup();
}
void init()
{
      call_out("do_check",1,this_player()); 
}
void do_check(object me)
{
      if(me->query("combat_exp" ) < 5000000 && userp(me) && living(me)) {
        message_vision(HIR"$N�ֿ����˻����ý���ȶȣ��������ͻ���㣡\n"NOR,me);
        me->move(me->query("startroom"));
        me->set( "clan/out","/open/center/room/inn");
      }else  
      me->set_temp("check_ok",1);
}
int valid_leave(object who, string dir)
{
	if (dir == "southwest" || dir == "southeast")
	{
		if(!who->query_temp("check_ok",1))
		  return notify_fail(HIY"����ȥ��Ҳ���ó���ô���!!\n"NOR);     
	        who->delete_temp("check_ok",1);
        }
        return :: valid_leave(who,dir);
}
