//written by acelan...../u/a/acelan/room/wood21.c

inherit ROOM;

void create()
{
        set("short", "�ܵ��ľ�ͷ");
        set("long", @LONG
�������ܵ��ľ�ͷ, ��һ�����ɿ����������ر�ƽ��, ���Ƶ���
��һ��ȥ��, �������������������(word), ��ߺ��ұ߸���һ����
�����ϵ����١�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood27.c",
   ]));

   set("item_desc", ([
       "word" : "(pull left)ͨ�����뵽�ĵط���\n(pull right)ͨ�����벻���ĵط���\n",
   ]));

        set("no_clean_up", 0);

        setup();
}

void init()
{
   add_action("do_pull", "pull");
}

int do_pull( string str)
{
   object me;
   me= this_player();
   if( str== "left")
   {
      tell_object( me, "���������ŵķ������߿���һ����, ���Լ���ǰ����\n");
      set("exits/west", "/open/killer/mon/room/wood20.c");
      return 1;
   }
   if( str== "right")
   {
      tell_object( me, "��һ��������, ���³���һ����, ������Ҳ�������͵���ȥ�ˡ�\n");
      me->move("/open/killer/mon/room/wood14.c");
      return 1;
   }
   return notify_fail("��ʲô?����Ҫ�����ò���?\n");
}

int valid_leave(object me, string dir)
{
  if (dir != "west")
  {
     this_object()->delete("exits/west");
     return 1;
  }
  return 1;
}
