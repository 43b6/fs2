// Room: /u/j/judd/room/r17.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "���������鷿");
  set ("long", @LONG
�����ǽ�������������������ָ������ʥ��������֮�أ��鷿
��Ȼ������ʮ�ֵļ�ª��ȴ��ʮ�ֲ�ƽ�������ǣ�������ʾ������
����ѧ֮��������ߵ�ǽ����һ����������д�ż����֣�
 
          ��ɽ���ڸߣ���������
            ˮ�������������
            ��ª���ߣ�ʥ����Ҳ�� 
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"study.c",
  "south" : __DIR__"r20.c",
  "down" : __DIR__"eqroom",
]));
  set("objects", ([ /* sizeof() == 1 */
   "daemon/class/scholar/master_sue" :1,
]));
  set("light_up", 1);
  set("valid_startroom", 1);

  setup();
        call_other("/obj/board/sue_b", "???");
}



void init()
{
  add_action("do_enter","enter");
}

int do_enter(string str){

 object me = this_player();
if(me->query("liyu")==5)
    me->move("/open/gsword/room/appo/liyu1.c");  
 return 1;
}
int valid_leave(object me, string dir)
{
if (dir == "down" || dir == "north")
	if ( !wizardp (me) && me ->query("family/family_name") != "����")
     return notify_fail("�Ǹ�����ֻ�����ŵ��Ӳ��ܽ�ȥ��\n");
     return :: valid_leave(me, dir);
}

