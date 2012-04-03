// Room: /open/death/room/h1-10
inherit ROOM;

void create ()
{
  set ("short", "��һ��--�ؿ�");
  set ("long", @LONG
һ���ߴ�ĳ��������������ǰ������ͨ������Ϳ��Ե���ڶ���
���㿴����ǰ�������������ø�ͷ��������Ŀ����������Ҫͨ���˴�
�ƺ�ʮ�ֲ��ס����������Ҫ���ͨ������ʱ����ע�⵽�����������
���������ط���Щ��ͬ....
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h1-9",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/guard1-10.c" : 2,
  __DIR__"action/a1-10.c" : 1,
]));
  set("no_magic", 1);

  setup();
}

        
void init() {
        add_action("do_bribe","bribe");
        }

int do_bribe(string str)
{
    if(str!="guard") 
       return notify_fail("��Ҫ��Ǯ��˭��!!\n");
    else {
      tell_object(this_player(),"��������Ц��Ц˵������ү���߰�!��\n");
      this_player()->move(__DIR__"h2-1");  
    }
}

/*  int valid_leave(object me, string dir)
 {
        if(dir=="enter"&&present("guard",environment(me))) {
        command("kick");
        return 0;
        }
        else tell_object(this_player(),"û�������Ĵ��죬���ƺ��߲����⡣\n");
        return 1;
}  */
