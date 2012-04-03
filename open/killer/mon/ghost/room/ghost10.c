//written by acelan...../u/a/acelan/ghost/room/ghost10.c

inherit ROOM;

void create()
{
        object me;
        me= this_player();
        set("short", "��Ĺ");
        set("long", @LONG
����һ���ܴ�ܻ����ķ�Ĺ, ������ΧǽΧס, ĹѨ����ʯ����
���ɵ�, Χ����������ܴ�, ���ٿ�����ʮ����, �������ĹѨ��ס
���˱ض��Ǵ�����ͷ������, ����Ĺ��(gravestone)��ȴ��һ���ֶ�
ûд, ������ͦ�Źֵġ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west"  : __DIR__"ghost9.c",
   ]));
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "һ��ʲô�ֶ�ûд��Ĺ��\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "����ϸ�۲����Ĺ����, ��������������д�ż�����, �����ǡ�֥�鿪�š���\n",
   ]));
   set("no_clean_up", 0);

   setup();
}

void init()
{
   add_action("do_say", "say");
}

int do_say( string arg)
{
   object me;
   me= this_player();
   if( arg != "֥�鿪��")
   {
      message_vision("������ʲô��, û��������Ͱ�����ʮ�����...\n", me);
      return 0;
   }
   message_vision("ͻȻ����һ��, ֻ��Ĺ����������, ����ǰ��������һ��·��\n", me);
   set("exits/north", __DIR__"ghost16.c");
   return 1;
}

int valid_leave(object me, string dir)
{
   if (dir != "north")
   {
      message_vision("ͻȻ����һ��, ֻ��Ĺ����������, �ֽ����ڶ�ס�ˡ�\n", me);
      this_object()->delete("exits/north");
   }
   return 1;
}
