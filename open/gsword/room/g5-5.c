// Room: /open/gsword/room/gsword3-7.c
inherit ROOM;
#include <ansi.h>
 int done;
void create ()
{
    seteuid(getuid());    // ����˵Ҫ����һ����?
  set ("short", "�ؽ���");
  set ("long", @LONG
һ�뷿�� ,�����ϸе������������ ,��һ���� ,ֻ������һ��ƽ̨�� ,һ��
����ɫ�ĺ���ɢ�����ޱȵĺ��� .�����׵�ǽ���ϵ��ǹ�����������ö�Ŀ
�ı���. ���ߵ��ǳ�Ϊ���ԵĶԱ�.

LONG);


  set("exits", ([ /* sizeof() == 2 */
  "east":"/open/gsword/room/sproom.c"  
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
  object me,ob;
  me =this_player();
  if( done== 0 )
      {
         message("system","[1;31mֻ����ɽ�Ͽ�һ����⻮�ն���[0m\n",users());
         message_vision("���֮�� ,�ǵ�����ѽ�����������$N����\n",me);
ob=new("/open/gsword/obj/spsword-1.c");
         ob->move(me);
       }
    
   else
    message_vision("���ھ��ǿ���һ�� ,�㲻������һ��\n",me);
  done=1;
  return 1;
  } 
