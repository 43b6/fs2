//written by acelan...../u/a/acelan/room/wood12.c

inherit ROOM;

void create()
{
        set("short", "С���ľ�ͷ");
        set("long", @LONG
��������С���ľ�ͷ, �����쾹Ȼû��·��, ��������Ҫ������
��ʱ��, �㷢�ֵ����������ֵ���Լ�и���ֵķ���(sign), ��֪��
������д��ʲô��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood5.c",
   ]));
   set("item_desc", ([
       "sign" : "����ϸ�Ŀ����������֮��, ��������ָ��һ������(level),\n���������������(pull)��\n",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/npc/grnnpc1.c" : 2,
]));
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
   if( str== "level")
   {
      tell_object( me, "�㷢����һ�����µ��ܵ�\n");
      set("exits/down", "/open/killer/mon/room/wood16.c");
      return 1;
   }
   return notify_fail("��ʲô?����Ҫ�����ò���?\n");
}

int valid_leave(object me, string dir)
{
  if (dir != "down")
  {
     this_object()->delete("exits/down");
     return 1;
  }
  return 1;
}
