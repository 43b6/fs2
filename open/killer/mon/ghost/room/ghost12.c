//written by acelan...../u/a/acelan/ghost/room/ghost12.c
//2001.12.11 Modify by Wataru for ��֮��ɱ
//�ش˴����ӣ���������

inherit ROOM;
void create()
{
 object me=this_player();

        set("short", me->query("name")+"֮Ĺ");
        set("long", "ʲô....���ﾹ���ҵķ�Ĺ, ����ϸ����Ĺ��(gravestone), \n"+
"�����Ȼ��д�š�"+me->query("name")+"֮Ĺ��, �������ų���һ���亹,\n"+
" ֻ������Ĺ�ڴ�������Ŀ�������....��ѽ....�������ߡ�\n\n");
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
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/empty.c" : 1,
]));
   setup();
}

void init()
{
        object me=this_player();
//�����create��ʹ�󵽵��ˣ����������Լ���Ĺ
        set("short", me->query("name")+"֮Ĺ");
        set("long", "ʲô....���ﾹ���ҵķ�Ĺ, ����ϸ����Ĺ��(gravestone), \n"+
"�����Ȼ��д�š�"+me->query("name")+"֮Ĺ��, �������ų���һ���亹,\n"+
" ֻ������Ĺ�ڴ�������Ŀ�������....��ѽ....�������ߡ�\n\n");
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "����д�ż������֡�"+me->query("name")+"֮Ĺ��\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "����ϸ�����Լ���Ĺ������, ���ĵײ���Ħ�����ĺۼ�, �����ƺ��ǿ�����(pull)�ġ�\n",
   ]));

   add_action("do_pull", "pull");
   add_action("do_intone", "intone");
}

int do_pull( string arg)
{
   object me=this_player();
   if( arg != "gravestone")
   {
      message_vision("��Ҫ��ʲô.........\n", me);
      return 0;
   }
   message_vision("��ʹ���Ľ����Ĺ���ƿ���, ��Ȼ������Ĺ��֮��Ȼ���и�ͨ����\n", me);
   set("exits/west", __DIR__"ghost11.c");
   return 1;
}

int do_intone( string arg)
{
   object me=this_player();
   
   if (me->query_temp("firstpart") !=9)
   	return 0;
   if( arg != "Ү����������")
   {
      message_vision("�㵽��������ʲôѽ���ܳ�Ү........\n", me);
      return 0;
   }
   message_vision("��$N���������̵�����������һ�º�Ĺ���ϳ�����һ������\n", me);
   message_vision("$N������ȡ�£�˲ʱһ����â£��$N......\n", me);
   new("/open/killer/ninja/find/gmap.c")->move(me);
   me->set_temp("firstpart",10);
   me->move("/open/killer/ninja/find/9block.c");
   return 1;
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

