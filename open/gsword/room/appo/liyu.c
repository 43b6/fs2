inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());   
set ("short", "����");
  set ("long", @LONG
һ�뷿�� ,�����ϸе������������ ,��һ���� ,ֻ������һ��ƽ̨�� ,һ������ɫ��(box) ɢ��������ϵ��ޱ����ʵ�������ʹ���̲�ס��ȥ��������

LONG);
  set("exits", ([ /* sizeof() == 2 */
  "out" : "/open/mogi/forest/entrance.c"
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
    message_vision("���ھ��ǿ���һ�� ,�㲻������һ��\n",me);
  me->set("liyu",3);
  return 1;
  }
