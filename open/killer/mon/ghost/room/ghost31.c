//written by acelan...../u/a/acelan/ghost/room/ghost31.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��������ȴ���������, ������ȥ,
��һ���޼ʵ�Ĺ԰, ����������һ����ǽ��(wall), ����С��������
��, ȷʵ���Ѿ����˾�ͷ�ˡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west"  : __DIR__"ghost30.c",
   ]));
   set("no_clean_up", 0);

   setup();
}

void init()
{
   add_action("do_search", "search");
}

int do_search( string str)
{
   object me= this_player();
   if( str != "wall")
   {
      message_vision("��Ҫ��ʲô...\n", me);
      return 0;
   }
   message_vision("���Ȼ��������ǽ��ʵ��һ����ת��, ��һ��ǽ��, ����ǽ����ת��ȥ�ˡ�\n", me);
   me->move( __DIR__"ghost34");
   return 1;
}
