//written by acelan...../u/a/acelan/room/wood15.c

inherit ROOM;

void create()
{
        set("short", "С���ľ�ͷ");
        set("long", @LONG
��! С�����������˾�ͷ, ��һƬ�յ�����һ�ò����ľ(tree),
���ܺ���������֦Ѿ����Χ����Ҷ����һƬ, �ܲ�͸��, �·�̫����
һ˲֮����ɽ�ˡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood11.c",
   ]));

   set("item_desc", ([
       "tree" : "����ϸ�Ŀ�����ù�ľ֮��, �������ǿ��ĵ�, ���������ܴ�\n���и���(door)\n",
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
   object me;
   me= this_player();
   if( str== "door")
   {
      tell_object( me, "��Ȼ, �ڴ��ź��㷢���˹�ľ֮����һ�����ϵ�¥�ݡ�\n");
      set("exits/up", "/open/killer/mon/room/wood22.c");
      return 1;
   }
   return notify_fail("ʲô..������С�ȵ�С���...\n");
}

int valid_leave(object me, string dir)
{
  if (dir != "up")
  {
     this_object()->delete("exits/up");
     return 1;
  }
  return 1;
}
