#include <room.h>
inherit ROOM;
 void create()
{
  set("short", "ɱ�ֱ�����");
  set("long", @LONG
           -------  ���ұ������Ҹ���ȫ����  --------
       ɱ����̳��Ŀǰ�����С�������κγ�棬�뾡�ٻر���
       �����湻��ֻ�Ļ������С�ɻ�͸¶һЩ��̳���ϡ�
       �ǡ�������̳��Ϊɱ����Ƶġ���ÿ��ģ���Ҫ��˵��ȥ��
       ��Ȼ���ȸĵ����ҿɲ��ܡ�������ڴ�����.....

LONG);
        set("exits", ([ /* sizeof() == 1 */
            "north":__DIR__"r0.c",
            "south":__DIR__"floorm.c",
  ]));
       setup();
        call_other("/obj/board/killerwiz_b","???");
}
int valid_leave(object me, string dir)
{
  if (me->query("class")!="killer" && dir=="north")
 return notify_fail("����ɱ�ֵĽ���!������û��������,�����޷�����!\n");

return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}