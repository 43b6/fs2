//written by acelan...../u/a/acelan/ghost/room/ghost34.c

inherit ROOM;

void create()
{
        set("short", "�ڷ����ܲ�");
        set("long", @LONG
�����Ǻڷ�����ܲ�, �ڷ���Աһ������ɫľȻ, �������Ĳ���
��, ���ܿյ�����, ����ǽ�϶��˼���ǧ�ź���, ����������������
, �����ڷ��鲢����ԣ���ϱ���Ƭ���ر����ǽ��(wall)��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost37.c",
       "east"  : __DIR__"ghost35.c",
       "west"  : __DIR__"ghost33.c",
   ]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black2.c" : 2,
]));
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
   me->move( __DIR__"ghost31");
   return 1;
}
