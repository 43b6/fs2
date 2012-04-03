//written by acelan...../u/a/acelan/room/wood20.c
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "��ľ֮��");
        set("long", @LONG
��ľ֮����������Ļ�Ҫ�ߺܶ�, ����������ľï��, ���ϸ���
��ѹѹ��һ��Ƭ, ��������Ϊ����Ȼ, �ƺ��ǹ������ڱ�Щʲô, ��
��ǰ�����ܴ�, ��Լ��������(rope), ��֪������ʲô�õġ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "down" : "/open/killer/mon/room/wood19.c",
       "east" : "/open/killer/mon/room/wood21.c",
   ]));
   set("item_desc", ([
       "rope" : "����һ������ͨ������, ��֪Ϊ�δ������\n",
   ]));
   set("search_desc", ([
       "rope" : "����ϸ�۲��������Ӻ�, �����������ӵ��Ϸ���һ��ľ�崦, ���������������(pull)��\n",
   ]));
   set("no_clean_up", 0);

   setup();
}

void init()
{
   add_action("do_pull", "pull");
}

int do_pull( string arg)
{
   object me, killer;
   me= this_player();
   if( arg != "rope")
   {
      message_vision("����ѽ����, �����ϰ���, ���ڸ���������һ����ľ����֦, ���Դ��ؼ������\n", me);
      return 0;
   }
   message_vision("������������������, ͻȻ����������, �漴����һ��, �Ϸ�����һ�����ڡ�\n", me);

   if( killer= present("killer", environment( me)) )
   {
      tell_room(environment(me),HIW"�������ϼ�ɱ�ֽе�:���ô�����...!!��\n"NOR);
      if( me->query("combat_exp") < 15000)
      {
         message_vision("�������ϼ�ɱ��˵��:�������鲻ɱ����֮ͽ, ���߰�...��\n", me);
         return 0;
      }
      killer->kill_ob( me);
   }
   set("exits/up", __DIR__"wood31.c");
   return 1;
}

int valid_leave(object me, string dir)
{
  if (dir != "up")
  {
     this_object()->delete("exits/up");
  }
  return 1;
}
