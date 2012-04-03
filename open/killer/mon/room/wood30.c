//written by acelan...../u/a/acelan/room/wood30.c
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�Ҷ�");
        set("long", @LONG
�Ҷ���������, ���ֲ�����ָ, ����һƬ���, ����в�������
����, ֻ����Լ�Ŀ���ǰ�����ż�����, �����Ͽ����Ų�֪����С��
, ��ɫ����, ��Ϊ���ء�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "down" : "/open/killer/mon/room/wood26.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
void init()
{
   add_action("do_search", "search");
   add_action("do_pull", "pull");
}
int do_search( string str)
{
   if( str != "dagger")
   {
      message_vision("��������ȥ, ʲô��û���ҵ�...\n");
      return 0;
   }
   if( present("god dagger", this_player()))
   {
      message_vision("�ұ��ֿ�ʼ����.......����ұ���ˤ��ȥ��...\n");
      this_player()->add("kee", -100);
      this_player()->move("/open/killer/mon/room/wood26.c");
      return 0;
   }
   if( this_player()->query("quest/rain")==1)  //�ټ��һ��, ���⵱�ٵ�ɱ�ִ�����
   {
      message_vision("��������ϸ������֮��, ��Ȼ���ֵ��ϲ���һֻذ��(dagger)...\n");
      message_vision("��������������ʧ���Ѿõ�"HIW"����ذ��"NOR"....\n");
      message_vision("��������Ž�������(pull)��\n");
      return 1;
   }
}
int do_pull(string str)
{
   object ob_dagger;
   if( str == "dagger")
   {
      if( present("god dagger", this_player()))
      {
         message_vision("�ұ��ֿ�ʼ����.......����ұ���ˤ��ȥ��...\n");
         this_player()->add("kee", -100);
         this_player()->move("/open/killer/mon/room/wood26.c");
         return 0;
      }
      if( this_player()->query("quest/rain")!=1)
      {
         message_vision("������ dagger ������..............\n");
         return 0;
      }
      message_vision("..........................................\n");
      message_vision("��������Ľ�"HIW"����ذ��"NOR"��������....\n");
      message_vision("ͻȻ��ɽҡ�ض�, �ղŵľٶ��ƺ�������ɽ����\n");
      message_vision("��Ȼ....����ұ���ˤ��ȥ��................\n");

      ob_dagger= new("/open/killer/obj/dagger.c");
      ob_dagger->move(this_player());
      this_player()->move("/open/killer/mon/room/wood26.c");
      return 1;
   }
   else
   {
      message_vision("��Ҫ��ʲô...........\n");
      return 0;
   }
}
