inherit ROOM;
#include <ansi.h>
int done;
void create ()
{
  seteuid(getuid());
set ("short", "����");
  set ("long", @LONG
һ�뷿�� ,�����ϸе������������ ,��һ���� ,ֻ������һ��ƽ̨�� ,һ������ɫ��(box)ɢ��������ϵ��ޱ����ʵ�������ʹ���̲�ס��ȥ��������
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "out" : "/open/scholar/room/r17.c"
]));
  set("light_up", 1);
  set("no_clean_up",1);
  setup();
}
 void init()
{
 add_action("open_box","open");
  }

int open_box(string str)
 {
  object me;
  me =this_player();
  if( done== 0 )
      {
      message("system",HIC"\nԶ����ճ���ͻȻ��������ǧ�Ƶ���ɫ���..\n"NOR,users());
      message_vision(HIC"\nֻ�������ʵ�Χ����$N��ߣ���ǰ�ľ��󿴵���Ŀ�ɿڴ�..\n"NOR,this_player());
      call_out("msg1",3,me);
     }
   else
    message_vision("���ھ��ǿ���һ�� ,�㲻������һ��\n",me);
    me->set("liyu",0);
  done=1;
    return 1;
}

int msg1(object me)
{
  object ob;
  message("system",HIC"\nת�ۼ���ɫ��������ۼ�����������..\n"NOR,users());
  message_vision(HIC"\n�����ʵ���ʱ����$N��ȥ�����֮�࣬�ʵ��ѻû�Ϊ��������$N����..\n"NOR,me);
  ob=new("/open/gsword/new/pen.c");
  me->set_temp("liyu_pen",1);
if(!me->query("quests/shasword")) me->set("quests/shasword",1);
  me->set("liyu",0);
  ob->move(me);
  return 1;
  }
