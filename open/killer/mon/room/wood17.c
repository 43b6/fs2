//written by acelan...../u/a/acelan/room/wood17.c

inherit ROOM;

void create()
{
        set("short", "���صĵص�");
        set("long", @LONG
������ǰ��һ����˸��ҫ�۹�â��ˮ��ת�� (wheel), ���Ż��
�ķ���, ��ɢ���Ź����â������֮��, �ص��ڳ����Լ�����Ӱ��,
���������ˡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood25.c",
   ]));
   set("no_clean_up", 0);
   set("light_up", 1);
   set("item_desc", ([ /* sizeof() == 1 */
       "wheel" : "���Ǹ�ʹ��ˮ���������ת��, ����˸�Ź���Ĺ�â, ��������\n�ƺ��ǿ�����ת(turn)��\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "wheel" : "����ϸ����ת��֮����������������ת, ���һ�������һ����\nť(button),��������Ű���(press)��\n",
   ]));

   setup();
}

void init()
{
   add_action("do_turn_wheel", "turn");
   add_action("do_press_wheel", "press");
}

int do_turn_wheel( string arg)
{
   object user;
   user= this_player();
   if( arg == "wheel")
   {
      tell_object( this_player(), "�㽫ת��ת����Ȧ֮��, �ذ忪ʼ����������, �����ͳ��˵ص�...\n");
      user->move("/open/killer/mon/room/wood13.c");
      return 1;
   }
   else
      tell_object( this_player(), "����Ҫ��תʲô....\n");
   return 0;
}

int do_press_wheel( string arg)
{
   if( arg == "button")
   {
      tell_object( this_player(), "һ���°�ť, �����ǽ��������Ϣ�Ĵ���, ����̾����ص�����..\n");
      set("exits/east", "/open/killer/mon/room/wood18.c");
      return 1;
   }
   tell_object( this_player(), "����Ҫ����ʲô....\n");
   return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "east")
  {
     this_object()->delete("exits/east");
     return 1;
  }
  return 0;
}
