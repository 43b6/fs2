//written by acelan...../u/a/acelan/ghost/room/ghost37.c

inherit ROOM;

void create()
{
        set("short", "�ڷ����ܲ�");
        set("long", @LONG
�����Ǻڷ����ܲ��Ĵ���, ֻ���ڷ��鳤�������ݵ����ڴ���֮
��, ��ǰ��һ��Բ��, ����Ӧ���������õ�, �����ĺ󷽾��Ǻڷ���
��������, ƽʱ�ǲ�׼���ڵġ�
LONG);
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost39.c",
       "south" : __DIR__"ghost34.c",
       "east"  : __DIR__"ghost38.c",
       "west"  : __DIR__"ghost36.c",
   ]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/hu_fa6.c" : 1,
  "/open/killer/mon/ghost/npc/black2.c" : 2,
]));

   setup();
}

int valid_leave(object me, string dir)
{
   if (dir == "north")
   {
      if( me->query_temp("ghost") == 2)
      {
         message_vision("�ڷ��鳤����ս˵��:��û�뵽���ǻ���������, ��ȥ����������!��\n", me);
         return 1;
      }
      else
      {
         message_vision("�ڷ��鳤����ս��ȵ�:���ҵĹ뷿����$N�����Ҵ�����?��\n", me);
         return 0;
      }
   }
   return 1;
}
