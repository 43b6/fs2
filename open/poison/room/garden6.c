// Room: /u/r/ranko/garden6.c
inherit ROOM;

void create ()
{
  set ("short", "ˮ��");
  set ("long", @LONG
�˴���ڤ�ƽ�������ȡˮ�Թ��������ֵĶ���,����ʹ�á�����
������һ�Ծ�����ʯ���ɵ�ˮ��(Well),�������,��֪����ͨ��
�η���
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "well" : " ���߽�����,�����������ȥ,ֻ������һ�����.һ����������������촵�����
 ���,�����ƺ����ж���.�Ա���һ����ˮʱ���õ�����(rope),���������˳������
 ������ȥһ̽������
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"garden2-2.c",
]));
  set("light_up", 1);

  setup();
}
 void init()
{
	add_action("do_climb","climb");
}
int do_climb(string str)
{
	object me;
	me = this_player();
	if(!str || str != "rope")
		return notify_fail("��������ô��\n");
                                                                                 
                
	message_vision("$Nץ������,���ž�Ե,�����ص�����ȥ.\n",me);
	tell_room(me,"���ﾮ��,���Ȼ����������һ�����߹�ģ��ɽ��.\n");
	me->move(__DIR__"cave3.c");
                  return 1;
           
                  
}
