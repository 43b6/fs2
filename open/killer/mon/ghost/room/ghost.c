//written by acelan...../u/a/acelan/ghost/room/ghost12.c

inherit ROOM;

void create()
{
        object me;
        me= this_player();
        set("short", me->query("name")+"֮Ĺ");
        set("long", @LONG
ʲô....���ﾹ���ҵķ�Ĺ, ����ϸ����Ĺ��(gravestone), ��
���Ȼ��д�š�"+me->query("name")+"֮Ĺ��, �������ų���һ���亹, ֻ������Ĺ
�ڴ�������Ŀ�������....��ѽ....�������ߡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost19.c",
       "south" : __DIR__"ghost6.c",
       "east"  : __DIR__"ghost13.c",
   ]));
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "����д�ż������֡�"+me->query("name")+"֮Ĺ��\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "����ϸ�����Լ���Ĺ������, ���ĵײ���Ħ�����ĺۼ�, �����ƺ��ǿ�����(pull)�ġ�\n",
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
   object me;
   me= this_player();
   if( arg != "gravestone")
   {
      mission_vision("��Ҫ��ʲô.........\n", me);
      return 0;
   }
   mission_vision("��ʹ���Ľ����Ĺ���ƿ���, ��Ȼ������Ĺ��֮��Ȼ���и�ͨ����\n", me);
   set("exits/west", __DIR__"ghost11.c");
}

int valid_leave(object me, string dir)
{
   if (dir != "west")
   {
      this_object()->delete("exits/down");
      return 1;
   }
   return 0;
}
